#include "P_VerHistorial.h"
#include "Campo.h"
#include <wx/msgdlg.h>
#include "PEditarEvento.h"
#include <string>

P_VerHistorial::P_VerHistorial(wxWindow *parent) : PantallaVerHistorial(parent) {
	
	int j=mi_campo->CantidadAnimales();
	for (int i=0; i<j; i++) {
		Animal a=(*mi_campo)[i];
		elegir_RP_eventoh->Insert(a.Ver_RP(),i);// Insertar string
	}
	elegir_RP_eventoh->SetSelection(-1);
	
		
	// Coloco rotulos
	GrillaHistorial->SetColLabelValue(0,"RP");
	GrillaHistorial->SetColLabelValue(1,"Peso");
	GrillaHistorial->SetColLabelValue(2,"Fecha Eve.");
	GrillaHistorial->SetColLabelValue(3,"Evento");
	GrillaHistorial->SetColLabelValue(4,"Responsable");
	GrillaHistorial->SetColLabelValue(5,"Observaciones");
	
	
	// que se ajusten al tamaño adecuado
	
	for(int k=0;k<6;k++)
		GrillaHistorial->AutoSizeColumn(k);
	
	
	Show(); // mostrar la ventana
	
	
}

P_VerHistorial::~P_VerHistorial() {
	
}

void P_VerHistorial::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = GrillaHistorial->GetGridCursorRow(); // obtener el indice de persona
	PEditarEvento *NPEditarEvento = new PEditarEvento(this,fila_actual); // crear la ventana
	if (NPEditarEvento->Show()) // mostrar y esperar
		CargarFila(fila_actual); // actualizar en la grilla
}

void P_VerHistorial::ClickGrilla( wxGridEvent& event )  {
	string BusquedaRP;
	BusquedaRP=elegir_RP_eventoh->GetStringSelection();
	for (int i=0;i<mi_campo->CantidadEventos();i++){
		GrillaHistorial->SetCellValue(i,0,"");
		GrillaHistorial->SetCellValue(i,1,"");	// convierto a wxstring el entero para poder mostrarlo
		GrillaHistorial->SetCellValue(i,2,"");//muestro la fecha
		GrillaHistorial->SetCellValue(i,3,"");
		GrillaHistorial->SetCellValue(i,4,"");
		GrillaHistorial->SetCellValue(i,5,"");
	}
	
	int columna=event.GetCol(), c_eventos=mi_campo->CantidadEventos();
	switch(columna) { // ordenar en mi_agenda
	case 0: mi_campo->Ordenar(ORDEN_RP_EVEN); break;
	case 1: mi_campo->Ordenar(ORDEN_PRODUC); break;
	case 2: mi_campo->Ordenar(ORDEN_F_EVE); break;
	case 3: mi_campo->Ordenar(ORDEN_EVE); break;
	case 4: mi_campo->Ordenar(ORDEN_RESP); break;
	}
	
	int cant=0;
	for (int i=0;i<c_eventos;i++){
		
		//Eventos ew=(*mi_campo)(i);// una vez encontrado..	
		Eventos &e=(*mi_campo)(i);
		//string rp_evento;
		//rp_evento= e.Ver_RP_Evento();
		
		if(e.Ver_RP_Evento()==BusquedaRP){
			//Eventos &e=(*mi_campo)(i);
			
			// que se ajusten al tamaño adecuado
			//for(int k=0;k<6;k++)
			//	GrillaHistorial->AutoSizeColumn(k);
			
			// Cargo las celdas
			GrillaHistorial->SetCellValue(cant,0,e.Ver_RP_Evento().c_str());
			GrillaHistorial->SetCellValue(cant,1,wxString()<<e.Ver_Peso());	// convierto a wxstring el entero para poder mostrarlo
			GrillaHistorial->SetCellValue(cant,2,((wxString()<<e.Ver_Dia_Eve())+"/"+(wxString()<<e.Ver_Mes_Eve())+"/"+(wxString()<<e.Ver_Anio_Eve())));//muestro la fecha
			GrillaHistorial->SetCellValue(cant,3,e.Ver_EVEN().c_str());
			GrillaHistorial->SetCellValue(cant,4,e.Ver_Responsable().c_str());
			GrillaHistorial->SetCellValue(cant,5,e.Ver_Observaciones().c_str());
			cant++;
		}
	}	
		
	 
	//CargarFila(i); // actualizar vista
}

void P_VerHistorial::OnClickSalirh( wxCommandEvent& event )  {
	Close();
	
}

void P_VerHistorial::OnClickEditar( wxCommandEvent& event )  {
	event.Skip();
}

void P_VerHistorial::OnClickEliminar( wxCommandEvent& event )  {
	if (mi_campo->CantidadEventos()){
		int fila_actual = GrillaHistorial->GetGridCursorRow(); // obtengo la posicion del cursor
		int res = wxMessageBox("Eliminar registro del Animal por completo?",GrillaHistorial->GetCellValue(fila_actual,0),wxYES_NO);// muestro mensaje
		if (res==wxYES) {// si responde que si
			GrillaHistorial->DeleteRows(fila_actual,1);// elemino la fila
			mi_campo->EleminarEvento(fila_actual);// elemino el registro
			mi_campo->Guardar(GuardarEventos);// guardo
			
			//FIJARSE SI NO HAY Q BORRAR DE LA OTRA PLANILLA, PERO CREO Q NO
			
		}
	}
}

void P_VerHistorial::CargarFila(int i){
	
	Eventos &e=(*mi_campo)(i);
	//	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<6;k++)
		GrillaHistorial->AutoSizeColumn(k);
	
	// Cargo las celdas
	GrillaHistorial->SetCellValue(i,0,e.Ver_RP_Evento().c_str());
	GrillaHistorial->SetCellValue(i,1,wxString()<<e.Ver_Peso());	// convierto a wxstring el entero para poder mostrarlo
	GrillaHistorial->SetCellValue(i,2,((wxString()<<e.Ver_Dia_Eve())+"/"+(wxString()<<e.Ver_Mes_Eve())+"/"+(wxString()<<e.Ver_Anio_Eve())));//muestro la fecha
	GrillaHistorial->SetCellValue(i,3,e.Ver_EVEN().c_str());
	GrillaHistorial->SetCellValue(i,4,e.Ver_Responsable().c_str());
	GrillaHistorial->SetCellValue(i,5,e.Ver_Observaciones().c_str());
}

void P_VerHistorial::elegir_RP_evento( wxCommandEvent& event )  {
	//Show();
	string BusquedaRP;
	BusquedaRP=elegir_RP_eventoh->GetStringSelection();
	
	//GrillaHistorial->Destroy();
	for (int i=0;i<mi_campo->CantidadEventos();i++){
		GrillaHistorial->SetCellValue(i,0,"");
		GrillaHistorial->SetCellValue(i,1,"");	// convierto a wxstring el entero para poder mostrarlo
		GrillaHistorial->SetCellValue(i,2,"");//muestro la fecha
		GrillaHistorial->SetCellValue(i,3,"");
		GrillaHistorial->SetCellValue(i,4,"");
		GrillaHistorial->SetCellValue(i,5,"");
	}
	int cant=0;
	for (int i=0;i<mi_campo->CantidadEventos();i++){
			Eventos ew=(*mi_campo)(i);// una vez encontrado..	
		//string rp_evento;
		//rp_evento= e.Ver_RP_Evento();
			
	if(ew.Ver_RP_Evento()==BusquedaRP){
		Eventos &e=(*mi_campo)(i);
	
	// que se ajusten al tamaño adecuado
	for(int k=0;k<6;k++)
	GrillaHistorial->AutoSizeColumn(k);
	
	// Cargo las celdas
	GrillaHistorial->SetCellValue(cant,0,e.Ver_RP_Evento().c_str());
	GrillaHistorial->SetCellValue(cant,1,wxString()<<e.Ver_Peso());	// convierto a wxstring el entero para poder mostrarlo
	GrillaHistorial->SetCellValue(cant,2,((wxString()<<e.Ver_Dia_Eve())+"/"+(wxString()<<e.Ver_Mes_Eve())+"/"+(wxString()<<e.Ver_Anio_Eve())));//muestro la fecha
	GrillaHistorial->SetCellValue(cant,3,e.Ver_EVEN().c_str());
	GrillaHistorial->SetCellValue(cant,4,e.Ver_Responsable().c_str());
	GrillaHistorial->SetCellValue(cant,5,e.Ver_Observaciones().c_str());
	cant++;
	}
}//for del Eventos
	
	
}


/*
void P_VerHistorial::elegir_RP_eventoh( wxCommandEvent& event )  {
	event.Skip();
}*/

