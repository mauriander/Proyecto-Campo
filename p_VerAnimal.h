#ifndef P_VERANIMAL_H
#define P_VERANIMAL_H
#include "wxfb_project.h"
#include "Animal.h"
#include "Campo.h"
#include <wx/window.h>


class p_VerAnimal : public PantallaVerAnimal {
	
private:
	
protected:
	void OnClickActualizar( wxCommandEvent& event )  override;
	void OnClickEliiminarva( wxCommandEvent& event )  override;
	void OnClickEditarva( wxCommandEvent& event )  override;
	void OnClickSalirva( wxCommandEvent& event )  override;
	void Enter_tx_Buscar( wxCommandEvent& event )  override;
	void OnClickBuscarPersona( wxCommandEvent& event )  override;
	void DobleClickGrilla( wxGridEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	/*void OnClickEliiminar( wxCommandEvent& event )  override;
	void OnClickEditar( wxCommandEvent& event )  override;
	void OnClickSalir( wxCommandEvent& event )  override;*/
	
public:
	p_VerAnimal(wxWindow *parent=NULL);
	~p_VerAnimal();
	void CargarFila(int i);
};

#endif

