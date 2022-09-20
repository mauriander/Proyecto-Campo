#ifndef EVENTOS_H
#define EVENTOS_H
#include "Funciones.h"
#include <string>
#include <fstream>
#include <cstring>

using namespace std;
//Fecha -  ordeñe (1,2,3)- RP - Litros de leche - GB (Kg grasa Butirosa) - Pr (kg proteinas)- So(kg Solidos) - Re (Recuento celular) .-
/**
* @struct registros_eventos
* @brief Para el almacenamiento de eventos.
*
* La estructura sirve para almacenar en disco los eventos del animal.-
**/
struct registros_eventos {
	// son iguales que los de private pero en minusculas..
	
	char vacu[40];
	int peso;
	char rp_evento[16];
	int dia_eve;
	int mes_eve;
	int anio_eve;
	char even[20];	
	char observaciones[1000];
	char responsable[25];
	int meses;
	
	
	//int gb, pr,so,rc;
	

};
//Fecha -  ordeñe (1,2,3)- RP - Litros de leche - GB (Kg grasa Butirosa) - Pr (kg proteinas)- So(kg Solidos) - Re (Recuento celular) .-
/*
struct Ctrl_Lech {
	int Grasa_Butirosa;
	int Proteinas;
	int Solidos;
	int Recuento_Cel;
};
*/

/**
* @class Eventos
* @brief Incluye atributos y metodos para el tratamiento de los eventos del animal.
*
* La clase contiene atributos y metodos que serán necesarios para almacenar
* los eventos del animal, y luego ser procesados para su futuro uso.-
**/
class Eventos {
private:
	// los eventos de almacenan como bool (se se realizo o no) los comentarios y observaciones
	// va en "Observaciones"
	
	
	int Peso;		///< Peso del animal
	int Meses;	///< numero en que se hara el proxuimo control... 1,2,3 ordeñe
	string RP_Evento;	///< RP del animal que se realizo el evento
	//! Fecha en que se practico el evento
	int Dia_Eve;		
	int Mes_Eve;
	int Anio_Eve;
	
	string EVEN;
	string Vacuna;
	
	//! Observaciones, todos los comentarios y caracteristicas del evento
	string Observaciones;
	
	string Responsable;	///< Profesional que practico el evento
	
	
	
	//Ctrl_Lech controll;
	
	
	
public:
	//! Constructor por defecto que crear un objeto "vacio" para su posterior utilización.
	Eventos ( int pes=0, int mes=0, string rp_eve="",	int d_eve=0, int m_eve=0, int a_eve=0, string eve="", string obse="", string resp=""
	, string vac="");

	/** @brief Modifica el numero de ordeñe @param n_n_ord un nuevo numero de ordeñe **/
	void ModificarMeses (int n_n_ord);
	/** @brief Modifica el valor de produccion @param n_pro un nuevo valor para Produccion **/
	void ModificarPeso(int n_pro);
	
	
	/** @brief Modifica el RP del animal @param n_rp_eve un nuevo rp del evento **/
	void ModificarRP_Evento (string n_rp_eve);
	
	/** @brief Modifica dia del evento @param n_d_even nuevo dia evento **/
	void ModificarDia_Eve (int n_d_even);
	/** @brief Modifica mes del evento @param n_m_even nuevo mes evento **/
	void ModificarMes_Eve (int n_m_even);
	/** @brief Modifica año del evento @param n_a_even nuevo año evento **/
	void ModificarAnio_Eve (int n_a_even);
	
	
	/** @brief Modifica las observaciones @param n_obs nueva descripcion del hecho **/
	void ModificarObservaciones (string n_obs);
	/** @brief Modifica el responsable @param n_resp modifica el responsable a cargo **/
	void ModificarResponsable (string n_resp);
	
	void ModificarVacuna(string n_vacu);
	
	/** @brief Obtener la produccion **/	
	int Ver_Peso() const;	
	
	/** @brief Obtener el numero de ordeñe **/
	int Ver_Meses() const;
	
	/** @brief Obtener el rp del animal a quien se le practico el evento) **/	
	string Ver_RP_Evento() const;
	
	/** @brief Obtener el dia del evento **/	
	int Ver_Dia_Eve() const;
	/** @brief Obtener el mes del evento **/	
	int Ver_Mes_Eve() const;
	/** @brief Obtener año del evento **/	
	int Ver_Anio_Eve() const;
	
	string Ver_EVEN () const;
	/** @brief Obtener Observaciones **/	
	string Ver_Observaciones() const;
	/** @brief Obtener Responsable **/	
	string Ver_Responsable() const;
	
	string Ver_Vacuna() const;
	
	
	/*int Ver_Grasa_Butirosa() const; 
	int Ver_Proteinas() const; 
	int Ver_Solidos() const; 
	int Ver_Recuento_Cel() const; 
	*/
	
	/**
	* @brief Funcion Guardar en Binario
	*
	* Funcion que guarda en registro completo de eventos de un animal
	* en un archivo binario.-
	* @param &archivo Objeto ofstream donde se guardarán los datos
	**/
	void GuardarEvento (ofstream &archivo);
	/**
	* @brief Funcion Leer desde Binario
	*
	* Funcion que lee un registro completo de eventos de un animal
	* desde un archivo binario.-
	* @param &archivo Objeto ifstream de donde se obtendrán los datos
	**/
	void LeerEvento (ifstream &archivo);
	
	/**
	* @brief Funcion que Verifica los datos
	*
	* Función que verifica si los datos introducidos son correctos, en caso afirmativo
	* devuelve un string vacio, de lo contrario devuelve un string con la suma de dichos
	* Errores para su posterior corrección.-
	* @retval **Error** Devuelve un string, que es la suma de errores
	* @retval "" Devuelve un string vacio en el caso de no haber errores
	**/
	string Validar ();
};
bool criterio_comparacion_peso (const Eventos &e1, const Eventos &e2);		///< Funcion para saber en que orden va la produccion
bool criterio_comparacion_rpeven (const Eventos &e1, const Eventos &e2);	///< Funcion para saber en que orden el rp del animal del evento
bool criterio_comparacion_resp (const Eventos &e1, const Eventos &e2);		///< Funcion para saber en que orden el responsable
bool criterio_comparacion_evento (const Eventos &e1, const Eventos &e2);	///< Funcion para saber en que orden va el evento
bool criterio_comparacion_f_evento (const Eventos &e1, const Eventos &e2);	///< Funcion para saber en que orden va la fecha del evento
#endif

