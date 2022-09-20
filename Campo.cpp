#include "Campo.h"
#include <string>
#include <wx/object.h>
#include <wx/toolbar.h>
using namespace std;


// -- Cuando se crea el objeto, se leen los datos almacenados en un archivo binario en disco
Campo::Campo(string ruta_ani, string ruta_eve, string ruta_dat) {
	
	//	Datos de los animales
	Ruta_Archivo_Animal = ruta_ani;
	ifstream archivo(ruta_ani.c_str(),ios::binary|ios::ate);
	if (archivo.is_open()) {
		int tamanio_archivo = archivo.tellg();
		int cantidad_animales = tamanio_archivo/sizeof(registros_animales);
		arreglo.resize(cantidad_animales);
		archivo.seekg(0,ios::beg);
		for (int i=0;i<cantidad_animales;i++)
			arreglo[i].LeerAnimal(archivo);
		archivo.close();
	}
	
	// 	Carga de los eventos
	Ruta_Archivo_Eventos =ruta_eve;
	ifstream archivo2(ruta_eve.c_str(),ios::binary|ios::ate);
	if (archivo2.is_open()) {
		int tamanio_archivo2 = archivo2.tellg();
		int cantidad_eventos = tamanio_archivo2/sizeof(registros_eventos);
		arreglo2.resize(cantidad_eventos);
		archivo2.seekg(0,ios::beg);
		for (int i=0;i<cantidad_eventos;i++)
			arreglo2[i].LeerEvento(archivo2);
		archivo2.close();
	}
	
	// Carga de datos del programa, usuario, etc
	string dato;
	Ruta_Archivo_General = ruta_dat;
	ifstream archivo3(ruta_dat.c_str(),ios::binary|ios::ate);
	if (archivo3.is_open()) {
		int tamanio_archivo3 = archivo3.tellg();
		int cantidad_datos = tamanio_archivo3/sizeof(general);
		arreglo3.resize(cantidad_datos);
		archivo3.seekg(0,ios::beg);
		for (int i=0;i<cantidad_datos;i++)
			arreglo3[i].LeerGeneral(archivo3);
		archivo3.close();
	}
	
}
// -- Guarda los registros almacenados en el vector animales en un archivo binario en disco
bool Campo::Guardar (CriterioGuardado criterio) {
	bool guardado=false;
	switch (criterio) {
	case GuardarAnimal: {
		ofstream archivo(Ruta_Archivo_Animal.c_str(),ios::binary|ios::trunc);
		if (!archivo.is_open()) return false;
		int cantidad_animales = CantidadAnimales();
		for (int i=0;i<cantidad_animales;i++)
			arreglo[i].GuardarAnimal(archivo);
		archivo.close();
		guardado=true;
	}
	case GuardarEventos: {
		ofstream archivo2(Ruta_Archivo_Eventos.c_str(),ios::binary|ios::trunc);
		if (!archivo2.is_open()) return false;
		int cantidad_eventos = CantidadEventos();
		for (int i=0;i<cantidad_eventos;i++)
			arreglo2[i].GuardarEvento(archivo2);
		archivo2.close();
		guardado=true;
	}
	case GuardarGeneral: {
		ofstream archivo3(Ruta_Archivo_General.c_str(),ios::binary|ios::trunc);
		if (!archivo3.is_open()) return false;
		int cantidad_datos = CantidadGeneral();
		for (int i=0;i<cantidad_datos;i++)
			arreglo3[i].GuardarGeneral(archivo3);
		archivo3.close();
		guardado=true;
	}
	}
	return guardado;
}



bool Campo::GuardarProfesional(){
	/*
	ofstream archivo3(Ruta_Archivo_General.c_str(),ios::binary|ios::trunc);
	if (!archivo3.is_open()) return false;
	int cantidad_datos = CantidadGeneral();
	for (int i=0;i<cantidad_datos;i++)
		arreglo3[i].GuardarGeneral(archivo3);
	archivo3.close();
	*/
}
// -- Retorna la cantidad de registros que hay en el vector
int Campo::CantidadAnimales() {
	return arreglo.size();
}
int Campo::CantidadEventos() {
	return arreglo2.size();
}
int Campo::CantidadGeneral() {
	return arreglo3.size();
}
// --Sobrecarga del operador []
Animal &Campo::operator[](int i) {
	return arreglo[i];
}
// --Sobrecarga del operador ()
Eventos &Campo::operator()(int i) {
	return arreglo2[i];
}
// --Sobrecarga del operador *
DatosGenerales &Campo::operator* (int i) {
	return arreglo3[i];
}
// --Sobrecarga del operador ^
Fecha_Ctrl &Campo::operator^(int i) {
	return arreglo_f[i];
 }

// -- Agrega un animal al final del vector
void Campo::AgregarAnimal(const Animal &a) {
	arreglo.push_back(a);
}
// -- Agrega un evento al final del vector
void Campo::AgregarEvento(const Eventos &e) {
	arreglo2.push_back(e);
}
// -- Agrega un dato al final del vector
void Campo::AgregarDatos(const DatosGenerales &d) {
	arreglo3.push_back(d);
}
// -- Eleminar un animal recibiendo el numero del mismo
void Campo::EleminarAnimal(int i) {
	arreglo.erase(arreglo.begin()+i);
}
// -- Eleminar un evento recibiendo el numero del mismo
void Campo::EleminarEvento(int i) {
	arreglo2.erase(arreglo2.begin()+i);
}
// -- Eleminar dato general recibiendo el numero del mismo
void Campo::EleminarDato(int i) {
	arreglo3.erase(arreglo3.begin()+i);
}
// -- compruebo booleanos
string Campo::Comprobar(bool v) {
	if (v) 
		return "SI";
	else
		return "NO";
}

string Campo::ComprobarSexo(bool v) {
	if (v) 
		return "MACHO";
	else
		return "HEMBRA";
}
//
// --Buscar
//
int Campo::BuscarRP (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Animal &a = arreglo[i];
	string rp = a.Ver_RP();
	PasarMinusculas(rp);
	if (rp.find(parte,0)!=string::npos)
		return i;
}
return -1;
}

string Campo::BuscarAbuelo (string parte, int desde){
	PasarMinusculas(parte);
	int cant = CantidadAnimales();
	string abue="";
	for (int i=desde;i<cant;i++) {
		Animal &a = arreglo[i];
		string rp = a.Ver_RP();
		//string abue="";
		PasarMinusculas(rp);
		if (rp.find(parte,0)!=string::npos)
			return abue=a.Ver_RP_Padre();
	}
	return abue;
}



int Campo::BuscarNombre (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Animal &a = arreglo[i];
	string nombre = a.Ver_Nombre();
	PasarMinusculas(nombre);
	if (nombre.find(parte,0)!=string::npos)
		return i;
}
return -1;
}
int Campo::BuscarProcedencia (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Animal &a = arreglo[i];
	string procedencia = a.Ver_Procedencia();
	PasarMinusculas(procedencia);
	if (procedencia.find(parte,0)!=string::npos)
		return i;
}
return -1;
}
int Campo::BuscarRaza (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Animal &a = arreglo[i];
	string raza = a.Ver_Raza();
	PasarMinusculas(raza);
	if (raza.find(parte,0)!=string::npos)
		return i;
}
return -1;
}
int Campo::BuscarCategoria (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Animal &a = arreglo[i];
	string categoria = a.Ver_Categoria();
	PasarMinusculas(categoria);
	if (categoria.find(parte,0)!=string::npos)
		return i;
}
return -1;
}
int Campo::BuscarRP_Evento (string parte, int desde){
PasarMinusculas(parte);
//int cant = CantidadAnimales();
int cant = CantidadEventos();
for (int i=desde;i<cant;i++) {
	Eventos &e = arreglo2[i];
	string rp_evento = e.Ver_RP_Evento();
	PasarMinusculas(rp_evento);
	if (rp_evento.find(parte,0)!=string::npos)
		return i;
}
return -1;
}

int Campo::BuscarProduccion (string parte, int desde){
PasarMinusculas(parte);
//int cant = CantidadAnimales();
int cant = CantidadEventos();
for (int i=desde;i<cant;i++) {
	Eventos &e = arreglo2[i];
	string produccion = e.Ver_RP_Evento();
	PasarMinusculas(produccion);
	if (produccion.find(parte,0)!=string::npos)
		return i;
}
return -1;
}

int Campo::BuscarEvento (string parte, int desde){
	PasarMinusculas(parte);
	int cant = CantidadEventos();
	for (int i=desde;i<cant;i++) {
		Eventos &e = arreglo2[i];
		string evento = e.Ver_EVEN();
		PasarMinusculas(evento);
		if (evento.find(parte,0)!=string::npos)
			return i;
	}
	return -1; 
}

int Campo::BuscarResponsable (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadAnimales();
for (int i=desde;i<cant;i++) {
	Eventos &e = arreglo2[i];
	string responsable = e.Ver_Responsable();
	PasarMinusculas(responsable);
	if (responsable.find(parte,0)!=string::npos)
		return i;
}
return -1;
}

int Campo::BuscarApellido (string parte, int desde){
PasarMinusculas(parte);
int cant = CantidadGeneral();
for (int i=desde;i<cant;i++) {
	DatosGenerales &d = arreglo3[i];
	string apellido = d.Ver_Apellido();
	PasarMinusculas(apellido);
	if (apellido.find(parte,0)!=string::npos)
		return i;
}
return -1;
}

int Campo::BuscarNombrep(string parte, int desde){
	PasarMinusculas(parte);
	int cant = CantidadGeneral();
	for (int i=desde;i<cant;i++) {
		DatosGenerales &d = arreglo3[i];
		string nombre = d.Ver_Nombre();
		PasarMinusculas(nombre);
		if (nombre.find(parte,0)!=string::npos)
			return i;
	}
	return -1;
}


// -- Ordena segun criterios
void Campo::Ordenar (CriterioOrden criterio) {
	switch (criterio) {
	case ORDEN_RP: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_rp); 
		break;
	case ORDEN_NOMBRE: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_nombre); 
		break;
	case ORDEN_FECNAC: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_fecnac); 
		break;
	case ORDEN_RAZA: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_raza); 
		break;
	case ORDEN_CAT: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_cat); 
		break;
	case ORDEN_SEC: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_sec); 
		break;
	case ORDEN_RC: 
		sort(arreglo.begin(),arreglo.end(),criterio_comparacion_rc); 
		break;
	/*case ORDEN_HBA: 
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_peso); 
		break;*/
	case ORDEN_PRODUC:
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_peso);
		break;
	case ORDEN_RP_EVEN:
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_rpeven);
		break;
	case ORDEN_RESP:
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_resp);
		break;
		
	case ORDEN_EVE:
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_evento);
		break;
	case ORDEN_F_EVE:
		sort(arreglo2.begin(),arreglo2.end(),criterio_comparacion_f_evento);
		break;
		
		
	};
}
//
// -- Exportar a Texto plano
bool Campo::Exportar (string ruta, CriterioExportar criterio, string final) {
	ofstream archivo (ruta.c_str(),ios::trunc);
	switch (criterio) {
		
	case Export_Animal:
		
		
		
		archivo <<left << setfill (' ') << setw(20) << "Caravana" << setw(20) << "Nombre" << setw(20) << "Raza" << setw(20) << "Categoria" << setw(20) << "Seccion" << setw(20) << "ID INTERNO" << setw(20) << "Procedencia" << setw(20) << "Sexo" << setw(20)<<"Edad en meses"<<setw(20)<< "Caravana de la Madre"  << setw(20) << "Caravana del Padre" << setw(20) <<"Caravana de Abuelo"<< setw(20) << "Preniada" << setw(10) << "Fecha de Nacimiento" << setw(10) << "Muerto" << setw(10) << "Vendido" << endl;
		archivo << "_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
		for (int i=0; i<CantidadAnimales();i++) {
			Animal a = arreglo[i];
			int diah,mesh,anioh;
			time_t actual = time(NULL);
			struct tm fechaHoy = *(localtime(&actual));
			diah= fechaHoy.tm_mday;
			mesh= fechaHoy.tm_mon+1;
			anioh=fechaHoy.tm_year+1900;
			int f1= anioh*10000+mesh*100+diah;
			int f2= a.Ver_Anio_Nac()*10000+a.Ver_Mes_Nac()*100+a.Ver_Dia_Nac();
			int Edad= (f1 - f2)/10000*12;
			string abuelo;
			abuelo=(mi_campo->BuscarAbuelo(a.Ver_RP_Padre(),0));
			
			archivo << setw(20)<<  setfill(' ') << a.Ver_RP() << setw(20) << a.Ver_Nombre() << setw(20) << a.Ver_Raza();
			archivo << setw(20) << a.Ver_Categoria() << setw(20) << a.Ver_Seccion() << setw(20)<<a.Ver_RC() ;
			archivo << setw(20) << a.Ver_Procedencia() << setw(20)<<ComprobarSexo(a.Ver_Sexo())<< setw(20)<<Edad;
			archivo << setw(20) << a.Ver_RP_Madre() << setw(20) << a.Ver_RP_Padre()<< setw(20) <<abuelo << setw(10) << Comprobar (a.Ver_Preniada());
			archivo << "" << setw(2) << setfill(' ')<< a.Ver_Dia_Nac() << "/" << setw(2)<< a.Ver_Mes_Nac() << "/" << setfill(' ') << setw(2) << a.Ver_Anio_Nac();
			archivo << setw(10)<< Comprobar (a.Ver_Muerto()) << setw(10) << Comprobar (a.Ver_Vendido());
			archivo << endl;
		}
		archivo << "\n\n*** Se exporto los registros de ANIMALES con todos sus atributos...\n\n";
		archivo << "********************************************************************************************************************************************************************************************************************************************************************************************************************\n\n";
		archivo << final;
		
		archivo.close();
		return true;
		break;
		//
		
	case Export_Eventos:
		archivo << "RP del evento  " <<"	" << "Peso" <<"	"<< "Fecha del Evento" <<"	"<< "Responsable" <<"	"<<  "Observacones" << endl;
		archivo << "___________________________________________________________________________________________________________________\n";
		for (int i=0; i<CantidadEventos();i++) {
			Eventos e = arreglo2[i];
			archivo << setfill (' ') << e.Ver_RP_Evento() <<"	"<< e.Ver_Peso() <<"	"<< e.Ver_Dia_Eve() << "/" << e.Ver_Mes_Eve() << "/" << e.Ver_Anio_Eve();
			archivo << setfill (' ') <<"	" <<e.Ver_EVEN()<<"	" <<e.Ver_Vacuna()<<"	" <<e.Ver_Responsable()<<"	"<< setw(25) << e.Ver_Observaciones();
			archivo << endl;
		}
		archivo << "\n\n*** Se exporto los registros de EVENTOS con todos sus atributos...\n\n";
		archivo << "*******************************************************************************************************************\n\n";
		archivo << final;
		archivo.close();
		return true;
		break;
		
	case Export_Datos:
		archivo << "Apellido" <<"	"<< "Nombre" <<"	" << "Titulo" <<"	" << "Especialidad" <<"	" <<  "C.U.I.T";
		archivo <<"	"<< "Direccion" <<"	"<< "Telefono" <<"	"<< "Localidad" <<"	" << "Usuario" << endl;
		archivo << "_____________________________________________________________________________________________________________________________\n";
		for (int i=0; i<CantidadGeneral();i++) {
			DatosGenerales d = arreglo3[i];
			archivo << setfill (' ') << d.Ver_Apellido()<< setw(10)<<"	" << d.Ver_Nombre()<< setw(10) <<"	" << d.Ver_Titulo()<< setw(10) <<"	" << d.Ver_Especialidad();
			archivo << setfill (' ') <<"	" << d.Ver_CUIT()<< setw(5) <<"	" << d.Ver_Direccion()<< setw(15) <<"	"<< d.Ver_Telefono();
			archivo << setfill (' ') <<"	"<< d.Ver_Empresa()<< setw(5) <<"	" << Comprobar(d.Ver_Usuario());
			archivo << endl;
		}
		archivo << "\n\n*** Se exporto los registros de PROFESIONALES con todos sus atributos...\n\n";
		archivo << "*******************************************************************************************************************\n\n";
		archivo << final;
		archivo.close();
		break;
	}
	return true;
}
//
//
// 	Para obtener totales ( )
//
void Campo::CargarF_Ctrl () {
	mi_campo->Ordenar(ORDEN_F_EVE);	// Ordeno el arreglo de eventos por fechas, de menos a mayor
	int cant = CantidadEventos(); // cantidad de eventos
	if (cant!=0) { // si la cantidad es distinta de cero
		for (int i=0; i<cant; i++) {
			Eventos &evento = arreglo2[i]; // lo inicializo para la asignacion
			if (evento.Ver_EVEN() == "CONTROL LECHERO") {
				Fecha_Ctrl fecha ( evento.Ver_Dia_Eve(), evento.Ver_Mes_Eve(), evento.Ver_Anio_Eve() );
				arreglo_f.push_back(fecha);
			}
		}
	}
	if (arreglo_f.size()>=2) {
//	for (int k=0; k<arreglo_f.size(); k++) {
//		Fecha_Ctrl eve_aux = arreglo_f[k];
//		vector <Fecha_Ctrl>::iterator j;
//		for (j=arreglo_f.begin()+1; j<arreglo_f.end(); j++) {
//			if (eve_aux == arreglo_f(j)) {
//				arreglo_f.erase(j);
//			}
//		}
//	}
}
}
// cantida del evento en determina fecha
int Campo::CantidadDelEvento (int dia, int mes, int anio, string evento) {
	int contador=0;	
	for (int i=0; i<CantidadEventos(); i++) {
		Eventos aux=arreglo2[i];
		if ( ((aux.Ver_Dia_Eve()==dia) && (aux.Ver_Mes_Eve()==mes) && (aux.Ver_Anio_Eve()==anio) && (aux.Ver_EVEN()==evento)) ) {
			contador ++;
		}
	}
	return contador;
}

int Campo::CantidadDelEvento (string evento) {
	int contador=0;	
	for (int i=0; i<CantidadEventos(); i++) {
		Eventos aux=arreglo2[i];
		if (aux.Ver_EVEN()==evento) {
			contador ++;
		}
	}
	return contador;
}

//int Campo::ProduccionTDia (int dia, int mes, int anio) {
//	int cantidad=0;
//	for (int i=0; i<CantidadEventos(); i++) {
//		Eventos aux=arreglo2[i];
//		if ( ((aux.Ver_Dia_Eve()==dia) && (aux.Ver_Mes_Eve()==mes) && (aux.Ver_Anio_Eve()==anio) && (aux.Ver_EVEN()=="PRODUCCION")) ) {
//			cantidad += aux.Ver_Produccion();
//		}
//	}
//	return cantidad;
//}


// Cantidad de grasa butirosa de todos los animales de esa fecha que se le practicaron el control lechero
//int Campo::GrasaBTotal (int dia, int mes, int anio) {
//	int cantidad=0;
//	for (int i=0; i<CantidadEventos(); i++) {
//		Eventos aux=arreglo2[i];
//		if ( ((aux.Ver_Dia_Eve()==dia) && (aux.Ver_Mes_Eve()==mes) && (aux.Ver_Anio_Eve()==anio) && (aux.Ver_EVEN()=="CONTROL LECHERO")) ) {
//			cantidad += aux.Ver_Grasa_Butirosa();
//		}
//	}
//	return cantidad;
//	
//}
//int Campo::ProteinaTotal (int dia, int mes, int anio) {
//	int cantidad=0;
//	for (int i=0; i<CantidadEventos(); i++) {
//		Eventos aux=arreglo2[i];
//		if ( ((aux.Ver_Dia_Eve()==dia) && (aux.Ver_Mes_Eve()==mes) && (aux.Ver_Anio_Eve()==anio) && (aux.Ver_EVEN()=="CONTROL LECHERO")) ) {
//			cantidad += aux.Ver_Proteinas();
//		}
//	}
//	return cantidad;
//	
//}

//1
//2	1	-	-	-
//3	2	-	0		-
//4	1	-	x	-	0
//5	1	-	x	-	0
//6	3	-	0		0
//7	3	-	0		0
//
//int Campo::CantAniLactancia (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	return cont_ani;
//}
////
//float Campo::CantPromLactM (int n_lac, int dia, int mes, int anio) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int edad=0;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			int an1= (anio*12)+mes;
//			int an2= (a.Ver_Anio_Nac()*12)+a.Ver_Mes_Nac();
//			int ani=0;
//			if (an1>an2) {
//				ani=an1-an2;
//				if (mes>a.Ver_Mes_Nac()) {
//					ani=ani-1;
//				}
//			}			
//			edad=ani;
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	if (cont_ani!=0)
//	return ((float)edad/(float)cont_ani);
//	else
//		return 0.0;
//}
////
//float Campo::CantPromLactD (int n_lac,int dia, int mes, int anio) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int edad=0;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			int an1= (anio*365)+(mes*30)+dia;
//			int an2= ((a.Ver_Anio_Nac()*365)+(a.Ver_Mes_Nac()*30)+(a.Ver_Dia_Nac()));
//			int ani=0;
//			if (an1>an2) {
//				ani=an1-an2;
//			}			
//			edad=ani;
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	// valido para que la division no sea por cero
//	if (cont_ani!=0)
//		return ((float)edad/(float)cont_ani);
//	else
//		return 0.0;
// }
//
//float Campo::CantPromLechLac (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int leche=0.0;
//	string rp;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//				rp=e.Ver_RP_Evento();
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			for (int g=0; g<CantidadEventos(); g++){
//				Eventos &e=arreglo2[g];
//				if (a.Ver_RP() == e.Ver_RP_Evento()) {
//					leche+=e.Ver_Produccion();
//				}
//			}
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	if (cont_ani!=0)
//		return ((float)leche/(float)cont_ani);
//	else
//		return 0.0;
//}
//float Campo::CantPromGBLac (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int gb=0.0;
//	string rp;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//				rp=e.Ver_RP_Evento();
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			for (int g=0; g<CantidadEventos(); g++){
//				Eventos &e=arreglo2[g];
//				if (a.Ver_RP() == e.Ver_RP_Evento()) {
//					gb+=e.Ver_Grasa_Butirosa();
//				}
//			}
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	if (cont_ani!=0)
//		return ((float)gb/(float)cont_ani);
//	else
//		return 0.0;
//}

//float Campo::CantPromPLac (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int pr=0.0;
//	string rp;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//				rp=e.Ver_RP_Evento();
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			for (int g=0; g<CantidadEventos(); g++){
//				Eventos &e=arreglo2[g];
//				if (a.Ver_RP() == e.Ver_RP_Evento()) {
//					pr+=e.Ver_Proteinas();
//				}
//			}
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	if (cont_ani!=0)
//		return ((float)pr/(float)cont_ani);
//	else
//		return 0.0;
//}
// cantidad de animales que se encuentran en produccion


/*
int Campo::AnimalesProduccion (int n_lac) {
	int cont_lact=0;
	int cont_ani=0;
	string rp;
	for (int h=0; h<CantidadAnimales(); h++) {
		// me manejo dentro el arreglo de animales con los rp
		Animal &a=arreglo[h];
		for (int j=0; j<CantidadEventos(); j++) {
			// me manejo en el arreglo de eventos con los rp y evento "parto"
			Eventos &e = arreglo2[j];
			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PRODUCCION")) {
				cont_lact++; // contador de lactancias para un solo animal
				rp=e.Ver_RP_Evento();
			}
		}
		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
		if (cont_lact == n_lac) {
			cont_ani++;
		}
		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
		cont_lact=0;
	}
	return cont_ani;
	
//	mi_campo->Ordenar(ORDEN_F_EVE);
//	mi_campo->Ordenar(ORDEN_RP_EVEN);
//	bool bandera=false;
//	int cont=0;
//	for (int i=0; i<CantidadAnimales(); i++) {
//		Animal &a=arreglo[i];
//		for (int j=0; j<CantidadEventos(); j++) {
//			Eventos &e= arreglo2[j];
//			if ((a.Ver_RP()==e.Ver_RP_Evento()) && (e.Ver_EVEN()=="PRODUCCION")){
//				bandera=true;
//			}
//		}
//		if (bandera)
//			cont++;
//	}
//	return cont;
}*/


/*
float Campo::CantTotLechLac (int n_lac) {
	int cont_lact=0;
	int cont_ani=0;
	int leche=0.0;
	string rp;
	for (int h=0; h<CantidadAnimales(); h++) {
		// me manejo dentro el arreglo de animales con los rp
		Animal &a=arreglo[h];
		for (int j=0; j<CantidadEventos(); j++) {
			// me manejo en el arreglo de eventos con los rp y evento "parto"
			Eventos &e = arreglo2[j];
			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
				cont_lact++; // contador de lactancias para un solo animal
				rp=e.Ver_RP_Evento();
			}
		}
		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
		if (cont_lact == n_lac) {
			cont_ani++;
			for (int g=0; g<CantidadEventos(); g++){
				Eventos &e=arreglo2[g];
				if (a.Ver_RP() == e.Ver_RP_Evento()) {
					leche+=e.Ver_Produccion();
				}
			}
		}
		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
		cont_lact=0;
	}
	return leche;
}
*/

//float Campo::CantTotGBLac (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	int gb=0.0;
//	string rp;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//				rp=e.Ver_RP_Evento();
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			for (int g=0; g<CantidadEventos(); g++){
//				Eventos &e=arreglo2[g];
//				if (a.Ver_RP() == e.Ver_RP_Evento()) {
//					gb+=e.Ver_Grasa_Butirosa();
//				}
//			}
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//return gb;
//}
//float Campo::CantTotPLac (int n_lac){
//	int cont_lact=0;
//	int cont_ani=0;
//	int pr=0.0;
//	string rp;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "PARTO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//				rp=e.Ver_RP_Evento();
//			}
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//			for (int g=0; g<CantidadEventos(); g++){
//				Eventos &e=arreglo2[g];
//				if (a.Ver_RP() == e.Ver_RP_Evento()) {
//					pr+=e.Ver_Proteinas();
//				}
//			}
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	return pr;
//	
//}
// Cantidad vacas secas... con 1 secado 1 animal, 2 animales; con 2 secado 1 ani, 2 anil, etc

//int Campo::CantAniSec (int n_lac) {
//	int cont_lact=0;
//	int cont_ani=0;
//	for (int h=0; h<CantidadAnimales(); h++) {
//		// me manejo dentro el arreglo de animales con los rp
//		Animal &a=arreglo[h];
//		for (int j=0; j<CantidadEventos(); j++) {
//			// me manejo en el arreglo de eventos con los rp y evento "parto"
//			Eventos &e = arreglo2[j];
//			if ((a.Ver_RP() == e.Ver_RP_Evento()) && (e.Ver_EVEN() == "SECADO")) {
//				cont_lact++; // contador de lactancias para un solo animal
//			}
//			
//		}
//		// antes de salir del for me fijo si las lactancias del animal es igual a las lactactancias que quiero saber
//		if (cont_lact == n_lac) {
//			cont_ani++;
//		}
//		// importante, vuelvo a cero el contador de lactancias porque no sale del primer for
//		cont_lact=0;
//	}
//	return cont_ani;
//}

//
/**   **/
Campo *mi_campo;
/**  **/

