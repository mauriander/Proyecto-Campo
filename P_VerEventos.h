#ifndef P_VEREVENTOS_H
#define P_VEREVENTOS_H
#include "wxfb_project.h"
#include "Campo.h"
#include "Eventos.h"

class P_VerEventos : public PantallaVerEventos {
	
private:
	
protected:
	void Enter_tx_BuscarE( wxCommandEvent& event )  override;
	void DobleClickGrillaE( wxGridEvent& event )  override;
	void ClickGrillaE( wxGridEvent& event )  override;
	void OnClickBuscarEvento( wxCommandEvent& event )  override;
	void OnClickEliiminarve( wxCommandEvent& event )  override;
	void OnClickEditarve( wxCommandEvent& event )  override;
	void OnClickSalirve( wxCommandEvent& event )  override;
	//void Enter_tx_Buscar( wxCommandEvent& event )  override;
	//void OnClickBuscarPersona( wxCommandEvent& event )  override;
	//void DobleClickGrilla( wxGridEvent& event )  override;
	//void ClickGrilla( wxGridEvent& event )  override;
	//void OnClickEliiminarva( wxCommandEvent& event )  override;
	//void OnClickEditarva( wxCommandEvent& event )  override;
	//void OnClickSalirva( wxCommandEvent& event )  override;
	
public:
	P_VerEventos(wxWindow *parent=NULL);
	~P_VerEventos();
	void CargarFila(int i);
};

#endif

