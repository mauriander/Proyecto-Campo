#include "PEditarEvento.h"
#include <wx/window.h>
#include <cstdlib>
#include <wx/valtext.h>
#include "Campo.h"
#include <string>

using namespace std;


PEditarEvento::PEditarEvento(wxWindow *parent, int fila_actual) : PantallaEvento(parent) {
	indice_evento=fila_actual;
	Eventos &e=(*mi_campo)(indice_evento);
	
	// rotulos
	string titulo = "Evento del animal: ";
	titulo += e.Ver_RP_Evento();
	SetTitle(titulo);
	Ver_eventos->SetLabel("OK");
	Salir_evento->SetLabel("Salir");
	Guardar_eventos->SetLabel("Editar");
	//leyenda_n_ordenie->SetLabel("N° Ordeñe:");
	//elegir_numero_ord->Enable(false);
	puede_guardar = false;
	
	
	// desabilito el boton y leyendas hasta que el evento sea seleccionado
	bool condicion=false;
	//BotonEvento4->Enable(condicion);
	//leyenda_produc_eve->Enable(condicion);	// desactivo la leyenda de produccion
	//tx_produccion->Enable(condicion);	// Desactivo el ingreso de texto
	tx_nom_eve->SetEditable(condicion);	// no dejo que se edite
	tx_raza_eve->SetEditable(condicion);	// no dejo que se edite
	tx_rc_eve->SetEditable(condicion);	// no dejo que se edite
	elegir_RP_evento->Enable(condicion);
	elegir_evento->Enable(condicion);
	elegir_responsable->Enable(condicion);
	elegir_meses->Enable(condicion);
	elegir_vacuna->Enable(condicion);
	tx_obs_eve->SetEditable(condicion);
	tx_peso_eve->SetEditable(condicion);
	tx_proximo_eve->SetEditable(condicion);
	m_dia_eve->Enable(condicion);
	m_mes_eve->Enable(condicion);
	m_anio_eve->Enable(condicion);

//	tx_gb->Enable(condicion);
//	tx_proteinas->Enable(condicion);
//	tx_recuento_celular->Enable(condicion);
//	tx_solidos->Enable(condicion);
//	leyenda_gb->Enable(condicion);
//	leyenda_proteinas->Enable(condicion);
//	leyenda_solidos->Enable(condicion);
//	leyenda_rc->Enable(condicion);	
	
	
	// coloco nombre de los eventos a elegir en la lista desplegable
	// coloco nombre de los eventos a elegir en la lista desplegable
	elegir_evento->Insert("REVISION DE TOROS",0);// Insertar string
	elegir_evento->Insert("CELOS",1);// Insertar string
	elegir_evento->Insert("SERVICIOS",2);// Insertar string
	elegir_evento->Insert("TACTO",3);// Insertar string
	elegir_evento->Insert("CONTROL SANITARIO",4);// Insertar string
	elegir_evento->Insert("DESTETE",5);// Insertar string
	elegir_evento->Insert("VACUNACION",6);// Insertar string
	elegir_evento->Insert("SECADO",7);// Insertar string
	elegir_evento->Insert("PARTO",8);// Insertar string
	elegir_evento->Insert("ABORTO",9);// Insertar string
	elegir_evento->Insert("VENTA",10);// Insertar string
	elegir_evento->Insert("** Nuevo Evento **",11);//inserto para agregar un nuevo evento a la lista
	
	// coloco nombre de las vacunas elegir en la lista desplegable
	elegir_vacuna->Insert("AFTOSA",0);// Insertar string
	elegir_vacuna->Insert("MANCHA",1);// Insertar string
	elegir_vacuna->Insert("BRUCELOSIS",2);// Insertar string
	elegir_vacuna->Insert("ANTIPARASITARIO",3);// Insertar string
	elegir_vacuna->Insert("LEPTOSPIROSIS",4);// Insertar string
	elegir_vacuna->Insert("PIOJOS",5);// Insertar string
	elegir_vacuna->Insert("VIBROSIS",6);// Insertar string
	elegir_vacuna->SetSelection(-1);	
		

	// lo selecciono
	//elegir_numero_ord->SetSelection(e.Ver_Numero_Ordenie());
	//elegir_numero_ord->Enable(false);
	
	//selecciono el evento que se quiere modificar
//	if (e.Ver_Produccion()!=0)
//	elegir_evento->SetSelection(0);
//	int h=elegir_evento->FindString(e.Ver_EVEN().c_str());
//	elegir_evento->SetSelection(h);
	
	// cargo todos los rp de los animales registrados
	int j=mi_campo->CantidadAnimales();
	for (int i=0; i<j; i++) {
		Animal a=(*mi_campo)[i];
		elegir_RP_evento->Insert(a.Ver_RP(),i);// Insertar string
	}
	// Selecciono el evento que tengo que modificar
//	int i=mi_tambo->BuscarRP(elegir_rp_animal->GetStringSelection().c_str(),0);
	int i=mi_campo->BuscarRP(e.Ver_RP_Evento(),0);
	elegir_RP_evento->SetSelection(i);
	Animal a=(*mi_campo)[i];
	tx_nom_eve->SetValue(a.Ver_Nombre().c_str());
	tx_raza_eve->SetValue(a.Ver_Raza().c_str());
	
	// Cargo la lista desplegable con los responsables
	int d=mi_campo->CantidadGeneral();
	for (int h=0; h<d; h++) {
		DatosGenerales f=(*mi_campo)*h;
		elegir_responsable->Insert(f.Ver_Apellido(),h);// Insertar string
	}
	// Selecciono el responsable del Eventos
	int res;
	res=mi_campo->BuscarResponsable(e.Ver_Responsable(),0);
	elegir_responsable->SetSelection(res);
	
	// coloco si hay informacion del control lechero
//	tx_gb->SetValue(wxString()<<e.Ver_Grasa_Butirosa());
//	tx_proteinas->SetValue(wxString()<<e.Ver_Proteinas());
//	tx_recuento_celular->SetValue(wxString()<<e.Ver_Recuento_Cel());
//	tx_solidos->SetValue(wxString()<<e.Ver_Solidos());
	
	// Coloco valores restantes
	m_dia_eve->SetValue(wxString()<<e.Ver_Dia_Eve());
	m_mes_eve->SetValue(wxString()<<e.Ver_Mes_Eve());
	m_anio_eve->SetValue(wxString()<<e.Ver_Anio_Eve());
	tx_obs_eve->SetValue(e.Ver_Observaciones().c_str());
//	tx_produccion->SetValue(wxString()<<e.Ver_Produccion());
	
	// deshabilito el control para editar los eventos
	elegir_evento->SetEditable(false);
}

PEditarEvento::~PEditarEvento() {
	
}
/*
void PEditarEvento::ClckElegirRp( wxCommandEvent& event ) {
	string BusquedaRP;
	BusquedaRP=elegir_RP_evento->GetStringSelection();
	int i;
	i=mi_campo->BuscarRP(BusquedaRP,0);	// busco segun el rp al animal
	Animal a=(*mi_campo)[i];// una vez encontrado..
	tx_nom_eve->SetValue(a.Ver_Nombre().c_str());// muestro el nombre
	tx_raza_eve->SetValue(a.Ver_Raza().c_str());// muestro la raza
	tx_rc_eve->SetValue(a.Ver_RC().c_str());
	
}*/


/*
void PEditarEvento::ClickElegirEvento( wxCommandEvent& event ) {
	string aux;
	aux=elegir_evento->GetValue().c_str();
	if (aux=="VACUNACION"){
		bool condicion = true;
		//leyenda_produc_eve->SetLabel("Produccion: ");
		m_staticText42->Enable(true);	// activo la leyenda de produccion
		//tx_produccion->Enable(true);	// activo el ingreso de texto
		elegir_vacuna->Enable(true);
	}
	else {
		bool condicion = false;
		//leyenda_produc_eve->SetLabel("Produccion: ");
		m_staticText42->Enable(false);	// Desactivo la leyenda de produccion
		//tx_produccion->Enable(false);	// Desactivo el ingreso de texto
		elegir_vacuna->Enable(false);
		if (aux!="VACUNACION")
			elegir_vacuna->Enable(condicion);
	}
	if (aux=="VENTA") {
		bool condicion = false;
		m_staticText39->Enable(false);	// activo la leyenda de produccion
		//tx_produccion->Enable(true);	// activo el ingreso de texto
		elegir_meses->Enable(false);
		elegir_vacuna->Enable(false);
		
	}else{
		bool condicion = true;
		//leyenda_produc_eve->SetLabel("Produccion: ");
		m_staticText39->Enable(true);	// Desactivo la leyenda de produccion
		elegir_meses->Enable(true);
		//tx_produccion->Enable(false);	// Desactivo el ingreso de texto
		//elegir_vacuna->Enable(false);
}
	if (aux=="** Nuevo Evento **") {
		elegir_evento->SetEditable(true);
	}
	else
		elegir_evento->SetEditable(false);
	
}
*/



/*
void PEditarEvento::ClickElegirResponsable( wxCommandEvent& event ) {
	
}*/

void PEditarEvento::OnClickGuardarPEvento( wxCommandEvent& event ) {
	// para poder editar
	bool condicion=true;
//	BotonEvento4->Enable(condicion);
//	leyenda_produc_eve->Enable(condicion);	// desactivo la leyenda de produccion
//	tx_produccion->Enable(condicion);	// Desactivo el ingreso de texto
	
	
	
	
	//elegir_RP_evento->Enable(condicion);
	
	elegir_evento->Enable(condicion);
	elegir_responsable->Enable(condicion);
	tx_obs_eve->SetEditable(condicion);
	m_dia_eve->Enable(condicion);
	m_mes_eve->Enable(condicion);
	m_anio_eve->Enable(condicion);
	//elegir_meses->Enable(condicion);
	tx_peso_eve->SetEditable(condicion);
	
	
//	elegir_numero_ord->Enable(condicion);
//	tx_gb->Enable(condicion);
//	tx_proteinas->Enable(condicion);
//	tx_recuento_celular->Enable(condicion);
//	tx_solidos->Enable(condicion);
//	leyenda_gb->Enable(condicion);
//	leyenda_proteinas->Enable(condicion);
//	leyenda_solidos->Enable(condicion);
//	leyenda_rc->Enable(condicion);
	
	//OnClickGuardarPEvento->SetLabel("Guardar");
	Ver_eventos->SetLabel("Guardar");
	puede_guardar=condicion;
}

void PEditarEvento::OnClickVerPEvento( wxCommandEvent& event ) {

	if(puede_guardar) {
		
		string ev="";
		int peso=0;
		string va="";
		string me="";
		ev=elegir_evento->GetValue().c_str();
		
		PasarMayusculas(ev);
		if (ev=="VACUNACION") {
			va=elegir_vacuna->GetValue().c_str();
			
		}
		
		me=elegir_meses->GetValue().c_str();
		
		long mmes;
		tx_proximo_eve->GetValue().ToLong(&mmes);
		PasarMayusculas(me);
		// Convierto las cadenas wxString a numeros
		// o no puede haber errores
		long dia,mes,anio;
		dia=m_dia_eve->GetValue();
		mes=m_mes_eve->GetValue();
		anio=m_anio_eve->GetValue();
		
		string rpeven;
		rpeven=elegir_RP_evento->GetStringSelection().c_str();
		string respons;
		respons=elegir_responsable->GetStringSelection().c_str();
		string ob;
		ob="";
		ob=tx_obs_eve->GetStringSelection().c_str();
		Eventos e (peso,mmes,rpeven,dia,mes,anio,ev,ob,respons,va);
		
		string errores=e.Validar();	// Valido la entrada
		if (errores=="") {	// si paso la validacion entro a guardar
			mi_campo->AgregarEvento(e);
			mi_campo->Ordenar(ORDEN_RP_EVEN); //ordeno por rp del animal del evento
			mi_campo->Guardar(GuardarEventos); // actualizar el archivo
			wxMessageBox("El evento ha sido guardado satisfactoriamente!!!");
		}
		else
			wxMessageBox(errores);	// sino muestro los errores
	}
	
}
void PEditarEvento::OnClickSalirPEvento( wxCommandEvent& event ) {
	//EndModal(1);	// Salir
	Close();
}
/*
void PEditarEvento::EnterElegirEvento( wxCommandEvent& event ) {
	
}*/



void PEditarEvento::ClickElegirMeses( wxCommandEvent& event )  {
	string h;
	
	// Convierto las cadenas wxString a numeros
	/*long dia,mes,anio;
	tx_fecha_dia_eve->GetValue().ToLong(&dia);*/
	
	int dia,mes,anio;
	dia=m_dia_eve->GetValue();
	mes=m_mes_eve->GetValue();
	anio=m_anio_eve->GetValue();
	//m_dia_eve->GetValue().ToLong(&dia);
	//m_anio_eve->GetValue().ToLong(&anio);
	//m_mes_eve->GetValue().ToLong(&mes);
	// coloco la fecha actual
	wxDateTime datetime = wxDateTime::Now();
	int dia_pro=datetime.GetDay();
	int mes_pro=datetime.GetMonth()+1;
	int anio_pro=datetime.GetYear();
	
	int a=anio*365 + mes*30 + dia;
	int b=anio_pro*365 + mes_pro*30 + dia_pro;
	
	
	h=elegir_meses->GetStringSelection().c_str();
	if (h=="1 MES"){
		int w=a+30-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<"Control caducado");	
	}
	
	
	if (h=="3 MESES"){
		int w=a+90-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<"Control caducado");	
	}
	if (h=="4 MESES"){
		int w=a+120-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<"Control caducado");	
	}
	if (h=="6 MESES"){
		int w=a+180-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<"Control caducado");	
	}
	if (h=="9 MESES"){
		int w=a+270-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<w<<" Control caducado");	
	}
	if (h=="12 MESES"){
		int w=a+30-b;
		if(w>0)
			tx_proximo_eve->SetValue(wxString()<<w);
		else
			tx_proximo_eve->SetValue(wxString()<<"Control caducado");	
	}
	
	
}

void PEditarEvento::ClickElegirRp( wxCommandEvent& event )  {
	event.Skip();
}

void PEditarEvento::ClickELegirEvento( wxCommandEvent& event )  {
	event.Skip();
}

void PEditarEvento::ClickElegirResponsable( wxCommandEvent& event )  {
	event.Skip();
}

