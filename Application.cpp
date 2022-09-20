#include <wx/image.h>
#include "Application.h"
#include "WinExample.h"
#include "wxfb_project.h"
#include "Campo.h"
#include "P_Profesional.h"
#include "P_Animale.h"
#include "P_VerProfesional.h"
#include "PEditarProfesional.h"
#include "p_VerAnimal.h"
#include "PEditarAnimal.h"
#include "P_Evento.h"
#include "PEditarEvento.h"
#include "P_VerHistorial.h"

P_VerHistorial *NPVerHistorial;
P_VerEventos *NPVerEventos;
PEditarEvento *NPEditarEvento;
P_Evento *NEvento;
PEditarAnimal *NPEditarAnimal;
p_VerAnimal *NpVerAnimal;
PEditarProfesional *NPEditarProfesional;
P_VerProfesional *NPVerProfesional;
P_Profesional *NProfesional;
P_Animale *NAnimal;

IMPLEMENT_APP(Application)
	
bool Application::OnInit() {
	
	mi_campo = new Campo ("Animales Bovinos.ct","Eventos Bovino.ct","Datos Programa.ct");
	wxInitAllImageHandlers();
	WinExample *win = new WinExample(NULL);
	win->Show();
	return true;
}

