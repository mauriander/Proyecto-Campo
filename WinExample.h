#ifndef WIN_EXAMPLE_H
#define WIN_EXAMPLE_H
#include "wxfb_project.h"


class WinExample : public wxfbExample {
protected:
	void OnButtonAgregarEvento( wxCommandEvent& event )  override;
	void ClickExportarPersonas( wxCommandEvent& event )  override;
	void ClickExportarEventos( wxCommandEvent& event )  override;
	void ClickExportarAnimales( wxCommandEvent& event )  override;
	void OnClickVerHistorialP( wxCommandEvent& event )  override;
	void OnClickVerEventos( wxCommandEvent& event )  override;
	void OnClickAgregarEvento( wxCommandEvent& event )  override;
	void OnClickVerAnimal( wxCommandEvent& event )  override;
	void OnClickVerProffsional( wxCommandEvent& event )  override;
	void OnClickAgregarProfesional( wxCommandEvent& event )  override;
	void OnClickAgregarAnimal( wxCommandEvent& event )  override;
	void OnButtonAgregarAnimal( wxCommandEvent& event )  override;
	void OnButtonAgregarProfesional( wxCommandEvent& event )  override;
	void OnButtonVerPersona( wxCommandEvent& event )  override;

public:
	WinExample(wxWindow *parent=NULL);
	void OnButtonClose(wxCommandEvent &evt);
};

#endif
