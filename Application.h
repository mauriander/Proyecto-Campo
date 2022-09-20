#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>

#include "Campo.h"
#include "P_Profesional.h"
#include "P_Animale.h"
#include "P_VerProfesional.h"
#include "PEditarProfesional.h"
#include "p_VerAnimal.h"
#include "PEditarAnimal.h"
#include "P_Evento.h"
#include "PEditarEvento.h"
#include "P_VerEventos.h"
#include "P_VerHistorial.h"

extern P_VerHistorial *NPVerHistorial;
extern P_VerEventos *NPVerEventos;
extern PEditarEvento *NPEditarEvento;
extern P_Evento *NEvento;
extern PEditarAnimal *NPEditarAnimal;
extern p_VerAnimal *NpVerAnimal;
extern PEditarProfesional *NPEditarProfesional;
extern P_VerProfesional *NPVerProfesional;
extern P_Animale *NAnimal ;
extern P_Profesional *NProfesional;
//extern P_Animal *NAnimal;

class Application : public wxApp {
public:
	virtual bool OnInit();
};

#endif
