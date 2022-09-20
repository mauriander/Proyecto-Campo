#include "Animal.h"
#include <ctime>
#include <cstddef>
#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>

//#include "Definiciones.h"
#include <string>

#include <sstream>
using namespace std;

// -- creo un objeto animal con sus respectivos datos --//
Animal::Animal (string rp, string nomb, int dnac, int mnac, int anac, string raza,
	string cat,	string sec, string rc, string proc, bool pren,  string rpm, string rpp, bool muerto, bool vendido, bool sexo) {
		
		//completo con ceros el rp, hba, rc.- para completar 15 caracteres.-
		//Con esto solucione temporalmente la presentacion de caracteres en la ventana ver animal
		//no deberia completarse todos con 15 ceros
		CompletarCeros(rp,15);
		//CompletarCeros(rc,15);
		//CompletarCeros(hba,15);
		//CompletarCeros(rcm,15);
		//CompletarCeros(hbam,15);// fijarse
		CompletarCeros(rpm,15);
		//CompletarCeros(hbap,15);
		CompletarCeros(rpp,15);
		
		RP=rp;					
		Nombre=nomb;			
		Dia_Nac=dnac;
		Mes_Nac=mnac;
		Anio_Nac=anac;
		Raza=raza; 			
		Categoria=cat;
		Seccion=sec;
		RC=rc;
		//HBA=hba;
		Procedencia=proc;
		Preniada=pren;			
	//	RC_Madre=rcm;
		//HBA_Madre=hbam;
		RP_Madre=rpm;
		//HBA_Padre=hbap;
		RP_Padre=rpp;
		int Edad;
		Muerto=muerto;
		Vendido=vendido;
		Sexo=sexo;
	}



//
//-- Para modificar los datos -- //
void Animal::ModificarRP (string n_rp){
	RP=n_rp;					
}
void Animal::ModificarNombre (string n_nomb){
	Nombre=n_nomb;
}
void Animal::ModificarDiaNac (int n_dianac){
	Dia_Nac=n_dianac;
}
void Animal::ModificarMesNac (int n_mesnac){
	Mes_Nac=n_mesnac;
}
void Animal::ModificarAnioNac (int n_anionac){
	Anio_Nac=n_anionac;
}
void Animal::ModificarRaza (string n_raza){
	Raza=n_raza;
}
void Animal::ModificarCategoria (string n_cat){
	Categoria=n_cat;
}
void Animal::ModificarSeccion (string n_sec){
	Seccion=n_sec;
}
void Animal::ModificarRC (string n_rc){
	RC=n_rc;
}
/*
void Animal::ModificarHBA (string n_hba){
	HBA=n_hba;
}*/
void Animal::ModificarProcedencia (string n_pro){
	Procedencia=n_pro;
}
void Animal::ModificarPreniada (bool n_pre){
	Preniada=n_pre;
}
/*
void Animal::ModificarRC_Madre (string n_rcm){
	RC_Madre=n_rcm;
}*/

/*
void Animal::ModificarHBA_Madre (string n_hbam){
	HBA_Madre=n_hbam;
}*/

void Animal::ModificarRP_Madre (string n_rpm){
	RP_Madre=n_rpm;
}
/*
void Animal::ModificarHBA_Padre (string n_hbap){
	HBA_Padre=n_hbap;
}*/
void Animal::ModificarRP_Padre (string n_rpp){
	RP_Padre=n_rpp;
}

void Animal::ModificarMuerto (bool n_mu){
	Muerto=n_mu;
}
void Animal::ModificarVendido (bool n_ve){
	Vendido=n_ve;
}

void Animal::ModificarSexo (bool n_se){
	Sexo=n_se;
}

//
// -- Para Obtener los datos guardados -- //
string Animal::Ver_RP() const {
	return RP;
}			
string Animal::Ver_Nombre() const {
	return Nombre;
}	
int Animal::Ver_Dia_Nac() const {
	return Dia_Nac;
}
int Animal::Ver_Mes_Nac() const {
	return Mes_Nac;
}		
int Animal::Ver_Anio_Nac() const {
	return Anio_Nac;
}
string Animal::Ver_Raza() const {
	return Raza;
}			
string Animal::Ver_Categoria() const {
	return Categoria;
}
string Animal::Ver_Seccion() const {
	return Seccion;
}
string Animal::Ver_RC() const {
	return RC;
}
/*
string Animal::Ver_HBA() const {
	return HBA;
}*/
string Animal::Ver_Procedencia() const {
	return Procedencia;
}
bool Animal::Ver_Preniada() const {
	return Preniada;
}
/*
string Animal::Ver_RC_Madre() const {
	return RC_Madre;
}*/

/*
string Animal::Ver_HBA_Madre() const {
	return HBA_Madre;
}*/
string Animal::Ver_RP_Madre() const {
	return RP_Madre;
}
/*
string Animal::Ver_HBA_Padre() const {
	return HBA_Padre;
}*/
string Animal::Ver_RP_Padre() const {
	return RP_Padre;
}
bool Animal::Ver_Muerto() const {
	return Muerto;
}
bool Animal::Ver_Vendido() const {
	return Vendido;
}

bool Animal::Ver_Sexo() const {
	return Sexo;
}
//




// -- guardar un registro animal en disco -- //
void Animal::GuardarAnimal (ofstream &archivo){
	registros_animales nuevo; // Creo un struct para los datos
	
	// Los datos deben guardarse como char[xx] y no como string, un string es un objeto
	// que contiene un puntero y cuando se guarda en archivo binario se guarda el puntero
	// y no el contenido
	strcpy(nuevo.rp,RP.c_str());	
	strcpy(nuevo.nomb,Nombre.c_str());	
	nuevo.dianac=Dia_Nac;
	nuevo.mesnac=Mes_Nac;
	nuevo.anionac=Anio_Nac;
	strcpy(nuevo.raza,Raza.c_str()); 			
	strcpy(nuevo.cat,Categoria.c_str());
	strcpy(nuevo.sec,Seccion.c_str());
	strcpy(nuevo.rc,RC.c_str());
	//strcpy(nuevo.hba,HBA.c_str());
	strcpy(nuevo.proc,Procedencia.c_str());
	nuevo.pren=Preniada;
	//strcpy(nuevo.rcm,RC_Madre.c_str());
	//strcpy(nuevo.hbam,HBA_Madre.c_str());
	strcpy(nuevo.rpm,RP_Madre.c_str());
	//strcpy(nuevo.hbap,HBA_Padre.c_str());
	strcpy(nuevo.rpp,RP_Padre.c_str());
	
	nuevo.Muer=Muerto;
	nuevo.Vend=Vendido;
	nuevo.Sex=Sexo;
	// reinterpret_cast es la mejor opcion de casteo
	archivo.write (reinterpret_cast <char*> (&nuevo),sizeof (registros_animales));
//	archivo.write ((char*) &nuevo,sizeof (registros_animales));
}
//
// -- leer un registro animal desde disco -- //
void Animal::LeerAnimal (ifstream &archivo){
	registros_animales nuevo;
	
	// reinterpret_cast es la mejor opcion de casteo
	archivo.read (reinterpret_cast <char*> (&nuevo),sizeof (registros_animales));
//	archivo.read ((char*) &nuevo,sizeof (registros_animales));
	
	RP=nuevo.rp;	
	Nombre=nuevo.nomb;	
	Dia_Nac=nuevo.dianac;
	Mes_Nac=nuevo.mesnac;
	Anio_Nac=nuevo.anionac;	
	Raza=nuevo.raza; 			
	Categoria=nuevo.cat;
	Seccion=nuevo.sec;
	RC=nuevo.rc;
	//HBA=nuevo.hba;
	Procedencia=nuevo.proc;
	Preniada=nuevo.pren;
	//RC_Madre=nuevo.rcm;
	//HBA_Madre=nuevo.hba;
	RP_Madre=nuevo.rpm;
	//HBA_Padre=nuevo.hbap;
	RP_Padre=nuevo.rpp;
	
	Muerto=nuevo.Muer;
	Vendido=nuevo.Vend;
	Sexo=nuevo.Sex;
}
//
// -- comprueba que los datos introducidos sean logicos -- //
string Animal::Validar (){
	string ERROR="";
	if (RP=="") ERROR+="* El Numero de Identificacíon del Animal (RP) no puede estar vacio\n";
	if (HayBlancos(RP)) ERROR+="* El numero de Identificación Animal no puede contener espacios vacios\n";
	//if (HBA.size()<15) ERROR+="* El código HBA es muy corto\n";
	if (RP.size()>15) ERROR+="* El código RP es muy largo\n";
	//if ((Dia_Nac<=0)||(Dia_Nac>31)) ERROR+="* Dia de Nacimiento invalido\n";
	//if ((Mes_Nac<=0)||(Mes_Nac>12)) ERROR+="* Mes de Nacimiento invalido\n";
	//if ((Anio_Nac<=1950)||(Anio_Nac>=2050)) ERROR+="* Anio de Nacimiento invalido\n";
	if (RC=="") ERROR+="* El Numero de Identificacíon interna del Animal no puede estar vacio\n";
	//if (HayBlancos(HBA)) ERROR+="* El H.B.A del Animal no puede contener espacios vacios\n";
	if (HayBlancos(RP_Madre)) ERROR+="* El código RP de la Madre no puede contener espacios vacios\n";
	//if (HayBlancos(HBA_Madre)) ERROR+="* El código H.B.A de la Madre no puede contener espacios vacios\n";
	if (HayBlancos(RP_Padre)) ERROR+="* El código RP del Padre no puede contener espacios vacios\n";
	//if (HayBlancos(HBA_Padre)) ERROR+="* El código H.B.A del Padre no puede contener espacios vacios\n";
	return ERROR;
}
//
// -- Funciones de comparacion -- //
// 
bool criterio_comparacion_rp (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_RP();
	string s2 = a2.Ver_RP();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
bool criterio_comparacion_nombre (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_Nombre();
	string s2 = a2.Ver_Nombre();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
bool criterio_comparacion_raza (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_Raza();
	string s2 = a2.Ver_Raza();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
bool criterio_comparacion_cat (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_Categoria();
	string s2 = a2.Ver_Categoria();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
bool criterio_comparacion_sec (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_Seccion();
	string s2 = a2.Ver_Seccion();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
bool criterio_comparacion_rc (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_RC();
	string s2 = a2.Ver_RC();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	
/*
bool criterio_comparacion_hba (const Animal &a1, const Animal &a2) {
	string s1 = a1.Ver_HBA();
	string s2 = a2.Ver_HBA();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}*/
bool criterio_comparacion_fecnac (const Animal &a1, const Animal &a2) {
	string fecha1;
	string fecha2;
	
	//
	// si la fecha1 era por ejemplo: 1 3 2000
	// quedara: 200031
	
	// si la fecha2 era por ejemplo= 2 10 1999
	// quedara: 1999102
	
	// al fin retorna el primero en orden alfabetico
	
//	fecha1 = a1.Ver_Anio_Nac() + a1.Ver_Mes_Nac() + a1.Ver_Dia_Nac();
//	fecha2 = a2.Ver_Anio_Nac() + a2.Ver_Mes_Nac() + a2.Ver_Dia_Nac();
//	string aux1=ConvertirIntTOString(a1.Ver_Anio_Nac());
//	string aux1=ConvertirIntTOString(a1.Ver_Mes_Nac());
//	string aux2=ConvertirIntTOString(a1.Ver_Dia_Nac());
//
//	CompletarCeros(aux1,2);
//	CompletarCeros(aux2,2);
//	fecha1=ConvertirIntTOString(a1.Ver_Anio_Nac())+aux1+aux2;
//	
//	string aux3=ConvertirIntTOString(a2.Ver_Mes_Nac());
//	string aux4=ConvertirIntTOString(a2.Ver_Dia_Nac());
//	CompletarCeros(aux3,2);
//	CompletarCeros(aux4,2);
//	fecha2=ConvertirIntTOString(a1.Ver_Anio_Nac())+aux3+aux1;
	
	
	//
//	fecha1 = ConvertirIntTOString(a1.Ver_Anio_Nac()) + ConvertirIntTOString(a1.Ver_Mes_Nac()) + ConvertirIntTOString(a1.Ver_Dia_Nac());
//	fecha2 = ConvertirIntTOString(a2.Ver_Anio_Nac()) + ConvertirIntTOString(a2.Ver_Mes_Nac()) + ConvertirIntTOString(a2.Ver_Dia_Nac());
	//
	
	
	double a=a1.Ver_Anio_Nac()*365 + a1.Ver_Mes_Nac()*30 + a1.Ver_Dia_Nac();
	double b=a2.Ver_Anio_Nac()*365 + a2.Ver_Mes_Nac()*30 + a2.Ver_Dia_Nac();

	
	
	
	
	
//	return fecha1<fecha2;
	return a<b;
}
