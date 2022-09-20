#include "PEditarAnimal.h"
#include <wx/window.h>
#include <cstdlib>
#include <wx/valtext.h>
#include "Campo.h"
#include <string>
using namespace std;

PEditarAnimal::PEditarAnimal(wxWindow *parent,int fila_actual) : PantallaAnimal(parent) {
	indice_animal=fila_actual;
	Animal &a=(*mi_campo)[indice_animal];
	
	// rotulos
		
	string titulo = "Registro del animal: ";
	titulo += a.Ver_RP();
	SetTitle(titulo);
	VerAnimal->SetLabel("OK");
	SalirAnimal->SetLabel("Salir");
	GuardarAnimalp->SetLabel("Editar");
	puede_guardar = false;
	
	
	
	tx_rp->SetValue(a.Ver_RP().c_str());
	tx_nombre->SetValue(a.Ver_Nombre().c_str());
	m_dia->SetValue(wxString()<<a.Ver_Dia_Nac());// las fechas
	m_mes->SetValue(wxString()<<a.Ver_Mes_Nac());
	m_anio->SetValue(wxString()<<a.Ver_Anio_Nac());
	tx_raza->SetValue(a.Ver_Raza().c_str());
	tx_categoria->SetValue(a.Ver_Categoria().c_str());
	tx_seccion->SetValue(a.Ver_Seccion().c_str());
	tx_rc->SetValue(a.Ver_RC().c_str());
	//tx_hba->SetValue(a.Ver_HBA().c_str());
	tx_procedencia->SetValue(a.Ver_Procedencia().c_str());
	elegir_preniada->SetSelection(a.Ver_Preniada()); // cero=NO, 1=SI
	tx_rpmadre->SetValue(a.Ver_RP_Madre().c_str());
	//tx_hba_madre->SetValue(a.Ver_HBA_Madre().c_str());
	//tx_rc_madre->SetValue(a.Ver_RC_Madre().c_str());
	//tx_hba_padre->SetValue(a.Ver_HBA_Padre().c_str());
	tx_rppadre->SetValue(a.Ver_RP_Padre().c_str());
	elegir_muerto->SetSelection(a.Ver_Muerto()); // 0=Si 1=NO
	elegir_vendido->SetSelection(a.Ver_Vendido());
	elegir_sexo->SetSelection(a.Ver_Sexo());
	
	//Desahabilito los campos para que el usuario no pueda modificar
	bool condicion = false;
	
	tx_rp->SetEditable(condicion);
	tx_nombre->SetEditable(condicion);
	m_dia->Disable();
	m_mes->Disable();
	m_anio->Disable();
	tx_raza->SetEditable(condicion);
	tx_categoria->SetEditable(condicion);
	tx_seccion->SetEditable(condicion);
	tx_rc->SetEditable(condicion);
	//tx_hba->SetEditable(condicion);
	tx_procedencia->SetEditable(condicion);
	elegir_preniada->Disable();
	tx_rpmadre->SetEditable(condicion);
	//tx_hba_madre->SetEditable(condicion);
	//tx_rc_madre->SetEditable(condicion);
	//tx_hba_padre->SetEditable(condicion);
	tx_rppadre->SetEditable(condicion);
	elegir_muerto->Disable();
	elegir_vendido->Disable();
	elegir_sexo->Disable();
}


/*
void OnClickEliiminar( wxCommandEvent& event )
	void OnClickEditar( wxCommandEvent& event )  
	void OnClickSalir( wxCommandEvent& event ) 
	*/
//~PEditarProfesional();

/*
void PEditarAnimal::OnClickuardarAnimalva( wxCommandEvent& event )  {
	
	
}
*/
void PEditarAnimal:: OnClickSalirAnimal( wxCommandEvent& event )
{
	Close();
	
}

PEditarAnimal::~PEditarAnimal() {
	
}

void PEditarAnimal::OnClickVerAnimales( wxCommandEvent& event ) {
	
	// Convierto las cadenas wxString a numeros
	long dia,mes,anio;
	dia=m_dia->GetValue();
	mes=m_mes->GetValue();
	anio=m_anio->GetValue();
	
	// Verifico si puedo guardar los cambios
	if (puede_guardar) {
		
		string rp;
		rp=tx_rp->GetValue().c_str();
		PasarMayusculas(rp);
		string nom;
		nom=tx_nombre->GetValue().c_str();
		PasarMayusculas(nom);
		//dia,mes,anio,
		string raz;
		raz=tx_raza->GetValue().c_str();
		PasarMayusculas(raz);
		string cat;
		cat=tx_categoria->GetValue().c_str();
		PasarMayusculas(cat );
		string sec;
		sec=tx_seccion->GetValue().c_str();
		PasarMayusculas(sec);
		string rc;
		rc=tx_rc->GetValue().c_str();
		PasarMayusculas(rc);
		//tx_hba->GetValue().c_str(),
		string pro;
		pro=tx_procedencia->GetValue().c_str();
		PasarMayusculas(pro);
		bool pre=elegir_preniada->GetSelection();
		string rpm;
		rpm=tx_rpmadre->GetValue().c_str();
		PasarMayusculas(rpm);
		//tx_hba_madre->GetValue().c_str(),
		// tx_rc_madre->GetValue().c_str(),
		// tx_hba_padre->GetValue().c_str(),
		string rpp;
		rpp=tx_rppadre->GetValue().c_str();
		PasarMayusculas(rpp);
		bool mue=elegir_muerto->GetSelection();
		bool ven=elegir_vendido->GetSelection();
		bool sex=elegir_sexo->GetSelection();
		Animal a(rp,nom,dia,mes,anio,raz,cat,sec,rc,pro,pre,rpm,rpp,mue,ven,sex);
		
		string errores=a.Validar();	// Valido la entrada
		
		if (errores=="") {	// si paso la validacion entro a guardar
			(*mi_campo)[indice_animal] = a; // lo reemplazo
			mi_campo->Ordenar(ORDEN_RP); // ordeno los animal por rp
			mi_campo->Guardar(GuardarAnimal); // actualizar el archivo
			
			//not matching funtion fot call yo "campo:: guardar wx button &
			
			
			wxMessageBox("El evento ha sido guardado satisfactoriamente!!!");
		}
		else
			wxMessageBox(errores);	// sino muestro los errores
	}
}

void PEditarAnimal::OmClickGuardarAnimal( wxCommandEvent& event )  {
	bool condicion = true;
	
	tx_rp->SetEditable(condicion);
	tx_nombre->SetEditable(condicion);
	m_dia->Enable();
	m_mes->Enable();
	m_anio->Enable();
	tx_raza->SetEditable(condicion);
	tx_categoria->SetEditable(condicion);
	tx_seccion->SetEditable(condicion);
	tx_rc->SetEditable(condicion);
	//tx_hba->SetEditable(condicion);
	tx_procedencia->SetEditable(condicion);
	elegir_preniada->Enable(); 
	tx_rpmadre->SetEditable(condicion);
	//tx_hba_madre->SetEditable(condicion);
	//tx_rc_madre->SetEditable(condicion);
	//tx_hba_padre->SetEditable(condicion);
	tx_rppadre->SetEditable(condicion);
	elegir_muerto->Enable(); 
	elegir_vendido->Enable();
	elegir_sexo->Enable();
	// desactivo el boton despues de habilitar los campos
	/*BotonAnimal3->Disable();
	BotonAnimal1->SetLabel("Guardar");
	puede_guardar = true;*/
	
	VerAnimal->SetLabel("Guardar");
	GuardarAnimalp->Enable(false);
	puede_guardar=true;
	
}

void PEditarAnimal::OnClickVerHistorial( wxCommandEvent& event )  {
	event.Skip();
}

