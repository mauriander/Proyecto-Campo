#ifndef P_ANIMALE_H
#define P_ANIMALE_H
#include "wxfb_project.h"

class P_Animale : public PantallaAnimal {
	
private:
	
protected:
	void OnClickVerHistorial( wxCommandEvent& event )  override;
	void OnClickSalirAnimal( wxCommandEvent& event )  override;
	void OnClickVerAnimales( wxCommandEvent& event )  override;
	void OmClickGuardarAnimal( wxCommandEvent& event )  override;
//	void OnClickSalirAnimal( wxCommandEvent& event )  override;
	
public:
	P_Animale(wxWindow *parent=NULL);
	~P_Animale();
};

#endif

