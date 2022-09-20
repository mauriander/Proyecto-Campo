///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/statbmp.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/grid.h>
#include <wx/scrolwin.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class wxfbExample
///////////////////////////////////////////////////////////////////////////////
class wxfbExample : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxMenu* m_menu2;
		wxMenu* m_menu4;
		wxMenu* m_menu5;
		wxStaticText* m_staticText2;
		wxBitmapButton* m_bpButton4;
		wxStaticText* m_staticText3;
		wxBitmapButton* m_bpButton5;
		wxStaticText* m_staticText29;
		wxBitmapButton* m_bpButton41;
		wxStaticText* m_staticText28;
		wxBitmapButton* m_bpButton3;
		wxStaticText* m_staticText1;
		wxButton* m_button1;
		wxToolBar* m_toolBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregarAnimal( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAgregarProfesional( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAgregarEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerEventos( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerAnimal( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerProffsional( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerHistorialP( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickExportarPersonas( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickExportarEventos( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickExportarAnimales( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonAgregarAnimal( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonAgregarEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonAgregarProfesional( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonVerPersona( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbExample( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 665,465 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~wxfbExample();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaProfesional
///////////////////////////////////////////////////////////////////////////////
class PantallaProfesional : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* tx_nombre_pers;
		wxStaticText* m_staticText7;
		wxTextCtrl* tx_titulo;
		wxStaticText* m_staticText5;
		wxTextCtrl* tx_apellido;
		wxStaticText* m_staticText6;
		wxTextCtrl* tx_especialidad;
		wxStaticText* m_staticText14;
		wxTextCtrl* tx_direccion;
		wxStaticText* m_staticText15;
		wxTextCtrl* tx_cuit;
		wxStaticText* m_staticText12;
		wxTextCtrl* tx_telefono;
		wxStaticText* m_staticText13;
		wxComboBox* usuario;
		wxStaticText* m_staticText10;
		wxTextCtrl* tx_empresa;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl7;
		wxStaticBitmap* m_bitmap10;
		wxButton* VerProfesional;
		wxStaticBitmap* m_bitmap11;
		wxButton* GuardarProfesional;
		wxStaticBitmap* m_bitmap12;
		wxButton* SalirProfesional;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickVerProfesional( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickuardarProfesional( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalirProfesional( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaProfesional( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("PROFESIONAL"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 651,420 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaProfesional();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaEvento
///////////////////////////////////////////////////////////////////////////////
class PantallaEvento : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText34;
		wxStaticText* m_staticText32;
		wxChoice* elegir_RP_evento;
		wxStaticText* m_staticText35;
		wxTextCtrl* tx_nom_eve;
		wxStaticText* m_staticText43;
		wxTextCtrl* tx_rc_eve;
		wxStaticText* m_staticText36;
		wxTextCtrl* tx_raza_eve;
		wxStaticText* m_staticText37;
		wxSpinCtrl* m_dia_eve;
		wxSpinCtrl* m_mes_eve;
		wxSpinCtrl* m_anio_eve;
		wxStaticText* m_staticText38;
		wxComboBox* elegir_evento;
		wxStaticText* m_staticText40;
		wxTextCtrl* tx_peso_eve;
		wxStaticText* m_staticText42;
		wxComboBox* elegir_vacuna;
		wxStaticText* m_staticText39;
		wxComboBox* elegir_meses;
		wxTextCtrl* tx_proximo_eve;
		wxStaticText* m_staticText41;
		wxChoice* elegir_responsable;
		wxStaticText* m_staticText401;
		wxTextCtrl* tx_obs_eve;
		wxStaticBitmap* m_bitmap13;
		wxButton* Ver_eventos;
		wxStaticBitmap* m_bitmap14;
		wxButton* Guardar_eventos;
		wxStaticBitmap* m_bitmap15;
		wxButton* Salir_evento;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickElegirRp( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickELegirEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickElegirMeses( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickElegirResponsable( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerPEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickGuardarPEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalirPEvento( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaEvento( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 592,496 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaEvento();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaAnimal
///////////////////////////////////////////////////////////////////////////////
class PantallaAnimal : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* tx_rp;
		wxStaticText* m_staticText7;
		wxTextCtrl* tx_rc;
		wxStaticText* m_staticText5;
		wxTextCtrl* tx_nombre;
		wxStaticText* m_staticText6;
		wxTextCtrl* tx_procedencia;
		wxStaticText* m_staticText14;
		wxSpinCtrl* m_dia;
		wxSpinCtrl* m_mes;
		wxSpinCtrl* m_anio;
		wxStaticText* m_staticText15;
		wxTextCtrl* tx_rpmadre;
		wxStaticText* m_staticText10;
		wxTextCtrl* tx_categoria;
		wxStaticText* m_staticText11;
		wxTextCtrl* tx_rppadre;
		wxStaticText* m_staticText12;
		wxTextCtrl* tx_raza;
		wxStaticText* m_staticText13;
		wxComboBox* elegir_preniada;
		wxStaticText* m_staticText24;
		wxTextCtrl* tx_seccion;
		wxStaticText* m_staticText25;
		wxComboBox* elegir_muerto;
		wxButton* m_buttonHistorial;
		wxStaticText* m_staticText27;
		wxChoice* elegir_sexo;
		wxStaticText* m_staticText26;
		wxComboBox* elegir_vendido;
		wxButton* VerAnimal;
		wxButton* GuardarAnimalp;
		wxButton* SalirAnimal;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickVerHistorial( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVerAnimales( wxCommandEvent& event ) { event.Skip(); }
		virtual void OmClickGuardarAnimal( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalirAnimal( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaAnimal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ANIMAL"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 735,478 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaAnimal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaVerProfesionales
///////////////////////////////////////////////////////////////////////////////
class PantallaVerProfesionales : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxTextCtrl* tx_buscar;
		wxChoice* m_choice1;
		wxButton* m_button8;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* GrillaVer;
		wxStaticBitmap* m_bitmap2;
		wxButton* m_button10;
		wxStaticBitmap* m_bitmap3;
		wxButton* m_button11;
		wxStaticBitmap* m_bitmap4;
		wxButton* m_button12;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Enter_tx_Buscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickBuscarPersona( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void OnClickEliiminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalir( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaVerProfesionales( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 656,445 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaVerProfesionales();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaVerAnimal
///////////////////////////////////////////////////////////////////////////////
class PantallaVerAnimal : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxTextCtrl* tx_buscar;
		wxChoice* m_choice1;
		wxButton* m_button8;
		wxButton* m_button27;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* GrillaVer;
		wxStaticBitmap* m_bitmap2;
		wxButton* m_button100;
		wxStaticBitmap* m_bitmap3;
		wxButton* m_button110;
		wxStaticBitmap* m_bitmap4;
		wxButton* m_button120;
		wxStaticText* m_staticText47;
		wxTextCtrl* tx_cantidad_animales;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Enter_tx_Buscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickBuscarPersona( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickActualizar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void OnClickEliiminarva( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditarva( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalirva( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaVerAnimal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 829,422 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaVerAnimal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaVerEventos
///////////////////////////////////////////////////////////////////////////////
class PantallaVerEventos : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText300;
		wxTextCtrl* tx_buscar;
		wxChoice* m_choice100;
		wxButton* m_button84;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* GrillaVerE;
		wxStaticBitmap* m_bitmap45;
		wxButton* m_button100;
		wxStaticBitmap* m_bitmap30;
		wxButton* m_button110;
		wxStaticBitmap* m_bitmap40;
		wxButton* m_button120;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Enter_tx_BuscarE( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickBuscarEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrillaE( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrillaE( wxGridEvent& event ) { event.Skip(); }
		virtual void OnClickEliiminarve( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditarve( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalirve( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaVerEventos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 716,417 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaVerEventos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PantallaVerHistorial
///////////////////////////////////////////////////////////////////////////////
class PantallaVerHistorial : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText45;
		wxChoice* elegir_RP_eventoh;
		wxScrolledWindow* m_scrolledWindow4;
		wxGrid* GrillaHistorial;
		wxButton* m_button24;
		wxButton* m_button25;
		wxButton* m_button26;
		
		// Virtual event handlers, overide them in your derived class
		virtual void elegir_RP_evento( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void OnClickSalirh( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PantallaVerHistorial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 559,339 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PantallaVerHistorial();
	
};

#endif //__WXFB_PROJECT_H__
