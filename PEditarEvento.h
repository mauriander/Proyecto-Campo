#ifndef PEDITAREVENTO_H
#define PEDITAREVENTO_H
#include "wxfb_project.h"
#include <wx/msgdlg.h>
#include "Eventos.h"
#include "Campo.h"
#include <wx/window.h>
//#include <wx/event.h>
//#include <wx/window.h>
class PEditarEvento : public PantallaEvento {
private:
	int indice_evento;
	bool puede_guardar;
	//int elije;
protected:
	void ClickElegirRp( wxCommandEvent& event )  override;
	void ClickELegirEvento( wxCommandEvent& event )  override;
	void ClickElegirResponsable( wxCommandEvent& event )  override;
	void ClickElegirMeses( wxCommandEvent& event )  override;
	void OnClickVerPEvento( wxCommandEvent& event )  override;
	void OnClickGuardarPEvento( wxCommandEvent& event )  override;
	void OnClickSalirPEvento( wxCommandEvent& event )  override;
//	void ClickElegirRp( wxCommandEvent& event )  override;
/*	void ClickELegirEvento( wxCommandEvent& event )  override;
	void ClickElegirResponsable( wxCommandEvent& event )  override;*/
	
public:
	PEditarEvento(wxWindow *parent, int fila_actual);
   ~PEditarEvento();
};
#endif
