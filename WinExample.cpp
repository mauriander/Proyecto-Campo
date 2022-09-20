#include "WinExample.h"
#include "wxfb_project.h"

#include <wx/msgdlg.h>
#include <wx/app.h>

#include <wx/icon.h>

#include <wx/msgdlg.h>
#include <wx/wx.h>

#include "Application.h"


#include <wx/app.h>

#include <wx/event.h>
#include <fstream>
#include "P_Animale.h"
#include "P_Profesional.h"
#include "P_Evento.h"
#include <wx/datetime.h>
#include <wx/filedlg.h>

WinExample::WinExample(wxWindow *parent) : wxfbExample(parent){
	
}

void WinExample::OnButtonClose( wxCommandEvent& event ) { 
	Close();
}

void WinExample::OnButtonAgregarAnimal( wxCommandEvent& event )  {
	NAnimal= new P_Animale(this);
	NAnimal->Show();
	
}

void WinExample::OnButtonAgregarProfesional( wxCommandEvent& event )  {
	NProfesional= new P_Profesional(this);
	NProfesional->Show();
}

void WinExample::OnButtonVerPersona( wxCommandEvent& event )  {
	event.Skip();
}

void WinExample::OnClickAgregarAnimal( wxCommandEvent& event )  {
	NAnimal= new P_Animale(this);
	NAnimal->Show();
}

void WinExample::OnClickAgregarProfesional( wxCommandEvent& event )  {
	NProfesional= new P_Profesional(this);
	NProfesional->Show();
}

void WinExample::OnClickVerProffsional( wxCommandEvent& event )  {
	NPVerProfesional= new P_VerProfesional;
	NPVerProfesional->Show();
}

void WinExample::OnClickVerAnimal( wxCommandEvent& event )  {
	 NpVerAnimal= new p_VerAnimal;
	 NpVerAnimal->Show();
}

void WinExample::OnClickAgregarEvento( wxCommandEvent& event )  {
	NEvento= new P_Evento(this);
	NEvento->Show();
}

void WinExample::OnClickVerEventos( wxCommandEvent& event )  {
	NPVerEventos= new P_VerEventos(this);
	NPVerEventos->Show();
}

void WinExample::OnClickVerHistorialP( wxCommandEvent& event )  {
	NPVerHistorial= new P_VerHistorial;
	NPVerHistorial->Show();
}

void WinExample::ClickExportarPersonas( wxCommandEvent& event )  {
	// creo la venta de guardado de archivos, constructor
	wxFileDialog *ventana_file = new wxFileDialog(this,"Nombre y Ruta del Archivo","","Profesionales","Archivos de Texto Plano (*.xls)|*.xls",wxFD_SAVE);
	
	ventana_file->ShowModal();
	wxString aux = ventana_file->GetPath();
	//mi_tambo->Exportar("datos de eventos.txt",Export_Eventos);
	
	// convierto el wxstring a string comun
	string ruta = string(aux.mb_str());
	
	// obtengo la fecha actuales
	wxDateTime datetime = wxDateTime::Now();
	
	// ultima linea del archivo de texto
	string f ="Datos de Todos los Profesionales exportados en formato de texto plano.-\n\n"; 
	f+="* Archivo generado por Estancia LA LILI el: ";
	f+=((wxString()<<datetime.GetDay())+"/"+(wxString()<<datetime.GetMonth())+"/"+(wxString()<<datetime.GetYear()));
	f+=".-  A las: ";
	f+=(wxString()<<datetime.FormatTime());
	
	// guardo en la ruta elegida
	mi_campo->Exportar(ruta,Export_Datos, f);
}

void WinExample::ClickExportarEventos( wxCommandEvent& event )  {
	wxFileDialog *ventana_file = new wxFileDialog(this,"Nombre y Ruta del Archivo","","Eventos","Archivos de Texto Plano (*.xls)|*.xls",wxFD_SAVE);
	
	ventana_file->ShowModal();
	wxString aux = ventana_file->GetPath();
	//mi_tambo->Exportar("datos de eventos.txt",Export_Eventos);
	
	// convierto el wxstring a string comun
	string ruta = string(aux.mb_str());
	
	// obtengo la fecha actuales
	wxDateTime datetime = wxDateTime::Now();
	
	// ultima linea del archivo de texto
	string f ="Datos de Todos los Registros de Eventos exportados en formato de texto plano.-\n\n"; 
	f+="* Archivo generado por Estancia LA LILI el: ";
	f+=((wxString()<<datetime.GetDay())+"/"+(wxString()<<datetime.GetMonth())+"/"+(wxString()<<datetime.GetYear()));
	f+=".-  A las: ";
	f+=(wxString()<<datetime.FormatTime());
	
	// guardo en la ruta elegida
	mi_campo->Exportar(ruta,Export_Eventos, f);
}

void WinExample::ClickExportarAnimales( wxCommandEvent& event )  {
	wxFileDialog *ventana_file = new wxFileDialog(this,"Nombre y Ruta del Archivo","","Animales","Archivos de Texto Plano (*.xls)|*.xls",wxFD_SAVE);
	
	ventana_file->ShowModal();
	wxString aux = ventana_file->GetPath();
	//	mi_tambo->Exportar("datos de animales.txt",Export_Animal);
	
	// convierto el wxstring a string comun
	string ruta = string(aux.mb_str());
	
	// obtengo la fecha actuales
	wxDateTime datetime = wxDateTime::Now();
	
	
	// ultima linea del archivo de texto
	string f ="Datos de Todos los Registros de Animales exportados en formato de texto plano.-\n\n"; 
	f+="* Archivo generado por Estancia LA LILI el: ";
	f+=((wxString()<<datetime.GetDay())+"/"+(wxString()<<datetime.GetMonth())+"/"+(wxString()<<datetime.GetYear()));
	f+=".-  A las: ";
	f+=(wxString()<<datetime.FormatTime());
	
	// guardo en la ruta elegida
	mi_campo->Exportar(ruta,Export_Animal, f);
}

void WinExample::OnButtonAgregarEvento( wxCommandEvent& event )  {
	NEvento= new P_Evento(this);
	NEvento->Show();
}

