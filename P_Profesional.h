#ifndef P_PROFESIONAL_H
#define P_PROFESIONAL_H
#include "wxfb_project.h"

class P_Profesional : public PantallaProfesional {
	
private:
	
protected:
	void OnClickVerProfesional( wxCommandEvent& event )  override;
	void OnClickuardarProfesional( wxCommandEvent& event )  override;
	void OnClickSalirProfesional( wxCommandEvent& event )  override;

	
public:
	P_Profesional(wxWindow *parent=NULL);
	~P_Profesional();
};

#endif

