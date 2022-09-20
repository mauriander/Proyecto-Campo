#ifndef ANIMAL_H
#define ANIMAL_H
#include "Funciones.h"
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

/**
* @struct registros_animales
* @brief Para el almacenamiento de datos.
*
* La estructura sirve para almacenar en disco los datos del animal.-
**/
struct registros_animales {
	// debe guardarse los objetos string como char[xx], ya que el string contine un puntero
	// y lo que se guarda es el puntero y no el contenido
	// Los datos se guardo segun su estimacion de logitud
	char rp[16];// Numero de registro particular del animal, 15 caracteres
	char nomb[25];	
	int dianac;	
	int mesnac;	
	int anionac;	
	char raza[25]; 			
	char cat[25];
	char sec[25];
	char rc[16];
	//char hba[16];
	char proc[25];
	bool pren;
	//char rcm[16];
	//char hbam[16];
	char rpm[16];
	//char hbap[16];
	char rpp[16];
	
	bool Muer;	// Si el animal murio
	bool Vend;	// Si el animal fue vendido
	bool Sex;
};
/**
* @class Animal
* @brief Incluye atributos y metodos para la identificación del animal.
*
* La clase contiene atributos y metodos que serán necesarios para almacenar
* los datos del animal, y luego ser procesados para su futuro uso.-
**/
class Animal {
private:
	string RP;			///< Código de identificación animal
	string Nombre;		///< Nombre o apodo del animal
	int Dia_Nac;		///< Dia en que nacio
	int Mes_Nac;		///< Mes en que nacio
	int Anio_Nac;		///< Anio en que nacio
	string Raza;		///< Raza a la que pertenece
	string Categoria;	///< Categoria
	string Seccion;		///< Sección
	string RC;			///< Código RC			
	//string HBA;			///< Código de 15 digitos HBA			
	string Procedencia;	///< Procedencia o origen
	bool Preniada;		///< Estado preñada (si/no)		
	//string RC_Madre;	///< Código RC de la madre	
	//string HBA_Madre;	///< Código HBA de la madre	
	string RP_Madre;	///< Código RP de la madre	
	//string HBA_Padre;	///< Código HBA del padre
	string RP_Padre;	///< Codigo RP del padre
	int edad;
	bool Muerto;		///< Si el animal murio (si/no)
	bool Vendido;		///< Si el animal ha sido vendido (si/no)
	bool Sexo;
	
public:
	//! Constructor por defecto que crear un objeto "vacio" para su posterior utilización.
	Animal ( string rp="", string nomb="", int dnac=0, int mnac=0, int anac=0, string raza="", string cat="",
			string sec="", string rc="", string proc="", bool pren=false,  string rpm="", string rpp="", bool muerto=false, bool vendido=false, bool sexo=false
	);
	void calcular_edad() const;
	
	/** @brief Modifica el codigo RP @param n_rp un nuevo valor para el RP **/
	void ModificarRP (string n_rp);
	/** @brief Modifica el nombre del animal. @param n_nomb un nuevo nombre o apodo para el animal **/
	void ModificarNombre (string n_nomb);
	/** @brief Modifica el Dia de Nacimiento @param n_dianac un nuevo valor para el dia de nacimento **/
	void ModificarDiaNac (int n_dianac);
	/** @brief Modifica el Mes de Nacimiento @param n_mesnac un nuevo valor para el mes de nacimento **/
	void ModificarMesNac (int n_mesnac);
	/** @brief Modifica el Año de Nacimiento @param n_anionac un nuevo valor para el año de nacimento **/
	void ModificarAnioNac (int n_anionac);
	/** @brief Modifica la raza @param n_raza un nuevo valor a raza **/
	void ModificarRaza (string n_raza);
	/** @brief Modifica la Categoria @param n_cat un nuevo valor para Categoria **/
	void ModificarCategoria (string n_cat);
	/** @brief Modifica la Sección a la que pertenece @param n_sec un nuevo valor para Sección **/
	void ModificarSeccion (string n_sec);
	/** @brief Modifica el codigo RC @param n_rc un nuevo valor para el RC **/
	void ModificarRC (string n_rc);
	/** @brief Modifica el codigo HBA @param n_hba un nuevo valor para el HBA **/
	
	//void ModificarHBA (string n_hba);
	/** @brief Modifica la Procedencia u origenes del animal @param n_pro nueva definicion de Procedencia **/
	void ModificarProcedencia (string n_pro);
	/** @brief Modifica el valor de Preñada @param n_pre un nuevo valor para el Preñada, (si/no) **/
	void ModificarPreniada (bool n_pre);
	/** @brief Modifica el codigo RC de la Madre @param n_rcm un nuevo valor para el RC de la madre **/
	
	
	//void ModificarRC_Madre (string n_rcm);
	/** @brief Modifica el codigo HBA de la Madre @param n_hbam un nuevo valor para el HBA de la Madre **/
	//void ModificarHBA_Madre (string n_hbam);
	/** @brief Modifica el codigo RP de la Madre @param n_rpm un nuevo valor para el RP de la Madre **/
	void ModificarRP_Madre (string n_rpm);
	/** @brief Modifica el codigo HBA del Padre @param n_hbap un nuevo valor para el HBA del Padre **/

	//void ModificarHBA_Padre (string n_hbap);
	/** @brief Modifica el codigo RP del Padre @param n_rpp un nuevo valor para el RP del Padre **/
	void ModificarRP_Padre (string n_rpp);
	
	
	
	/** @brief Modifica si el animal murio @param n_mu un nuevo valor si el animal murio **/
	void ModificarMuerto (bool n_mu);
	/** @brief Modifica si el animal se vendio @param n_ve un nuevo valor se vendio el animal **/
	void ModificarVendido (bool n_ve);
	/** @brief Modifica si el animal se vendio @param n_ve un nuevo valor se vendio el animal **/
	void ModificarSexo (bool n_se);
	
	/** @brief Obtener el código RP **/	
	string Ver_RP() const;	
	/** @brief Obtener  el Nombre o Apodo**/	
	string Ver_Nombre() const;	
	/** @brief Obtener el dia de Nacimiento **/	
	int Ver_Dia_Nac() const;	
	/** @brief Obtener el mes de Nacimiento **/	
	int Ver_Mes_Nac() const;	
	/** @brief Obtener el anio de Nacimiento **/	
	int Ver_Anio_Nac() const;	
	/** @brief Obtener la Raza **/	
	string Ver_Raza() const; 			
	/** @brief Obtener la Categoria **/	
	string Ver_Categoria() const;
	/** @brief Obtener La Seccion **/	
	string Ver_Seccion() const;
	/** @brief Obtener el código RC **/	
	string Ver_RC() const;
	/** @brief Obtener el código HBA **/	
	//string Ver_HBA() const;
	/** @brief Obtener la Procedencia o origen del animal **/	
	string Ver_Procedencia() const;
	/** @brief Saber si esta preñada (si/no) **/	
	bool Ver_Preniada() const;
	/** @brief Obtener el código RC de la Madre **/	
	//string Ver_RC_Madre() const;
	/** @brief Obtener el código HBA de la Madre **/	
	//string Ver_HBA_Madre() const;
	/** @brief Obtener el código RP de la Madre **/	
	string Ver_RP_Madre() const;
	/** @brief Obtener el código HBA del Padre **/	
	//string Ver_HBA_Padre() const;
	/** @brief Obtener el codigo RP del Padre **/	
	string Ver_RP_Padre() const;
	
	/** @brief Obtener verificacion si murio **/	
	bool Ver_Muerto() const;
	/** @brief Obtener verificacion si se vendio **/	
	bool Ver_Vendido() const;
	
	bool Ver_Sexo() const;
	
	int Ver_Edad() const;
	

	/**
	* @brief Funcion Guardar en Binario
	*
	* Funcion que guarda en registro completo de un animal con todos sus datos (generales)
	* en un archivo binario.-
	* @param &archivo Objeto ofstream donde se guardarán los datos
	**/
	void GuardarAnimal (ofstream &archivo);
	/**
	* @brief Funcion Leer desde Binario
	*
	* Funcion que lee un registro completo de un animal con todos sus datos (generales)
	* desde un archivo binario.-
	* @param &archivo Objeto ifstream de donde se obtendrán los datos
	**/
	void LeerAnimal (ifstream &archivo);
	
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

bool criterio_comparacion_rp (const Animal &a1, const Animal &a2);		///< Funcion para saber en que orden alfabeticamente va el rp
bool criterio_comparacion_nombre (const Animal &a1, const Animal &a2);	///< Funcion para saber en que orden alfabeticamente va el nombre
bool criterio_comparacion_raza (const Animal &a1, const Animal &a2);	///< Funcion para saber en que orden alfabeticamente va la raza
bool criterio_comparacion_cat (const Animal &a1, const Animal &a2);		///< Funcion para saber en que orden alfabeticamente va la categoria
bool criterio_comparacion_sec (const Animal &a1, const Animal &a2);		///< Funcion para saber en que orden alfabeticamente va la seccion
bool criterio_comparacion_rc (const Animal &a1, const Animal &a2);		///< Funcion para saber en que orden alfabeticamente va el rc
//bool criterio_comparacion_hba (const Animal &a1, const Animal &a2);		///< Funcion para saber en que orden alfabeticamente va el hba
bool criterio_comparacion_fecnac (const Animal &a1, const Animal &a2);	///< Funcion para saber en que orden alfabeticamente va la fecha nac
#endif
