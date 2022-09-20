#include "P_Evento.h"
#include "Eventos.h"
#include "PEditarEvento.h"
#include <string>
#include "Campo.h"
#include <wx/msgdlg.h>
#include "Application.h"
#include <wx/datetime.h>
#include <wx/string.h>
using namespace std;

P_Evento::P_Evento(wxWindow *parent) : PantallaEvento(parent) {
	
	
	
	
	
	
	// cargo todos los rp de los animales registrados
	int j=mi_campo->CantidadAnimales();
	for (int i=0; i<j; i++) {
		Animal a=(*mi_campo)[i];
		elegir_RP_evento->Insert(a.Ver_RP(),i);// Insertar string
	}
	elegir_RP_evento->SetSelection(-1);
	
	tx_nom_eve->SetEditable(false);	// no dejo que se edite
	tx_raza_eve->SetEditable(false);
	tx_rc_eve->SetEditable(false);
	
	
	// coloco la fecha actual
	wxDateTime datetime = wxDateTime::Now();
	m_dia_eve->SetValue(wxString()<<datetime.GetDay());
	m_mes_eve->SetValue(wxString()<<datetime.GetMonth()+1);
	m_anio_eve->SetValue(wxString()<<datetime.GetYear());
	
	
	
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
	
	
	
	
	elegir_vacuna->SetSelection(-1);	
	
	elegir_meses->Insert("1 MES",0);
	elegir_meses->Insert("3 MESES",1);
	elegir_meses->Insert("4 MESES",2);
	elegir_meses->Insert("6 MESES",3);
	elegir_meses->Insert("9 MESES",4);
	elegir_meses->Insert("12 MES",5);
	elegir_meses->SetSelection(-1);	//LO DEJO EN 0;si es 0 Proximo control vacio;
	
	//tx_produccion->GetValue().ToLong(&pro);
	
	
	
	// Cargo la lista desplegable con los responsables
	int d=mi_campo->CantidadGeneral();
	for (int h=0; h<d; h++) {
		DatosGenerales f=(*mi_campo)*h;
		elegir_responsable->Insert(f.Ver_Apellido(),h);// Insertar string
	}
	elegir_evento->SetEditable(false);
	
	
	

	
	
	
	
}

P_Evento::~P_Evento() {
	
}

void P_Evento::ClickElegirRp( wxCommandEvent& event )  {
	string BusquedaRP;
	BusquedaRP=elegir_RP_evento->GetStringSelection();
	int i;
	i=mi_campo->BuscarRP(BusquedaRP,0);	// busco segun el rp al animal
	Animal a=(*mi_campo)[i];// una vez encontrado..
	tx_nom_eve->SetValue(a.Ver_Nombre().c_str());// muestro el nombre
	tx_raza_eve->SetValue(a.Ver_Raza().c_str());// muestro la raza
	tx_rc_eve->SetValue(a.Ver_RC().c_str());
	
	
}

void P_Evento::ClickELegirEvento( wxCommandEvent& event )  {
	string aux;
	aux=elegir_evento->GetValue().c_str();
	if (aux=="CONTROL SANITARIO"){
		bool condicion = true;
		elegir_vacuna->Insert("PIOJOS",0);// Insertar string
		elegir_vacuna->Insert("BAÑO",1);// Insertar string
		//leyenda_produc_eve->SetLabel("Produccion: ");
		
		m_staticText42->SetLabel("Control: ");
		m_staticText42->Enable(true);	// activo la leyenda de produccion
		//tx_produccion->Enable(true);	// activo el ingreso de texto
		elegir_vacuna->Enable(true);
	}
	else{
	if (aux=="VACUNACION"){
		bool condicion = true;
		// coloco nombre de las vacunas elegir en la lista desplegable
		elegir_vacuna->Insert("AFTOSA",0);// Insertar string
		elegir_vacuna->Insert("MANCHA",1);// Insertar string
		elegir_vacuna->Insert("BRUCELOSIS",2);// Insertar string
		elegir_vacuna->Insert("ANTIPARASITARIO",3);// Insertar string
		elegir_vacuna->Insert("LEPTOSPIROSIS",4);// Insertar string
		elegir_vacuna->Insert("PIOJOS",5);// Insertar string
		elegir_vacuna->Insert("VIBROSIS",6);// Insertar string
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
	}}
	if (aux=="VENTA") {
		bool condicion = false;
		m_staticText39->Enable(false);	// activo la leyenda de produccion
		//tx_produccion->Enable(true);	// activo el ingreso de texto
		elegir_meses->Enable(false);
		elegir_vacuna->Enable(false);
		
		wxMessageBox("Si ha vendido este Animal, recuerde modificar, su estado de condicion!!!");
		
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

void P_Evento::ClickElegirResponsable( wxCommandEvent& event )  {
	
	
}

void P_Evento::OnClickVerPEvento( wxCommandEvent& event )  {
	event.Skip();
}

void P_Evento::OnClickGuardarPEvento( wxCommandEvent& event )  {
	//pongo en 0 o vacio cadenas que despues no se si van a estar completas
	string ev="";
	long peso=0;
	string va="";
	string me="";
	ev=elegir_evento->GetValue().c_str();
	
	PasarMayusculas(ev);
	if (ev=="VACUNACION"||"CONTROL SANITARIO") {
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
	tx_peso_eve->GetValue().ToLong(&peso);
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

void P_Evento::OnClickSalirPEvento( wxCommandEvent& event )  {
	Close();
}

void P_Evento::ClickElegirMeses( wxCommandEvent& event )  {
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

