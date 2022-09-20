#ifndef DATOSGENERALES_H
#define DATOSGENERALES_H
#include "Funciones.h"
#include <string>
#include <fstream>
#include <cstring>

using namespace std;


/**
* @struct general
* @brief Para el almacenamiento de los datos generales.
*
* La estructura sirve para almacenar en disco los datos generales, usuario, especialista, etc.-
**/
struct general {
	char nomb_p[50];
	char ape_p[50];
	char direc_p[50];
	char tel_p[50];
	char emp_p[50];
	char tit_p[50];
	char esp_p[50];
	char cuit_p[50];
	bool usuar;
	//char nom_tam[50];
};
/**
* @class DatosGenerales
* @brief Incluye atributos y metodos para la identificación de la empresa.
*
* La clase contiene atributos y metodos para almacenar y leer los datos del usuario
* empresa, veterinarios, etc.-
*
**/
class DatosGenerales {
private:
	
	string Nombre;		///< Nombre del Usuario o Especialista
	string Apellido;	///< Apellido del Usuario o Especialista
	string Direccion;	///< Direccion del Usuario o Especialista
	string Telefono;	///< Telefono del Usuario o Especialista
	string Empresa;		///< Empresa al que Especialista pertenece
	string Titulo;		///< Titulo de Profesional
	string Especialidad;///< Profesion
	string CUIT;		///< Cuit
	bool Usuario;		///< Si es el Usuario los datos (si/no)
	//string Nombre_Tambo;///< Nombre del Tambo
public:
	
	//! Constructor por defecto que crear un objeto "vacio" para su posterior utilización.
	DatosGenerales ( string nom="", string ape="", string dir="", string tel="", string emp="",
					string tit="", string esp="", string cuit="", bool user=false
	);
	
	// Para obtener los datos
	string Ver_Nombre () const;
	string Ver_Apellido () const;
	string Ver_Direccion () const;
	string Ver_Telefono () const;
	string Ver_Empresa () const;
	string Ver_Titulo () const;
	string Ver_Especialidad () const;
	string Ver_CUIT () const;
	bool Ver_Usuario () const;
	//string Ver_Nombre_Tambo () const;
	
	/** @brief Modifica el nombre @param n_nombre nuevo nombre **/
	void ModificarNombre (string n_nombre);
	/** @brief Modifica el apellido @param n_apellido nuevo apellido **/
	void ModificarApellido (string n_apellido);
	/** @brief Modifica la direccion @param n_direccion nueva direccion **/
	void ModificarDireccion (string n_direccion);
	/** @brief Modifica el numero de telefono @param n_telefono nuevo telefono **/
	void ModificarTelefono (string n_telefono);
	/** @brief Modifica la empresa @param n_empresa nueva empresa **/
	void ModificarEmpresa (string n_empresa);
	/** @brief Modifica el titulo @param n_titulo nuevo titulo **/
	void ModificarTitulo (string n_titulo);
	/** @brief Modifica la profesion @param n_especialidad nueva profesion **/
	void ModificarEspecialidad (string n_especialidad);
	/** @brief Modifica el cuit @param n_cuit nuevo cuit **/
	void ModificarCUIT (string n_cuit);
	/** @brief Modifica el campo Usuario @param n_usuario si es usuario o no **/
	void ModificarUsuario (bool n_usuario);
//	/** @brief Modifica el campo Nombre del tambo @param n_nom_tam nuevo nombre para el tambo **/
//	void ModificarNombre_Tambo (string n_nom_tam);
	
	/**
	* @brief Funcion Guardar en Binario
	*
	* Funcion que guarda los datos de usuarios y demas en binario.-
	* @param &archivo Objeto ofstream donde se guardarán los datos
	**/
	void GuardarGeneral (ofstream &archivo);
	//
	//
	/**
	* @brief Funcion Leer desde Binario
	*
	* Funcion que lee datos de usuarios y demas desde binario.-
	* @param &archivo Objeto ifstream de donde se obtendrán los datos
	**/
	void LeerGeneral (ifstream &archivo);
	//
	//
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

#endif

