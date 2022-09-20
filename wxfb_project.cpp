///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

wxfbExample::wxfbExample( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("ANIMAL") ) + wxT('\t') + wxT("Ctrl+A"), wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem1 );
	
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("PROFESIONAL") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem2 );
	
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("EVENTO") ) + wxT('\t') + wxT("Ctrl+E"), wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem6 );
	
	m_menubar1->Append( m_menu1, wxT("Agregar") ); 
	
	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("Ver Ecento") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem3 );
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("Ver Animal") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem4 );
	
	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("Ver Profesional") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem5 );
	
	m_menubar1->Append( m_menu2, wxT("Ver") ); 
	
	m_menu4 = new wxMenu();
	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem( m_menu4, wxID_ANY, wxString( wxT("HISTORIAL") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu4->Append( m_menuItem10 );
	
	m_menubar1->Append( m_menu4, wxT("Historial") ); 
	
	m_menu5 = new wxMenu();
	wxMenuItem* m_item_exportar_personas;
	m_item_exportar_personas = new wxMenuItem( m_menu5, wxID_ANY, wxString( wxT("Personas a texto plano") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu5->Append( m_item_exportar_personas );
	
	wxMenuItem* m_item_exportar_evento;
	m_item_exportar_evento = new wxMenuItem( m_menu5, wxID_ANY, wxString( wxT("Evento a texto plano") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu5->Append( m_item_exportar_evento );
	
	wxMenuItem* m_item_exportar_animal;
	m_item_exportar_animal = new wxMenuItem( m_menu5, wxID_ANY, wxString( wxT("Animal a texto plano") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu5->Append( m_item_exportar_animal );
	
	m_menubar1->Append( m_menu5, wxT("Exportar") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("AGREGAR ANIMAL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer96->Add( m_staticText2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton4 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/Person.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer96->Add( m_bpButton4, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer96, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("AGREGAR EVENTO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer95->Add( m_staticText3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_bpButton5 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/Book.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer95->Add( m_bpButton5, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer95, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("AGREGAR PROFESIONAL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer94->Add( m_staticText29, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton41 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/Vaca.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer94->Add( m_bpButton41, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer94, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer1->Add( m_staticText28, 0, wxALL, 5 );
	
	m_bpButton3 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/Cow.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer1->Add( m_bpButton3, 0, wxALL, 5 );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Proyeto Campito"), wxDefaultPosition, wxSize( -1,-1 ), wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
	m_staticText1->Wrap( 300 );
	bSizer1->Add( m_staticText1, 1, wxALIGN_CENTER|wxALL, 5 );
	
	m_button1 = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button1, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	m_toolBar1->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_menuItem1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarAnimal ) );
	this->Connect( m_menuItem2->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarProfesional ) );
	this->Connect( m_menuItem6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarEvento ) );
	this->Connect( m_menuItem3->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerEventos ) );
	this->Connect( m_menuItem4->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerAnimal ) );
	this->Connect( m_menuItem5->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerProffsional ) );
	this->Connect( m_menuItem10->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerHistorialP ) );
	this->Connect( m_item_exportar_personas->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarPersonas ) );
	this->Connect( m_item_exportar_evento->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarEventos ) );
	this->Connect( m_item_exportar_animal->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarAnimales ) );
	m_bpButton4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarAnimal ), NULL, this );
	m_bpButton5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarEvento ), NULL, this );
	m_bpButton41->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarProfesional ), NULL, this );
	m_bpButton3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonVerPersona ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonClose ), NULL, this );
}

wxfbExample::~wxfbExample()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarAnimal ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarProfesional ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickAgregarEvento ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerEventos ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerAnimal ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerProffsional ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::OnClickVerHistorialP ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarPersonas ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarEventos ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wxfbExample::ClickExportarAnimales ) );
	m_bpButton4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarAnimal ), NULL, this );
	m_bpButton5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarEvento ), NULL, this );
	m_bpButton41->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonAgregarProfesional ), NULL, this );
	m_bpButton3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonVerPersona ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wxfbExample::OnButtonClose ), NULL, this );
	
}

PantallaProfesional::PantallaProfesional( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("NOMBRE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer6->Add( m_staticText4, 0, wxALL, 5 );
	
	tx_nombre_pers = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer6->Add( tx_nombre_pers, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("TITULO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer9->Add( m_staticText7, 0, wxALL, 5 );
	
	tx_titulo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer9->Add( tx_titulo, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer4->Add( bSizer11, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("APELLIDO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer7->Add( m_staticText5, 0, wxALL, 5 );
	
	tx_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer7->Add( tx_apellido, 1, wxALL, 5 );
	
	
	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("ESPECIALIDAD"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALL, 5 );
	
	tx_especialidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer8->Add( tx_especialidad, 1, wxALL, 5 );
	
	
	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("DIRECCION"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer12->Add( m_staticText14, 0, wxALL, 5 );
	
	tx_direccion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer12->Add( tx_direccion, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("CUIT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer13->Add( m_staticText15, 0, wxALL, 5 );
	
	tx_cuit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer13->Add( tx_cuit, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer13, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("TELEFONO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer15->Add( m_staticText12, 0, wxALL, 5 );
	
	tx_telefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer15->Add( tx_telefono, 1, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("USUARIO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer16->Add( m_staticText13, 0, wxALL, 5 );
	
	usuario = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	usuario->Append( wxT("SI") );
	usuario->Append( wxT("NO") );
	bSizer16->Add( usuario, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer16, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer14, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("LOCALIDAD"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer18->Add( m_staticText10, 0, wxALL, 5 );
	
	tx_empresa = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	bSizer18->Add( tx_empresa, 1, wxALL, 5 );
	
	
	bSizer17->Add( bSizer18, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer19->Add( m_staticText11, 0, wxALL, 5 );
	
	m_textCtrl7 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_textCtrl7, 0, wxALL, 5 );
	
	
	bSizer17->Add( bSizer19, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap10 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_bitmap10, 0, wxALL, 5 );
	
	VerProfesional = new wxButton( this, wxID_ANY, wxT("VER LISTADO DE PERSONAS"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( VerProfesional, 0, wxALL, 5 );
	
	
	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap11 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/3floppy_unmount.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_bitmap11, 0, wxALL, 5 );
	
	GuardarProfesional = new wxButton( this, wxID_ANY, wxT("GUARDAR"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( GuardarProfesional, 0, wxALL, 5 );
	
	m_bitmap12 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancel.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_bitmap12, 0, wxALL, 5 );
	
	SalirProfesional = new wxButton( this, wxID_ANY, wxT("SALIR"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( SalirProfesional, 0, wxALL, 5 );
	
	
	bSizer20->Add( bSizer21, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer20, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	VerProfesional->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickVerProfesional ), NULL, this );
	GuardarProfesional->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickuardarProfesional ), NULL, this );
	SalirProfesional->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickSalirProfesional ), NULL, this );
}

PantallaProfesional::~PantallaProfesional()
{
	// Disconnect Events
	VerProfesional->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickVerProfesional ), NULL, this );
	GuardarProfesional->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickuardarProfesional ), NULL, this );
	SalirProfesional->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaProfesional::OnClickSalirProfesional ), NULL, this );
	
}

PantallaEvento::PantallaEvento( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Aca escribo una leyenda indicativa de sobre como operar basicamente y recordale que esto y que lo otro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer70->Add( m_staticText34, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer62->Add( bSizer70, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("Elegir RP animal"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer63->Add( m_staticText32, 0, wxALL, 5 );
	
	wxArrayString elegir_RP_eventoChoices;
	elegir_RP_evento = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, elegir_RP_eventoChoices, 0 );
	elegir_RP_evento->SetSelection( 0 );
	bSizer63->Add( elegir_RP_evento, 0, wxALL, 5 );
	
	
	bSizer62->Add( bSizer63, 0, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer62, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer66;
	bSizer66 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("NOMBRE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer71->Add( m_staticText35, 0, wxALL, 5 );
	
	tx_nom_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( tx_nom_eve, 0, wxALL, 5 );
	
	
	bSizer66->Add( bSizer71, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("ID INTERNO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer72->Add( m_staticText43, 0, wxALL, 5 );
	
	tx_rc_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( tx_rc_eve, 0, wxALL, 5 );
	
	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("RAZA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer72->Add( m_staticText36, 0, wxALL, 5 );
	
	tx_raza_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( tx_raza_eve, 0, wxALL, 5 );
	
	
	bSizer66->Add( bSizer72, 1, wxEXPAND, 5 );
	
	
	bSizer64->Add( bSizer66, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("FECHA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer67->Add( m_staticText37, 0, wxALL, 5 );
	
	m_dia_eve = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 31, 1 );
	bSizer67->Add( m_dia_eve, 0, wxALL, 5 );
	
	m_mes_eve = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 12, 0 );
	bSizer67->Add( m_mes_eve, 0, wxALL, 5 );
	
	m_anio_eve = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 2010, 2050, 0 );
	bSizer67->Add( m_anio_eve, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer67, 0, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer64, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("EVENTO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer68->Add( m_staticText38, 0, wxALL, 5 );
	
	elegir_evento = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer68->Add( elegir_evento, 1, wxALL, 5 );
	
	
	bSizer65->Add( bSizer68, 0, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer65, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("Peso"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer73->Add( m_staticText40, 0, wxALL, 5 );
	
	tx_peso_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer73->Add( tx_peso_eve, 0, wxALL, 5 );
	
	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Tipo de vacuna"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer73->Add( m_staticText42, 0, wxALL, 5 );
	
	elegir_vacuna = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer73->Add( elegir_vacuna, 0, wxALL, 5 );
	
	
	bSizer61->Add( bSizer73, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer731;
	bSizer731 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("Proximo control"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer731->Add( m_staticText39, 0, wxALL, 5 );
	
	elegir_meses = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer731->Add( elegir_meses, 0, wxALL, 5 );
	
	tx_proximo_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer731->Add( tx_proximo_eve, 0, wxALL, 5 );
	
	
	bSizer81->Add( bSizer731, 0, 0, 5 );
	
	
	bSizer61->Add( bSizer81, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Responsable del control"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer80->Add( m_staticText41, 0, wxALL, 5 );
	
	wxArrayString elegir_responsableChoices;
	elegir_responsable = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, elegir_responsableChoices, 0 );
	elegir_responsable->SetSelection( 0 );
	bSizer80->Add( elegir_responsable, 0, wxALL, 5 );
	
	
	bSizer79->Add( bSizer80, 1, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer79, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText401 = new wxStaticText( this, wxID_ANY, wxT("Oservaciones"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText401->Wrap( -1 );
	bSizer78->Add( m_staticText401, 0, wxALL, 5 );
	
	tx_obs_eve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer78->Add( tx_obs_eve, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer77->Add( bSizer78, 1, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer77, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap13 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer75->Add( m_bitmap13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Ver_eventos = new wxButton( this, wxID_ANY, wxT("VER EVENTOS"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer75->Add( Ver_eventos, 0, wxALL, 5 );
	
	
	bSizer74->Add( bSizer75, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap14 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/3floppy_unmount.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_bitmap14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Guardar_eventos = new wxButton( this, wxID_ANY, wxT("GUARDAR EVENTO"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( Guardar_eventos, 0, wxALL, 5 );
	
	
	bSizer76->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap15 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancel.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_bitmap15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Salir_evento = new wxButton( this, wxID_ANY, wxT("SALIR EVENTO"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( Salir_evento, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer74->Add( bSizer76, 1, wxEXPAND, 5 );
	
	
	bSizer61->Add( bSizer74, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer61 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	elegir_RP_evento->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirRp ), NULL, this );
	elegir_evento->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PantallaEvento::ClickELegirEvento ), NULL, this );
	elegir_meses->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirMeses ), NULL, this );
	elegir_responsable->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirResponsable ), NULL, this );
	Ver_eventos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickVerPEvento ), NULL, this );
	Guardar_eventos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickGuardarPEvento ), NULL, this );
	Salir_evento->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickSalirPEvento ), NULL, this );
}

PantallaEvento::~PantallaEvento()
{
	// Disconnect Events
	elegir_RP_evento->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirRp ), NULL, this );
	elegir_evento->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PantallaEvento::ClickELegirEvento ), NULL, this );
	elegir_meses->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirMeses ), NULL, this );
	elegir_responsable->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaEvento::ClickElegirResponsable ), NULL, this );
	Ver_eventos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickVerPEvento ), NULL, this );
	Guardar_eventos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickGuardarPEvento ), NULL, this );
	Salir_evento->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaEvento::OnClickSalirPEvento ), NULL, this );
	
}

PantallaAnimal::PantallaAnimal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("RP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer6->Add( m_staticText4, 0, wxALL, 5 );
	
	tx_rp = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( tx_rp, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("ID INTERNO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer9->Add( m_staticText7, 0, wxALL, 5 );
	
	tx_rc = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( tx_rc, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer4->Add( bSizer11, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("NOMBRE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer7->Add( m_staticText5, 0, wxALL, 5 );
	
	tx_nombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( tx_nombre, 1, wxALL, 5 );
	
	
	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("PROCEDENCIA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALL, 5 );
	
	tx_procedencia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( tx_procedencia, 1, wxALL, 5 );
	
	
	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("FECHA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer12->Add( m_staticText14, 0, wxALL, 5 );
	
	m_dia = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 31, 1 );
	m_dia->SetMaxSize( wxSize( 75,-1 ) );
	
	bSizer12->Add( m_dia, 0, wxALL, 5 );
	
	m_mes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 12, 1 );
	m_mes->SetMaxSize( wxSize( 75,-1 ) );
	
	bSizer12->Add( m_mes, 0, wxALL, 5 );
	
	m_anio = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 2000, 2050, 1 );
	m_anio->SetMaxSize( wxSize( 100,-1 ) );
	
	bSizer12->Add( m_anio, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("RP MADRE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer13->Add( m_staticText15, 0, wxALL, 5 );
	
	tx_rpmadre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( tx_rpmadre, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer13, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("CATEGORIA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer18->Add( m_staticText10, 0, wxALL, 5 );
	
	tx_categoria = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( tx_categoria, 1, wxALL, 5 );
	
	
	bSizer17->Add( bSizer18, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("RP PADRE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer19->Add( m_staticText11, 0, wxALL, 5 );
	
	tx_rppadre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( tx_rppadre, 1, wxALL, 5 );
	
	
	bSizer17->Add( bSizer19, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("RAZA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer15->Add( m_staticText12, 0, wxALL, 5 );
	
	tx_raza = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_raza, 1, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("PREÑADA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer16->Add( m_staticText13, 0, wxALL, 5 );
	
	elegir_preniada = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	elegir_preniada->Append( wxT("NO") );
	elegir_preniada->Append( wxT("SI") );
	elegir_preniada->SetSelection( 0 );
	bSizer16->Add( elegir_preniada, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer16, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer14, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("SECCION"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer43->Add( m_staticText24, 0, wxALL, 5 );
	
	tx_seccion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( tx_seccion, 1, wxALL, 5 );
	
	
	bSizer41->Add( bSizer43, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("MUERTO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer44->Add( m_staticText25, 0, wxALL, 5 );
	
	elegir_muerto = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	elegir_muerto->Append( wxT("NO") );
	elegir_muerto->Append( wxT("SI") );
	elegir_muerto->SetSelection( 0 );
	bSizer44->Add( elegir_muerto, 0, wxALL, 5 );
	
	
	bSizer44->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_buttonHistorial = new wxButton( this, wxID_ANY, wxT("HISTORIAL"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer44->Add( m_buttonHistorial, 1, wxALL, 5 );
	
	
	bSizer41->Add( bSizer44, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer41, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("SEXO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer45->Add( m_staticText27, 0, wxALL, 5 );
	
	wxString elegir_sexoChoices[] = { wxT("MACHO"), wxT("HEMBRA") };
	int elegir_sexoNChoices = sizeof( elegir_sexoChoices ) / sizeof( wxString );
	elegir_sexo = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, elegir_sexoNChoices, elegir_sexoChoices, 0 );
	elegir_sexo->SetSelection( 0 );
	bSizer45->Add( elegir_sexo, 0, wxALL, 5 );
	
	
	bSizer42->Add( bSizer45, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("VENDIDO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer46->Add( m_staticText26, 0, wxALL, 5 );
	
	elegir_vendido = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	elegir_vendido->Append( wxT("NO") );
	elegir_vendido->Append( wxT("SI") );
	elegir_vendido->SetSelection( 0 );
	bSizer46->Add( elegir_vendido, 0, wxALL, 5 );
	
	
	bSizer42->Add( bSizer46, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer42, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	VerAnimal = new wxButton( this, wxID_ANY, wxT("VER LISTADO DE ANIMALES"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( VerAnimal, 0, wxALL, 5 );
	
	
	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );
	
	GuardarAnimalp = new wxButton( this, wxID_ANY, wxT("GUARDAR"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( GuardarAnimalp, 0, wxALL, 5 );
	
	SalirAnimal = new wxButton( this, wxID_ANY, wxT("SALIR"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( SalirAnimal, 0, wxALL, 5 );
	
	
	bSizer20->Add( bSizer21, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer20, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonHistorial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickVerHistorial ), NULL, this );
	VerAnimal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickVerAnimales ), NULL, this );
	GuardarAnimalp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OmClickGuardarAnimal ), NULL, this );
	SalirAnimal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickSalirAnimal ), NULL, this );
}

PantallaAnimal::~PantallaAnimal()
{
	// Disconnect Events
	m_buttonHistorial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickVerHistorial ), NULL, this );
	VerAnimal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickVerAnimales ), NULL, this );
	GuardarAnimalp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OmClickGuardarAnimal ), NULL, this );
	SalirAnimal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaAnimal::OnClickSalirAnimal ), NULL, this );
	
}

PantallaVerProfesionales::PantallaVerProfesionales( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer48->Add( m_staticText30, 0, wxALL, 5 );
	
	tx_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( tx_buscar, 0, wxALL, 5 );
	
	wxArrayString m_choice1Choices;
	m_choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer48->Add( m_choice1, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button8, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer48, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxVERTICAL );
	
	GrillaVer = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaVer->CreateGrid( 5, 5 );
	GrillaVer->EnableEditing( true );
	GrillaVer->EnableGridLines( true );
	GrillaVer->EnableDragGridSize( false );
	GrillaVer->SetMargins( 0, 0 );
	
	// Columns
	GrillaVer->EnableDragColMove( false );
	GrillaVer->EnableDragColSize( true );
	GrillaVer->SetColLabelSize( 30 );
	GrillaVer->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaVer->EnableDragRowSize( true );
	GrillaVer->SetRowLabelSize( 80 );
	GrillaVer->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	GrillaVer->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer53->Add( GrillaVer, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( bSizer53 );
	m_scrolledWindow1->Layout();
	bSizer53->Fit( m_scrolledWindow1 );
	bSizer49->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizer47->Add( bSizer49, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancel.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_bitmap2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button10 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_button10, 0, wxALL, 5 );
	
	
	bSizer50->Add( bSizer51, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/edit.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_bitmap3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_button11, 0, wxALL, 5 );
	
	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_bitmap4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button12 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_button12, 0, wxALL, 5 );
	
	
	bSizer50->Add( bSizer52, 1, wxEXPAND, 5 );
	
	
	bSizer47->Add( bSizer50, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer47 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tx_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerProfesionales::Enter_tx_Buscar ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickBuscarPersona ), NULL, this );
	GrillaVer->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerProfesionales::DobleClickGrilla ), NULL, this );
	GrillaVer->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerProfesionales::ClickGrilla ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickEliiminar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickEditar ), NULL, this );
	m_button12->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickSalir ), NULL, this );
}

PantallaVerProfesionales::~PantallaVerProfesionales()
{
	// Disconnect Events
	tx_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerProfesionales::Enter_tx_Buscar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickBuscarPersona ), NULL, this );
	GrillaVer->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerProfesionales::DobleClickGrilla ), NULL, this );
	GrillaVer->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerProfesionales::ClickGrilla ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickEliiminar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickEditar ), NULL, this );
	m_button12->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerProfesionales::OnClickSalir ), NULL, this );
	
}

PantallaVerAnimal::PantallaVerAnimal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer48->Add( m_staticText30, 0, wxALL, 5 );
	
	tx_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( tx_buscar, 0, wxALL, 5 );
	
	wxArrayString m_choice1Choices;
	m_choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer48->Add( m_choice1, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button8, 0, wxALL, 5 );
	
	m_button27 = new wxButton( this, wxID_ANY, wxT("ACTUALIZAR"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button27, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer48, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxVERTICAL );
	
	GrillaVer = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaVer->CreateGrid( 5, 5 );
	GrillaVer->EnableEditing( true );
	GrillaVer->EnableGridLines( true );
	GrillaVer->EnableDragGridSize( false );
	GrillaVer->SetMargins( 0, 0 );
	
	// Columns
	GrillaVer->EnableDragColMove( false );
	GrillaVer->EnableDragColSize( true );
	GrillaVer->SetColLabelSize( 30 );
	GrillaVer->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaVer->EnableDragRowSize( true );
	GrillaVer->SetRowLabelSize( 80 );
	GrillaVer->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	GrillaVer->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer53->Add( GrillaVer, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( bSizer53 );
	m_scrolledWindow1->Layout();
	bSizer53->Fit( m_scrolledWindow1 );
	bSizer49->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizer47->Add( bSizer49, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_bitmap2, 0, wxALL, 5 );
	
	m_button100 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( m_button100, 0, wxALL, 5 );
	
	
	bSizer50->Add( bSizer51, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_bitmap3, 0, wxALL, 5 );
	
	m_button110 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_button110, 0, wxALL, 5 );
	
	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_bitmap4, 0, wxALL, 5 );
	
	m_button120 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_button120, 0, wxALL, 5 );
	
	
	bSizer50->Add( bSizer52, 1, wxEXPAND, 5 );
	
	
	bSizer47->Add( bSizer50, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("Cantidad de animales actuales"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	bSizer94->Add( m_staticText47, 0, wxALL, 5 );
	
	tx_cantidad_animales = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer94->Add( tx_cantidad_animales, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer94, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer47 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tx_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerAnimal::Enter_tx_Buscar ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickBuscarPersona ), NULL, this );
	m_button27->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickActualizar ), NULL, this );
	GrillaVer->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerAnimal::DobleClickGrilla ), NULL, this );
	GrillaVer->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerAnimal::ClickGrilla ), NULL, this );
	m_button100->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickEliiminarva ), NULL, this );
	m_button110->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickEditarva ), NULL, this );
	m_button120->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickSalirva ), NULL, this );
}

PantallaVerAnimal::~PantallaVerAnimal()
{
	// Disconnect Events
	tx_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerAnimal::Enter_tx_Buscar ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickBuscarPersona ), NULL, this );
	m_button27->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickActualizar ), NULL, this );
	GrillaVer->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerAnimal::DobleClickGrilla ), NULL, this );
	GrillaVer->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerAnimal::ClickGrilla ), NULL, this );
	m_button100->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickEliiminarva ), NULL, this );
	m_button110->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickEditarva ), NULL, this );
	m_button120->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerAnimal::OnClickSalirva ), NULL, this );
	
}

PantallaVerEventos::PantallaVerEventos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer447;
	bSizer447 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer448;
	bSizer448 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText300 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText300->Wrap( -1 );
	bSizer448->Add( m_staticText300, 0, wxALL, 5 );
	
	tx_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer448->Add( tx_buscar, 0, wxALL, 5 );
	
	wxArrayString m_choice100Choices;
	m_choice100 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice100Choices, 0 );
	m_choice100->SetSelection( 0 );
	bSizer448->Add( m_choice100, 0, wxALL, 5 );
	
	m_button84 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer448->Add( m_button84, 0, wxALL, 5 );
	
	
	bSizer447->Add( bSizer448, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer449;
	bSizer449 = new wxBoxSizer( wxHORIZONTAL );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer553;
	bSizer553 = new wxBoxSizer( wxVERTICAL );
	
	GrillaVerE = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaVerE->CreateGrid( 5, 5 );
	GrillaVerE->EnableEditing( true );
	GrillaVerE->EnableGridLines( true );
	GrillaVerE->EnableDragGridSize( false );
	GrillaVerE->SetMargins( 0, 0 );
	
	// Columns
	GrillaVerE->EnableDragColMove( false );
	GrillaVerE->EnableDragColSize( true );
	GrillaVerE->SetColLabelSize( 30 );
	GrillaVerE->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaVerE->EnableDragRowSize( true );
	GrillaVerE->SetRowLabelSize( 80 );
	GrillaVerE->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	GrillaVerE->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer553->Add( GrillaVerE, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( bSizer553 );
	m_scrolledWindow1->Layout();
	bSizer553->Fit( m_scrolledWindow1 );
	bSizer449->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizer447->Add( bSizer449, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer500;
	bSizer500 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer551;
	bSizer551 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap45 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer551->Add( m_bitmap45, 0, wxALL, 5 );
	
	m_button100 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer551->Add( m_button100, 0, wxALL, 5 );
	
	
	bSizer500->Add( bSizer551, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer552;
	bSizer552 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap30 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer552->Add( m_bitmap30, 0, wxALL, 5 );
	
	m_button110 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer552->Add( m_button110, 0, wxALL, 5 );
	
	m_bitmap40 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer552->Add( m_bitmap40, 0, wxALL, 5 );
	
	m_button120 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer552->Add( m_button120, 0, wxALL, 5 );
	
	
	bSizer500->Add( bSizer552, 1, wxEXPAND, 5 );
	
	
	bSizer447->Add( bSizer500, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer447 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tx_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerEventos::Enter_tx_BuscarE ), NULL, this );
	m_button84->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickBuscarEvento ), NULL, this );
	GrillaVerE->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerEventos::DobleClickGrillaE ), NULL, this );
	GrillaVerE->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerEventos::ClickGrillaE ), NULL, this );
	m_button100->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickEliiminarve ), NULL, this );
	m_button110->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickEditarve ), NULL, this );
	m_button120->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickSalirve ), NULL, this );
}

PantallaVerEventos::~PantallaVerEventos()
{
	// Disconnect Events
	tx_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( PantallaVerEventos::Enter_tx_BuscarE ), NULL, this );
	m_button84->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickBuscarEvento ), NULL, this );
	GrillaVerE->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerEventos::DobleClickGrillaE ), NULL, this );
	GrillaVerE->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerEventos::ClickGrillaE ), NULL, this );
	m_button100->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickEliiminarve ), NULL, this );
	m_button110->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickEditarve ), NULL, this );
	m_button120->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerEventos::OnClickSalirve ), NULL, this );
	
}

PantallaVerHistorial::PantallaVerHistorial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Ver historial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer93->Add( m_staticText45, 0, wxALL, 5 );
	
	wxArrayString elegir_RP_eventohChoices;
	elegir_RP_eventoh = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, elegir_RP_eventohChoices, 0 );
	elegir_RP_eventoh->SetSelection( 0 );
	bSizer93->Add( elegir_RP_eventoh, 0, wxALL, 5 );
	
	
	bSizer89->Add( bSizer93, 0, wxEXPAND, 5 );
	
	m_scrolledWindow4 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow4->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer90;
	bSizer90 = new wxBoxSizer( wxVERTICAL );
	
	GrillaHistorial = new wxGrid( m_scrolledWindow4, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaHistorial->CreateGrid( 5, 5 );
	GrillaHistorial->EnableEditing( true );
	GrillaHistorial->EnableGridLines( true );
	GrillaHistorial->EnableDragGridSize( false );
	GrillaHistorial->SetMargins( 0, 0 );
	
	// Columns
	GrillaHistorial->EnableDragColMove( false );
	GrillaHistorial->EnableDragColSize( true );
	GrillaHistorial->SetColLabelSize( 30 );
	GrillaHistorial->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaHistorial->EnableDragRowSize( true );
	GrillaHistorial->SetRowLabelSize( 80 );
	GrillaHistorial->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	GrillaHistorial->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer90->Add( GrillaHistorial, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow4->SetSizer( bSizer90 );
	m_scrolledWindow4->Layout();
	bSizer90->Fit( m_scrolledWindow4 );
	bSizer89->Add( m_scrolledWindow4, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button24 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( m_button24, 0, wxALL, 5 );
	
	m_button25 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( m_button25, 0, wxALL, 5 );
	
	m_button26 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( m_button26, 0, wxALL, 5 );
	
	
	bSizer89->Add( bSizer91, 0, wxEXPAND|wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer89 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	elegir_RP_eventoh->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaVerHistorial::elegir_RP_evento ), NULL, this );
	GrillaHistorial->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerHistorial::DobleClickGrilla ), NULL, this );
	GrillaHistorial->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerHistorial::ClickGrilla ), NULL, this );
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickSalirh ), NULL, this );
	m_button25->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickEditar ), NULL, this );
	m_button26->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickEliminar ), NULL, this );
}

PantallaVerHistorial::~PantallaVerHistorial()
{
	// Disconnect Events
	elegir_RP_eventoh->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PantallaVerHistorial::elegir_RP_evento ), NULL, this );
	GrillaHistorial->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( PantallaVerHistorial::DobleClickGrilla ), NULL, this );
	GrillaHistorial->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( PantallaVerHistorial::ClickGrilla ), NULL, this );
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickSalirh ), NULL, this );
	m_button25->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickEditar ), NULL, this );
	m_button26->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PantallaVerHistorial::OnClickEliminar ), NULL, this );
	
}
