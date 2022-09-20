#ifndef PEDITARPROFESIONAL_H
#define PEDITARPROFESIONAL_H
#include "wxfb_project.h"
#include <wx/msgdlg.h>
#include "DatosGenerales.h"
#include "Campo.h"
#include <wx/window.h>
//#include "PEditarProfesional.h"



class PEditarProfesional: public PantallaProfesional {
private:
	int indice_persona;	// guarda el numero del arreglo donde se encuentra el animal 
	bool puede_guardar;	// verifico si puedo guardar
protected:
	void OnClickVerProfesional( wxCommandEvent& event )  override;
	void OnClickuardarProfesional( wxCommandEvent& event )  override;
	void OnClickSalirProfesional( wxCommandEvent& event )  override;
	
public:
	//	VEditarPersona(wxWindow *parent=NULL);
	PEditarProfesional(wxWindow *parent, int fila_actual);
	~PEditarProfesional();


};




#endif

