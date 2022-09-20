#include "Eventos.h"

// -- creo un objeto eventos vacio para que la clase sea consistente --//
Eventos::Eventos ( int pes, int mes, string rp_eve, int d_eve, int m_eve, int a_eve, string eve, string obse, string resp
	,string vac) {

		//Eventos ( int pes=0, int mes=0, string rp_eve="",	int d_eve=0, int m_eve=0, int a_eve=0, string eve="", string obse="", string resp=""
		//, string vac="");
		PasarMayusculas(eve);
		//Numero_Ordenie=ord;
		//Produccion=prod;		
		
		RP_Evento=rp_eve;	
		Dia_Eve=d_eve;		
		Mes_Eve=m_eve;
		Anio_Eve=a_eve;
		Peso=pes;
		Meses=mes;
		Vacuna=vac;
		
		EVEN=eve;
		
		Observaciones=obse;
		Responsable=resp;
		
		/*controll.Grasa_Butirosa=gb;
		controll.Proteinas=prot;
		controll.Solidos=so;
		controll.Recuento_Cel=rc;
		*/
			
	}
//
// -- Para modificar los datos -- //

void Eventos::ModificarPeso (int n_pro){
	Peso=n_pro;
}

void Eventos::ModificarMeses (int n_n_ord) {
	Meses=n_n_ord;
}

void Eventos::ModificarVacuna(string n_vacu){
	Vacuna=n_vacu;
}
	
	
void Eventos::ModificarRP_Evento (string n_rp_eve){
	RP_Evento=n_rp_eve;
}
void Eventos::ModificarDia_Eve (int n_d_even){
	Dia_Eve=n_d_even;
}
void Eventos::ModificarMes_Eve (int n_m_even){
	Mes_Eve=n_m_even;
}
void Eventos::ModificarAnio_Eve (int n_a_even){
	Anio_Eve=n_a_even;
}
void Eventos::ModificarObservaciones (string n_obs){
	Observaciones=n_obs;
}
void Eventos::ModificarResponsable (string n_resp){
	Responsable=n_resp;
}
//
// -- ver los eventos
int Eventos::Ver_Peso() const {
	return Peso;
}	
int Eventos::Ver_Meses() const {
	return Meses;
}
string Eventos::Ver_RP_Evento() const {
	return RP_Evento;
}
int Eventos::Ver_Dia_Eve() const {
	return Dia_Eve;
}
int Eventos::Ver_Mes_Eve() const {
	return Mes_Eve;
}
int Eventos::Ver_Anio_Eve() const {
	return Anio_Eve;
}
string Eventos::Ver_EVEN () const {
	return EVEN;
}
string Eventos::Ver_Observaciones() const {
	return Observaciones;
}
string Eventos::Ver_Responsable() const {
	return Responsable;
}
string Eventos::Ver_Vacuna() const {
	return Vacuna;
}
/*int Eventos::Ver_Grasa_Butirosa() const {
	return controll.Grasa_Butirosa;
}
int Eventos::Ver_Proteinas() const {
	return controll.Proteinas;
} 
int Eventos::Ver_Solidos() const {
	return controll.Solidos;
}
int Eventos::Ver_Recuento_Cel() const {
	return controll.Recuento_Cel;
}*/

//
// -- Guardar los datos
void Eventos::GuardarEvento (ofstream &archivo) {
	
	registros_eventos nuevo; // Creo un struct para los eventos

	
	nuevo.peso=Peso;
	strcpy(nuevo.rp_evento,RP_Evento.c_str());
	nuevo.dia_eve=Dia_Eve;
	nuevo.mes_eve=Mes_Eve;
	nuevo.anio_eve=Anio_Eve;
	nuevo.meses=Meses;
	strcpy (nuevo.even,EVEN.c_str());
	strcpy(nuevo.observaciones,Observaciones.c_str());
	strcpy(nuevo.responsable,Responsable.c_str());
	strcpy(nuevo.vacu,Vacuna.c_str());
	
	/*nuevo.gb=controll.Grasa_Butirosa;
	nuevo.pr=controll.Proteinas;
	nuevo.rc=controll.Recuento_Cel;
	nuevo.so=controll.Solidos;
	*/
	
	// reinterpret_cast es la mejor opcion de casteo
	archivo.write (reinterpret_cast <char*> (&nuevo),sizeof (registros_eventos));
//	archivo.write ((char*) &nuevo,sizeof (registros_eventos));
}
void Eventos::LeerEvento (ifstream &archivo) {
	
	registros_eventos nuevo; // Creo un struct para los eventos
	
	// reinterpret_cast es la mejor opcion de casteo
	archivo.read (reinterpret_cast <char*> (&nuevo),sizeof (registros_eventos));
//	archivo.read ((char*) &nuevo,sizeof (registros_eventos));
	
	Peso=nuevo.peso;		
	RP_Evento=nuevo.rp_evento;
	Dia_Eve=nuevo.dia_eve;
	Mes_Eve=nuevo.mes_eve;
	Anio_Eve=nuevo.anio_eve;
	Meses=nuevo.meses;
	EVEN=nuevo.even;
	Observaciones=nuevo.observaciones;
	Responsable=nuevo.responsable;
	Vacuna=nuevo.vacu;
	
	
	/*controll.Grasa_Butirosa=nuevo.gb;
	controll.Proteinas=nuevo.pr;
	controll.Recuento_Cel=nuevo.rc;
	controll.Solidos=nuevo.so;*/
	
	
}
//
// -- Valida los datos introducidos
//
string Eventos::Validar () {
	string ERROR="";
	if (RP_Evento=="") ERROR+="* El Numero de Identificacíon del Animal (RP) no puede estar vacio\n";
	if (HayBlancos(RP_Evento)) ERROR+="* El numero de Identificación Animal no puede contener espacios vacios\n";
	if (RP_Evento.size()>15) ERROR+="* El código RP es muy largo\n";
	if (Responsable=="") ERROR+="* El campo responsable no debe estar vacio\n";
	if (Observaciones.size()>998) ERROR+="* Las Observaciones son muy largas, por favor reduzcala\n";
	if ((Dia_Eve<=0)||(Dia_Eve>31)) ERROR+="* Dia del Evento invalido\n";
	if ((Mes_Eve<=0)||(Mes_Eve>12)) ERROR+="* Mes del Evento invalido\n";
	if ((Anio_Eve<=1950)||(Anio_Eve>=2050)) ERROR+="* Anio del Evento invalido\n";
	return ERROR;
	
}
//
// -- para el orden de los casilleros
//
bool criterio_comparacion_peso (const Eventos &e1, const Eventos &e2) {
	int s1 = e1.Ver_Peso();
	int s2 = e2.Ver_Peso();
	return s1<s2;
}	
bool criterio_comparacion_rpeven (const Eventos &e1, const Eventos &e2) {
	string s1 = e1.Ver_RP_Evento();
	string s2 = e2.Ver_RP_Evento();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}
bool criterio_comparacion_resp (const Eventos &e1, const Eventos &e2) {
	string s1 = e1.Ver_Responsable();
	string s2 = e2.Ver_Responsable();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
}	

// 
bool criterio_comparacion_evento (const Eventos &e1, const Eventos &e2) {
	string s1 = e1.Ver_EVEN();
	string s2 = e2.Ver_EVEN();
	PasarMinusculas (s1);
	PasarMinusculas (s2);
	return s1<s2;
	
}
bool criterio_comparacion_f_evento (const Eventos &e1, const Eventos &e2) {
	string fecha1;
	string fecha2;
	
	//
	// si la fecha1 era por ejemplo: 1 3 2000
	// quedara: 200031
	
	// si la fecha2 era por ejemplo= 2 10 1999
	// quedara: 1999102
	
	// al fin retorna el primero en orden alfabetico
	
	
	fecha1 = e1.Ver_Anio_Eve() + e1.Ver_Mes_Eve() + e1.Ver_Dia_Eve();
	fecha2 = e2.Ver_Anio_Eve() + e2.Ver_Mes_Eve() + e2.Ver_Dia_Eve();
	
	return fecha1<fecha2;
	
}
	

//
//

