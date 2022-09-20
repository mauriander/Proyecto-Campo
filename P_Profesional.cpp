#include "P_Profesional.h"
#include "DatosGenerales.h"
#include <string>
#include <wx/msgdlg.h>
#include <string>
#include "Campo.h"
//#include "Singleton.h"
//#include "Entrenamiento.h"
#include <cstdlib>
#include <wx/valtext.h>

#include "PEditarProfesional.h"
#include <string>
#include "Application.h"
using namespace std;

P_Profesional::P_Profesional(wxWindow *parent) : PantallaProfesional(parent) {
	
}


P_Profesional::~P_Profesional() {
	
}

void P_Profesional::OnClickuardarProfesional( wxCommandEvent& event )  {
	//nombre=tx_nombre->GetValue(); 
	//tx_nombre_pers->GetValue().c_str();
//	DatosGenerales d ( 
	string nom;
	string ape;
	string dir;
	string tel;
	string emp;
	string tit;
	string esp; 
	string cuit; 
	bool usua;
					 nom= tx_nombre_pers->GetValue();
					 ape= tx_apellido->GetValue();
					 dir= tx_direccion->GetValue().c_str();
					 tel= tx_telefono->GetValue().c_str();
					 emp= tx_empresa->GetValue().c_str();
					 tit= tx_titulo->GetValue().c_str();
					 esp= tx_especialidad->GetValue().c_str();
					 cuit= tx_cuit->GetValue().c_str();
					 usua= usuario;
					//  );
	
	DatosGenerales dat(nom, ape, dir, tel, emp, tit, esp, cuit, usua);
					 
	string errores=dat.Validar();	// Valido la entrada
	int w;
	w=mi_campo->CantidadGeneral();
	string rg;
	rg=to_string(w);
	if (errores=="") {	// si paso la validacion entro a guardar
		//wxMessageBox(rg);
		mi_campo->AgregarDatos ( dat ); // los agrego al vector
		//wxMessageBox("Los datos han sido agregados!!!");
		mi_campo->GuardarProfesional(); // actualizar el archivo
		wxMessageBox("Los datos han sido guardados satisfactoriamente!!!");
		Close();
	}
	else
		wxMessageBox(errores);	// sino muestro los errores
	
}

void P_Profesional::OnClickSalirProfesional( wxCommandEvent& event )  {
	Close();
}

void P_Profesional::OnClickVerProfesional( wxCommandEvent& event )  {
	NPVerProfesional= new P_VerProfesional;
	NPVerProfesional->Show();
}

