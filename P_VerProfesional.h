#ifndef P_VERPROFESIONAL_H
#define P_VERPROFESIONAL_H
#include "wxfb_project.h"
#include "DatosGenerales.h"
#include "Campo.h"


class P_VerProfesional : public PantallaVerProfesionales {
	
private:
	
protected:
	void Enter_tx_Buscar( wxCommandEvent& event )  override;
	void OnClickBuscarPersona( wxCommandEvent& event )  override;
	void DobleClickGrilla( wxGridEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	void OnClickEliiminar( wxCommandEvent& event )  override;
	void OnClickEditar( wxCommandEvent& event )  override;
	void OnClickSalir( wxCommandEvent& event )  override;
	
public:
	P_VerProfesional(wxWindow *parent=NULL);
	~P_VerProfesional();
	void CargarFila(int i);
};

#endif

