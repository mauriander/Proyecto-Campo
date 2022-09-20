#include "Fecha_Ctrl.h"

Fecha_Ctrl::Fecha_Ctrl (int d, int m, int a) {
	dia=d;
	mes=m;
	anio=a;
}

int Fecha_Ctrl::Ver_D_F() {
	return dia;
}

int Fecha_Ctrl::Ver_M_F() {
	return mes;
}

int Fecha_Ctrl::Ver_A_F() {
	return anio;
}
