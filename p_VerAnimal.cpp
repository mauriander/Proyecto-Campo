#include "p_VerAnimal.h"
#include <wx/grid.h>
#include "wxfb_project.h"
#include "Animal.h"
#include "Campo.h"
#include <ctime>
#include <wx/msgdlg.h>
#include "PEditarAnimal.h"
#include "Application.h"
#include <string>
using namespace std;

p_VerAnimal::p_VerAnimal(wxWindow *parent) : PantallaVerAnimal(parent) {
	
	
	
	
	GrillaVer->AppendRows(mi_campo->CantidadAnimales()); // ..agregar filas
	GrillaVer->AppendCols(17); // ..agregar columnas
	int cantia=0;
	for (int i=0;i<mi_campo->CantidadAnimales();i++) CargarFila(i);// cargar todos los datos
	GrillaVer->SetSelectionMode(wxGrid::wxGridSelectRows); // hacer que la seleccion sea por fila, y no por celda
	
	for (int i=0;i<mi_campo->CantidadAnimales();i++) {// cargar todos los datos
		Animal &a=(*mi_campo)[i];
		if(a.Ver_Muerto()||a.Ver_Vendido()==true){
			cantia=cantia+0;	
		}
		else{
			cantia++;
		}
	}
	
	tx_cantidad_animales->SetValue(wxString()<<cantia);
	
	// Coloco rotulos a la grilla
	GrillaVer->SetColLabelValue(0,"RP");
	GrillaVer->SetColLabelValue(1,"Nombre");
	GrillaVer->SetColLabelValue(2,"Fecha Nac.");
	GrillaVer->SetColLabelValue(3,"Raza");
	GrillaVer->SetColLabelValue(4,"Categoria");
	GrillaVer->SetColLabelValue(5,"Seccion");
	GrillaVer->SetColLabelValue(6,"ID Interno");
	GrillaVer->SetColLabelValue(7,"SEXO");
	GrillaVer->SetColLabelValue(8,"Procedencia");
	GrillaVer->SetColLabelValue(9,"Preñada");
	//GrillaVer->SetColLabelValue(,"RC Madre");
	//GrillaVer->SetColLabelValue(11,"HBA Madre");
	GrillaVer->SetColLabelValue(10,"RP Madre");
	//GrillaVer->SetColLabelValue(13,"HBA Padre");
	GrillaVer->SetColLabelValue(11,"RP Padre");
	GrillaVer->SetColLabelValue(12,"Muerto");
	GrillaVer->SetColLabelValue(13,"Vendido");
	GrillaVer->SetColLabelValue(14,"Edad");
	GrillaVer->SetColLabelValue(15,"Abuelo");
	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<14;k++)
		GrillaVer->AutoSizeColumn(k);
	
	Show(); // mostrar la ventana
	
}
void p_VerAnimal::CargarFila(int i) {
	Animal &a=(*mi_campo)[i];
	
	
	//	 que se ajusten al tamaño adecuado
	//	for(int k=0;k<17;k++)
	//		GrillaVer->AutoSizeColumn(k);
	
	// Cargo la grilla con los valores
	GrillaVer->SetCellValue(i,0,a.Ver_RP().c_str());
	GrillaVer->SetCellValue(i,1,a.Ver_Nombre().c_str());
	GrillaVer->SetCellValue(i,2,((wxString()<<a.Ver_Dia_Nac())+"/"+(wxString()<<a.Ver_Mes_Nac())+"/"+(wxString()<<a.Ver_Anio_Nac())));//muestro la fecha
	GrillaVer->SetCellValue(i,3,a.Ver_Raza().c_str());
	GrillaVer->SetCellValue(i,4,a.Ver_Categoria().c_str());
	GrillaVer->SetCellValue(i,5,a.Ver_Seccion().c_str());
	GrillaVer->SetCellValue(i,6,a.Ver_RC().c_str());
	string ssexo;
	int x=a.Ver_Sexo();
	if(x==0){
		ssexo="MACHO";		
	}
	else{
		ssexo="HEMBRA";		
		}
	GrillaVer->SetCellValue(i,7,ssexo);
	GrillaVer->SetCellValue(i,8,a.Ver_Procedencia().c_str());
	GrillaVer->SetCellValue(i,9,(Resbool (a.Ver_Preniada())).c_str());
	//GrillaVer->SetCellValue(i,10,a.Ver_RC_Madre().c_str());
	//GrillaVer->SetCellValue(i,11,a.Ver_HBA_Madre().c_str());
	GrillaVer->SetCellValue(i,10,a.Ver_RP_Madre().c_str());
	//GrillaVer->SetCellValue(i,13,a.Ver_HBA_Padre().c_str());
	GrillaVer->SetCellValue(i,11,a.Ver_RP_Padre().c_str());
	GrillaVer->SetCellValue(i,12,(Resbool (a.Ver_Muerto()).c_str()));
	GrillaVer->SetCellValue(i,13,(Resbool (a.Ver_Vendido()).c_str()));
	int diah,mesh,anioh;
	time_t actual = time(NULL);
	struct tm fechaHoy = *(localtime(&actual));
	diah= fechaHoy.tm_mday;
	mesh= fechaHoy.tm_mon+1;
	anioh=fechaHoy.tm_year+1900;
	int f1= anioh*10000+mesh*100+diah;
	int f2= a.Ver_Anio_Nac()*10000+a.Ver_Mes_Nac()*100+a.Ver_Dia_Nac();
	int Edad= (f1 - f2)/10000*12;
	string abuelo;
	abuelo=(mi_campo->BuscarAbuelo(a.Ver_RP_Padre(),0));
	GrillaVer->SetCellValue(i,14,(wxString()<<Edad));
	GrillaVer->SetCellValue(i,15,abuelo);
}



void p_VerAnimal::Enter_tx_Buscar( wxCommandEvent& event )  {
	event.Skip();
}

void p_VerAnimal::OnClickBuscarPersona( wxCommandEvent& event )  {
	int fila_actual = GrillaVer->GetGridCursorRow();
	int res=-1;
	string w;
	w=tx_buscar->GetValue();
	int x=mi_campo->BuscarNombre(w,fila_actual+1);
	
	
	res=x;
	// si no encontro buscar otra vez desde el principio
	if (res==-1) 
		res=mi_campo->BuscarProcedencia(w,0);
	// si deseo busca en otro lugar aparte del apellido
	if (res==-1)
		res=mi_campo->BuscarRaza(w,fila_actual+1);
	if (res==-1)
		res=mi_campo->BuscarRP(w,0);
	if (res==-1) // si no hay ninguna coincidencia
		wxMessageBox("No se encontraron coincidencias");
	else {
		GrillaVer->SetGridCursor(res,0); // seleccionar
		GrillaVer->SelectRow(res); // seleccionar
	}
}

void p_VerAnimal::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = GrillaVer->GetGridCursorRow(); // obtener el indice de persona
	PEditarAnimal *NPEditarAnimal = new PEditarAnimal(this,fila_actual); // crear la ventana
	if (NPEditarAnimal->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void p_VerAnimal::ClickGrilla( wxGridEvent& event )  {
	event.Skip();
}

void p_VerAnimal::OnClickEliiminarva( wxCommandEvent& event )  {
	if (mi_campo->CantidadAnimales()){
		int fila_actual = GrillaVer->GetGridCursorRow(); // obtengo la posicion del cursor
		int res = wxMessageBox("Eliminar registro del Animal por completo?",GrillaVer->GetCellValue(fila_actual,0),wxYES_NO);// muestro mensaje
		if (res==wxYES) {// si responde que si
			GrillaVer->DeleteRows(fila_actual,1);// elemino la fila
			mi_campo->EleminarAnimal(fila_actual);// elemino el registro
			mi_campo->Guardar(GuardarAnimal);// guardo
		}
	}
}

void p_VerAnimal::OnClickEditarva( wxCommandEvent& event )  {
	int fila_actual = GrillaVer->GetGridCursorRow(); // obtener el indice de persona
	PEditarAnimal *NPEditarAnimal = new PEditarAnimal(this,fila_actual); // crear la ventana
	//	nueva_ventana->ShowModal();
	// si se quiere agregar uno nuevo
	if (NPEditarAnimal->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
	
}

void p_VerAnimal::OnClickSalirva( wxCommandEvent& event )  {
	Close();
}

p_VerAnimal::~p_VerAnimal() {
	
}



void p_VerAnimal::OnClickActualizar( wxCommandEvent& event )  {
	
//	GrillaVer->AppendRows(mi_campo->CantidadAnimales()); // ..agregar filas
//	GrillaVer->AppendCols(17); // ..agregar columnas
	for (int i=0;i<mi_campo->CantidadAnimales();i++) CargarFila(i);// cargar todos los datos
}

