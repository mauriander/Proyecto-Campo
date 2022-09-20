#ifndef P_EVENTO_H
#define P_EVENTO_H
#include "wxfb_project.h"

class P_Evento : public PantallaEvento {
	
private:
	
protected:
	void ClickElegirMeses( wxCommandEvent& event )  override;
	void OnClickVerPEvento( wxCommandEvent& event )  override;
	void OnClickGuardarPEvento( wxCommandEvent& event )  override;
	void OnClickSalirPEvento( wxCommandEvent& event )  override;
	void ClickElegirRp( wxCommandEvent& event )  override;
	void ClickELegirEvento( wxCommandEvent& event )  override;
	void ClickElegirResponsable( wxCommandEvent& event )  override;
	
public:
	P_Evento(wxWindow *parent=NULL);
	~P_Evento();
};

#endif

