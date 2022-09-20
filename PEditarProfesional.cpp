#include "PEditarProfesional.h"
#include <wx/window.h>
#include <cstdlib>
#include <wx/valtext.h>
#include "Campo.h"
#include <string>
using namespace std;

PEditarProfesional::PEditarProfesional(wxWindow *parent,int fila_actual) : PantallaProfesional(parent) {
	indice_persona=fila_actual;
	DatosGenerales &d = (*mi_campo)*indice_persona;
	
	// rotulos
	string titulo = "Registro de la Persona: ";
	titulo += d.Ver_Apellido()+", "+d.Ver_Nombre();
	SetTitle(titulo);
	VerProfesional	->SetLabel("OK");
	SalirProfesional->SetLabel("Salir");
	GuardarProfesional->SetLabel("Editar");
	puede_guardar = false;
	
	
	// desabilito los campos hasta que el boton editar sea seleccionado
	bool condicion=false;
	tx_nombre_pers->SetEditable(condicion);
	tx_apellido->SetEditable(condicion);
	tx_direccion->SetEditable(condicion);
	tx_telefono->SetEditable(condicion);
	tx_empresa->SetEditable(condicion);
	tx_titulo->SetEditable(condicion);
	tx_especialidad->SetEditable(condicion);
	tx_cuit->SetEditable(condicion);
	//->Enable(condicion);
	
	int usu=0;
	if (d.Ver_Usuario())
		usu=1;
	
	// Coloco valores restantes
	tx_nombre_pers->SetValue(d.Ver_Nombre().c_str());
	tx_apellido->SetValue(d.Ver_Apellido().c_str());
	tx_direccion->SetValue(d.Ver_Direccion().c_str());
	tx_telefono->SetValue(d.Ver_Telefono().c_str());
	tx_empresa->SetValue(d.Ver_Empresa().c_str());
	tx_titulo->SetValue(d.Ver_Titulo().c_str());
	tx_especialidad->SetValue(d.Ver_Especialidad().c_str());
	tx_cuit->SetValue(d.Ver_CUIT().c_str());
	//elegir_usuario->SetSelection(usu);
	
}


/*
void OnClickEliiminar( wxCommandEvent& event )
	void OnClickEditar( wxCommandEvent& event )  
	void OnClickSalir( wxCommandEvent& event ) 
	*/
//~PEditarProfesional();


void PEditarProfesional::OnClickuardarProfesional( wxCommandEvent& event )  {
	bool condicion=true;
	tx_nombre_pers->SetEditable(condicion);
	tx_apellido->SetEditable(condicion);
	tx_direccion->SetEditable(condicion);
	tx_telefono->SetEditable(condicion);
	tx_empresa->SetEditable(condicion);
	tx_titulo->SetEditable(condicion);
	tx_especialidad->SetEditable(condicion);
	tx_cuit->SetEditable(condicion);
	//elegir_usuario->Enable(condicion);
	
	VerProfesional->SetLabel("Guardar");
	GuardarProfesional->Enable(false);
	puede_guardar=true;
	
}
void PEditarProfesional:: OnClickSalirProfesional( wxCommandEvent& event )
{
	Close();
	
}

PEditarProfesional::~PEditarProfesional() {
	
}

void PEditarProfesional::OnClickVerProfesional( wxCommandEvent& event )  {
	if (puede_guardar) {
		
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
			(*mi_campo)*indice_persona = dat; // lo reemplazo
			
			//mi_campo->AgregarDatos ( dat ); // los agrego al vector
			//wxMessageBox("Los datos han sido agregados!!!");
			mi_campo->GuardarProfesional(); // actualizar el archivo
			wxMessageBox("Los datos han sido guardados satisfactoriamente!!!");
			Close();
		}
		else
			wxMessageBox(errores);	// sino muestro los errores
	}
	
}

