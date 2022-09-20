#ifndef FECHA_CTRL_H
#define FECHA_CTRL_H
// fechas de los controles lecheros almacenadas en una clase para mayor comodidad
class Fecha_Ctrl {
private:
	int dia, mes, anio;
public:
	Fecha_Ctrl (int d=0, int m=0, int a=0);
	int Ver_D_F();
	int Ver_M_F();
	int Ver_A_F();
};

#endif

