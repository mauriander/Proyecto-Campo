#ifndef PEDITARANIMAL_H
#define PEDITARANIMAL_H
#include "wxfb_project.h"
#include <wx/msgdlg.h>
#include "Animal.h"
#include "Campo.h"
#include <wx/window.h>
//#include "PEditarProfesional.h"



class PEditarAnimal: public PantallaAnimal {
private:
	int indice_animal;	// guarda el numero del arreglo donde se encuentra el animal 
	bool puede_guardar;	// verifico si puedo guardar
protected:
	void OnClickVerHistorial( wxCommandEvent& event )  override;
	void OmClickGuardarAnimal( wxCommandEvent& event )  override;
	void OnClickVerAnimales( wxCommandEvent& event )  override;
	//void OnClickuardarAnimal( wxCommandEvent& event )  override;
	void OnClickSalirAnimal( wxCommandEvent& event )  override;
	
public:
	//	VEditarPersona(wxWindow *parent=NULL);
	PEditarAnimal(wxWindow *parent, int fila_actual);
	~PEditarAnimal();


};




#endif

