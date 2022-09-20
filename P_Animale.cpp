#include "P_Animale.h"
#include "Animal.h"
#include "Campo.h"
#include <wx/msgdlg.h>
#include <string>
#include "Campo.h"
#include <wx/msgdlg.h>
//#include "PEditarProfesional.h"

#include "Application.h"

using namespace std;

P_Animale::P_Animale(wxWindow *parent) : PantallaAnimal(parent) {
	
}

void P_Animale::OnClickVerAnimales( wxCommandEvent& event )  {
	NpVerAnimal= new p_VerAnimal;
	NpVerAnimal->Show();

}

void P_Animale::OmClickGuardarAnimal( wxCommandEvent& event )  {
	// Convierto las cadenas wxString a numeros
	long dia,mes,anio;
	dia=m_dia->GetValue();
	mes=m_mes->GetValue();
	anio=m_anio->GetValue();
	
	
	// Creo la instancia de animal
			  string rp;
			  rp=tx_rp->GetValue().c_str();
			  PasarMayusculas(rp);
			  string nom;
			  nom=tx_nombre->GetValue().c_str();
			  //dia,mes,anio,
			  PasarMayusculas(nom);
			  string raz;
			  raz=tx_raza->GetValue().c_str();
			  PasarMayusculas(raz);
			  string cat;
			  cat=tx_categoria->GetValue().c_str();
			  PasarMayusculas(cat);
			  string sec;
			  sec=tx_seccion->GetValue().c_str();
			  string rc;
				  rc=tx_rc->GetValue().c_str();
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

	string errores=a.Validar( );	// Valido la entrada
			
	if (errores=="") {	// si paso la validacion entro a guardar
		if (mi_campo->BuscarRP(a.Ver_RP(),0)==-1) { // me fijo que no sea repetido el rp
			mi_campo->AgregarAnimal ( a ); // los agrego al vector
			mi_campo->Ordenar(ORDEN_RP); // ordeno los animal por rp
			mi_campo->Guardar(GuardarAnimal); // actualizar el archivo
			wxMessageBox("Los datos han sido guardados satisfactoriamente!!!");
		}
		else {
			string mensajeRP = "El RP: " + a.Ver_RP() + " ya EXISTE!!\n Corrijalo por favor.";
			wxMessageBox(mensajeRP,a.Ver_RP()); // mensaje y titulo
		}
	}
	else
		wxMessageBox(errores);	// sino muestro los errores
			  
}
/*
void P_Animale::OnClickSalir( wxCommandEvent& event )  {
	Close();
}
*/
P_Animale::~P_Animale() {
	
}

void P_Animale::OnClickSalirAnimal( wxCommandEvent& event )  {
	Close();
}

void P_Animale::OnClickVerHistorial( wxCommandEvent& event )  {
	NPVerHistorial= new P_VerHistorial;
	NPVerHistorial->Show();
	
}

