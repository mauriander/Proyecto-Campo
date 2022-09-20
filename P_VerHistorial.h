#ifndef P_VERHISTORIAL_H
#define P_VERHISTORIAL_H
#include "wxfb_project.h"
#include "Eventos.h"
#include "Campo.h"

class P_VerHistorial : public PantallaVerHistorial {
	
private:
	
protected:
	//void elegir_RP_eventoh( wxCommandEvent& event )  override;
	void elegir_RP_evento( wxCommandEvent& event )  override;
	void DobleClickGrilla( wxGridEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	void OnClickSalirh( wxCommandEvent& event )  override;
	void OnClickEditar( wxCommandEvent& event )  override;
	void OnClickEliminar( wxCommandEvent& event )  override;
	
public:
	P_VerHistorial(wxWindow *parent=NULL);
	~P_VerHistorial();
	void CargarFila(int i);
};

#endif

