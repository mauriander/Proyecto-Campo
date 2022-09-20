#include "P_VerEventos.h"
#include "wxfb_project.h"
#include "Eventos.h"
#include "Campo.h"
#include "PEditarEvento.h"
#include <wx/grid.h>
//#include "wxfb_project.h"
//#include "Animal.h"
//#include "Campo.h"
#include <ctime>
#include <wx/msgdlg.h>
//#include "PEditarAnimal.h"
#include "Application.h"
#include <string>
//#include "Campo.h"
//#include <wx/msgdlg.h>
//#include "PEditarProfesional.h"
//#include <string>
#include <wx/datetime.h>

P_VerEventos::P_VerEventos(wxWindow *parent) : PantallaVerEventos(parent) {
	GrillaVerE->AppendRows(mi_campo->CantidadEventos()); // ..agregar filas
	GrillaVerE->AppendCols(8); // ..agregar columnas
	for (int i=0;i<mi_campo->CantidadEventos();i++) CargarFila(i);// cargar todos los datos
	GrillaVerE->SetSelectionMode(wxGrid::wxGridSelectRows); // hacer que la seleccion sea por fila, y no por celda
	
	
	// Coloco rotulos
	GrillaVerE->SetColLabelValue(0,"RP");
	GrillaVerE->SetColLabelValue(1,"Peso");
	GrillaVerE->SetColLabelValue(2,"Fecha Eve.");
	GrillaVerE->SetColLabelValue(3,"Evento");
	GrillaVerE->SetColLabelValue(4,"Vacuna");
	GrillaVerE->SetColLabelValue(5,"Proximo Evento");
	GrillaVerE->SetColLabelValue(6,"Observaciones");
	GrillaVerE->SetColLabelValue(7,"Responsable");
	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<8;k++)
		GrillaVerE->AutoSizeColumn(k);
	
	
	Show(); // mostrar la ventana
}
/*
void P_VerEventos::Enter_tx_Buscar( wxCommandEvent& event )  {
	event.Skip();
}*/

/*
void P_VerEventos::DobleClickGrilla( wxGridEvent& event )  {
	
	int fila_actual = GrillaVer->GetGridCursorRow(); // obtener el indice de persona
	PEditarEvento *NPEditarEvento = new PEditarEvento(this,fila_actual); // crear la ventana
	//	nueva_ventana->ShowModal();
	// si se quiere agregar uno nuevo
	if (NPEditarEvento->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla

	
}*/


/*
void P_VerEventos::ClickGrilla( wxGridEvent& event )  {
	// Para ordenar la grilla
	
}*/

void P_VerEventos::CargarFila(int i){
	
	Eventos &e=(*mi_campo)(i);
	//	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<8;k++)
		GrillaVerE->AutoSizeColumn(k);
	
	// Cargo las celdas
	GrillaVerE->SetCellValue(i,0,e.Ver_RP_Evento().c_str());
	GrillaVerE->SetCellValue(i,1,wxString()<<e.Ver_Peso());	// convierto a wxstring el entero para poder mostrarlo
	GrillaVerE->SetCellValue(i,2,((wxString()<<e.Ver_Dia_Eve())+"/"+(wxString()<<e.Ver_Mes_Eve())+"/"+(wxString()<<e.Ver_Anio_Eve())));//muestro la fecha
	GrillaVerE->SetCellValue(i,3,e.Ver_EVEN().c_str());
	
	GrillaVerE->SetCellValue(i,4,e.Ver_Vacuna().c_str());
	string h;
	int dia,mes,anio;
	dia=e.Ver_Dia_Eve();
	mes=e.Ver_Mes_Eve();
	anio=e.Ver_Anio_Eve();
	
	wxDateTime datetime = wxDateTime::Now();
	int dia_pro=datetime.GetDay();
	int mes_pro=datetime.GetMonth();
	int anio_pro=datetime.GetYear();
	
	int a=anio*365 + mes*30 + dia;
	int b=anio_pro*365 + mes_pro*30 + dia_pro;
	
	int cantmeses;
	cantmeses=e.Ver_Meses();
	//h=elegir_meses->GetStringSelection().c_str();
	int w=a-b+cantmeses;
	GrillaVerE->SetCellValue(i,5,wxString()<<w);
	GrillaVerE->SetCellValue(i,6,e.Ver_Observaciones().c_str());
	GrillaVerE->SetCellValue(i,7,e.Ver_Responsable().c_str());
	//GrillaVerE->SetCellValue(i,5,e.Ver_Observaciones().c_str());
	//GrillaVerE->SetCellValue(i,5,e.Ver_Observaciones().c_str());
	
}

P_VerEventos::~P_VerEventos() {
	
}

void P_VerEventos::OnClickBuscarEvento( wxCommandEvent& event )  {
	// buscar desde la fila actual
	int fila_actual = GrillaVerE->GetGridCursorRow();
	int res=-1;
	string w;
	w=tx_buscar->GetValue().c_str();
	
	
	res=mi_campo->BuscarRP_Evento(w,fila_actual+1);
	// si no encontro buscar otra vez desde el principio
	if (res==-1) 
		res=mi_campo->BuscarRP_Evento(w,0);
	// si deseo busca en otro lugar aparte del rp
	
	//
	if (res==-1)
		res=mi_campo->BuscarResponsable(w,fila_actual+1);
	if (res==-1)
		res=mi_campo->BuscarResponsable(w,0);
	if (res==-1)
		res=mi_campo->BuscarEvento(w,fila_actual+1);
	if (res==-1)
		res=mi_campo->BuscarEvento(w,0);     
	//
	if (res==-1) // si no hay ninguna coincidencia
		wxMessageBox("No se encontraron coincidencias");
	else {
		GrillaVerE->SetGridCursor(res,0); // seleccionar
		GrillaVerE->SelectRow(res); // seleccionar
	}
}

void P_VerEventos::OnClickEliiminarve( wxCommandEvent& event )  {
	// Valido que haya algo que eliminar
	if (mi_campo->CantidadEventos()){
		int fila_actual = GrillaVerE->GetGridCursorRow(); // obtengo la posicion del cursor
		int res = wxMessageBox("Eliminar el evento completo?",GrillaVerE->GetCellValue(fila_actual,0),wxYES_NO);// muestro mensaje
		if (res==wxYES) {// si responde que si
			GrillaVerE->DeleteRows(fila_actual,1);// elemino la fila
			mi_campo->EleminarEvento(fila_actual);// elemino el registro
			mi_campo->Guardar(GuardarEventos);// guardo
		}
	}
}

void P_VerEventos::OnClickEditarve( wxCommandEvent& event )  {
	// Ver o editar
	int fila_actual = GrillaVerE->GetGridCursorRow(); // obtener el indice de persona
	PEditarEvento *NPEditarEvento = new PEditarEvento(this,fila_actual); // crear la ventana
	//	nueva_ventana->ShowModal();
	// si se quiere agregar uno nuevo
	if (NPEditarEvento->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void P_VerEventos::OnClickSalirve( wxCommandEvent& event )  {
	Close();
}

void P_VerEventos::Enter_tx_BuscarE( wxCommandEvent& event )  {
	event.Skip();
}

void P_VerEventos::DobleClickGrillaE( wxGridEvent& event )  {
	int fila_actual = GrillaVerE->GetGridCursorRow(); // obtener el indice de persona
	PEditarEvento *NPEditarEvento = new PEditarEvento(this,fila_actual); // crear la ventana
	if (NPEditarEvento->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void P_VerEventos::ClickGrillaE( wxGridEvent& event )  {
	int columna=event.GetCol(), c_eventos=mi_campo->CantidadEventos();
	switch(columna) { // ordenar en mi_agenda
	case 0: mi_campo->Ordenar(ORDEN_RP_EVEN); break;
	case 1: mi_campo->Ordenar(ORDEN_PRODUC); break;
	case 2: mi_campo->Ordenar(ORDEN_F_EVE); break;
	case 3: mi_campo->Ordenar(ORDEN_EVE); break;
	//case 5: mi_campo->Ordenar(ORDEN_HBA); break;
	case 4: mi_campo->Ordenar(ORDEN_RESP); break;
	}
	for (int i=0;i<c_eventos;i++) CargarFila(i); // actualizar vista
}

