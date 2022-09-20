#include "P_VerProfesional.h"
#include "Campo.h"
#include <wx/msgdlg.h>
#include "PEditarProfesional.h"
#include <string>
using namespace std;

P_VerProfesional::P_VerProfesional(wxWindow *parent) : PantallaVerProfesionales(parent) {
	
	SetTitle("Ver Personas Registradas...");
	//BotonVer1->SetLabel("Ver/Editar");
//	BotonVer2->SetLabel("Salir");
//	BotonVer3->SetLabel("Buscar");
//	BotonVer4->SetLabel("Eleminar");
//	leyenda_ver->Hide();
	
	GrillaVer->AppendRows(mi_campo->CantidadGeneral()); // ..agregar filas
	GrillaVer->AppendCols(9); // ..agregar columnas
	for (int i=0;i<mi_campo->CantidadGeneral();i++) CargarFila(i);// cargar todos los datos
	
	
	GrillaVer->SetSelectionMode(wxGrid::wxGridSelectRows); // hacer que la seleccion sea por fila, y no por celda
	
	// Coloco rotulos a la grilla
	GrillaVer->SetColLabelValue(0,"Apellido");
	GrillaVer->SetColLabelValue(1,"Nombre");
	GrillaVer->SetColLabelValue(2,"Titulo");
	GrillaVer->SetColLabelValue(3,"Especialidad");
	GrillaVer->SetColLabelValue(4,"C.U.I.T");
	GrillaVer->SetColLabelValue(5,"Direccion");
	GrillaVer->SetColLabelValue(6,"Telefono");
	GrillaVer->SetColLabelValue(7,"Empresa");
	GrillaVer->SetColLabelValue(8,"Usuario");
	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<9;k++)
		GrillaVer->AutoSizeColumn(k);
	
	
	Show(); // mostrar la ventana
	
}


void P_VerProfesional::CargarFila(int i) {
	DatosGenerales &d=(*mi_campo)*i;
	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<9;k++)
		GrillaVer->AutoSizeColumn(k);
	
	
	// Cargo la grilla con los valores
	GrillaVer->SetCellValue(i,0,d.Ver_Apellido().c_str());
	GrillaVer->SetCellValue(i,1,d.Ver_Nombre().c_str());
	GrillaVer->SetCellValue(i,2,d.Ver_Titulo().c_str());
	GrillaVer->SetCellValue(i,3,d.Ver_Especialidad().c_str());
	GrillaVer->SetCellValue(i,4,d.Ver_CUIT().c_str());
	GrillaVer->SetCellValue(i,5,d.Ver_Direccion().c_str());
	GrillaVer->SetCellValue(i,6,d.Ver_Telefono().c_str());
	GrillaVer->SetCellValue(i,7,d.Ver_Empresa().c_str());
	GrillaVer->SetCellValue(i,8,Resbool(d.Ver_Usuario()).c_str());
}

P_VerProfesional::~P_VerProfesional() {
	
}

void P_VerProfesional::Enter_tx_Buscar( wxCommandEvent& event )  {
	event.Skip();
}

void P_VerProfesional::OnClickBuscarPersona( wxCommandEvent& event )  {
	// buscar desde la fila actual
	int fila_actual = GrillaVer->GetGridCursorRow();
	int res=-1;
	string w;
	w=tx_buscar->GetValue();
	int x=mi_campo->BuscarApellido(w,fila_actual+1);

	
	res=x;
	// si no encontro buscar otra vez desde el principio
	if (res==-1) 
		res=mi_campo->BuscarApellido(w,0);
	// si deseo busca en otro lugar aparte del apellido
		if (res==-1)
			res=mi_campo->BuscarNombrep(w,fila_actual+1);
		if (res==-1)
			res=mi_campo->BuscarNombrep(w,0);
	if (res==-1) // si no hay ninguna coincidencia
		wxMessageBox("No se encontraron coincidencias");
	else {
		GrillaVer->SetGridCursor(res,0); // seleccionar
		GrillaVer->SelectRow(res); // seleccionar
	}
}

void P_VerProfesional::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = GrillaVer->GetGridCursorRow(); // obtener el indice de persona
	PEditarProfesional *NPEditarProfesional = new PEditarProfesional(this,fila_actual); // crear la ventana
		if (NPEditarProfesional->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void P_VerProfesional::ClickGrilla( wxGridEvent& event )  {
	event.Skip();
}

void P_VerProfesional::OnClickEliiminar( wxCommandEvent& event )  {

	if (mi_campo->CantidadGeneral()){
		int fila_actual = GrillaVer->GetGridCursorRow(); // obtengo la posicion del cursor
		int res = wxMessageBox("Eliminar registro de la persona por completo?",GrillaVer->GetCellValue(fila_actual,0),wxYES_NO);// muestro mensaje
		if (res==wxYES) {// si responde que si
			GrillaVer->DeleteRows(fila_actual,1);// elemino la fila
			mi_campo->EleminarDato(fila_actual);// elemino el registro
			mi_campo->Guardar(GuardarGeneral);// guardo
		}
	}
}

void P_VerProfesional::OnClickEditar( wxCommandEvent& event )  {
	// Ver o editar
	int fila_actual = GrillaVer->GetGridCursorRow(); // obtener el indice de persona
	PEditarProfesional *NPEditarProfesional = new PEditarProfesional(this,fila_actual); // crear la ventana
	//	nueva_ventana->ShowModal();
	// si se quiere agregar uno nuevo
	if (NPEditarProfesional->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void P_VerProfesional::OnClickSalir( wxCommandEvent& event )  {
	Close();
}

