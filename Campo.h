#ifndef Campo_H
#define Campo_H
#include "Animal.h"
#include "Eventos.h"
#include "DatosGenerales.h"
#include "Fecha_Ctrl.h"
#include <vector>
#include <algorithm>
#include <iomanip>


#include <string>
using namespace std;


// Para ordenar los campos, es mas prolijo si se utiliza un enum
/**
* @enum CriterioOrden
* @brief Enumeracion para hacer mas clara lo que se quiere ordenar
**/
enum CriterioOrden { ORDEN_RP, ORDEN_NOMBRE, ORDEN_FECNAC, ORDEN_RAZA, ORDEN_CAT, ORDEN_SEC, ORDEN_RC, ORDEN_HBA, 
						ORDEN_PRODUC, ORDEN_RP_EVEN, ORDEN_RESP, ORDEN_EVE, ORDEN_F_EVE };
/**
* @enum CriterioGuardado
* @brief Enumeracion para hacer mas clara lo que se quiere guardar
**/
enum CriterioGuardado { GuardarAnimal, GuardarEventos, GuardarGeneral };
/**
* @enum CriterioExportar
* @brief Enumeracion para hacer mas clara lo que se quiere exportar
**/
enum CriterioExportar { Export_Animal, Export_Eventos, Export_Datos };
/**
* @class Campo
* @brief Incluye atributos y metodos para la lectura y almacenamiento de registros.
*
* La clase contiene atributos y metodos que serán necesarios para almacenar
* los datos del animal, eventos, etc, además de leerlos desde disco.-
**/
class Campo {
private:
	
	string Ruta_Archivo_Animal;///< Guarda la ruta o directorio para el archivo binario dende se almacenara los datos bovinos y ovinos
	
	string Ruta_Archivo_Eventos;///< Guarda la ruta o directorio para el archivo binario dende se almacenara los eventos
	
	string Ruta_Archivo_General;///< Guarda la ruta o directorio para el archivo binario dende se almacenara los datos generales
	
	vector <Animal> arreglo;///< Vector de la stl donde almacenara temporalmente los datos para su visualizacion y manejo
	
	vector <Eventos> arreglo2;///< Vector donde se almacenara en memoria los eventos
	
	vector <DatosGenerales> arreglo3;///< Vector donde se almacenara en memoria los datos del programa
	
	vector <Fecha_Ctrl> arreglo_f; ///< Vector donde almaceno fechas de los controles lecheros
	
public:
	
	bool GuardarProfesional();
	
	Campo (string ruta_ani, string ruta_eve, string ruta_dat);///< Crea un objeto para la lectura y escritura de datos
	
	bool Guardar(CriterioGuardado criterio);///< Guarda los datos en el archivo en disco

	
	int CantidadAnimales();///< Devuelve la cantidad de registros que hay en el vector animales
	
	int CantidadEventos();///< Devuelve la cantidad de registros que hay en el vector eventos
	
	int CantidadGeneral();///< Devuelve la cantidad de registros que hay en el vector datos generales

	void Ordenar(CriterioOrden criterio);///< Ordena alfabeticamente según el criterio que se le pase
	
	void AgregarAnimal(const Animal &a);///< Agrega un nuevo animal
	
	void AgregarEvento(const Eventos &e);///< Agrega un nuevo evento
	
	void AgregarDatos(const DatosGenerales &d);///< Agrega un nuevo dato general
	
	Animal &operator[](int i);/** @brief Devuelve un registro para ver o modificar de Animal. **/
	
	Eventos &operator()(int i);/** @brief Devuelve un registro para ver o modificar de Eventos. **/
	
	DatosGenerales &operator* (int i); /** @brief Devuelve un registro para ver o modificar de DatosGenerales. **/
	
	void EleminarAnimal(int i);/** @brief Quita el registro de un animal. **/
	
	void EleminarEvento(int i);/** @brief Quita el registro de un evento **/
	
	void EleminarDato(int i);/** @brief Quita un registro **/
	
	int BuscarRP(string parte, int desde);/** @brief Busqueda **/
	
	string BuscarAbuelo (string parte, int desde);

	int BuscarProcedencia(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarNombre(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarRaza(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarCategoria(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarRP_Evento(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarProduccion(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarEvento(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarResponsable(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarApellido(string parte, int desde);/** @brief Busqueda **/
	
	int BuscarNombrep(string parte, int desde);
	
	bool Exportar (string ruta, CriterioExportar criterio, string final); /** @brief Exporta un arreglo de datos a otro formato **/
	
	string Comprobar (bool v); /**@brief Verifico si el parametro es verdadero o falso y retorno Si o No **/
	
	string ComprobarSexo (bool v);
	
	Fecha_Ctrl &operator^(int i); /** @brief Devuelve un registro para ver o modificar de Fechas de Control Lechero. **/
	
	void CargarF_Ctrl (); /** @brief Carga el vector de la stl con las fechas del control lechero **/
	Fecha_Ctrl Ver_Fecha_Ctrl (int numero);
	int CantidadDelEvento (string evento);/** @brief Obtengo La cantidad de eventos del Campo **/
	int CantidadDelEvento (int dia, int mes, int anio, string evento);/** @brief Obtengo La cantidad de eventos de determinada fecha **/
//	int ProduccionTDia (int dia, int mes, int anio); /** @brief Obtengo La cantidad de leche producida en ese dia de los animales en produccion **/
//	int GrasaBTotal (int dia, int mes, int anio); /** @brief Obtengo la cantidad de Grasa Butirosa que se recopila de todos los animales del Campo **/
	//int ProteinaTotal (int dia, int mes, int anio); /** @brief Obtengo la cantidad de Proteinas que se recopila de todos los animales del Campo **/
	
//	
	
//	int CantAniLactancia (int n_lac); /** @brief Obtengo la cantidad de animales con el n_lac numeros de la lactancias del Campo **/
//	float CantPromLactM (int n_lac, int dia, int mes, int anio); /** @brief Obtengo la cantidad de meses (edad) de animales con el n_lac numeros de la lactancias del Campo **/
//	float CantPromLactD (int n_lac, int dia, int mes, int anio); /** @brief Obtengo la cantidad de meses (edad) de animales con el n_lac numeros de la lactancias del Campo **/
//	float CantPromLechLac (int n_lac); /** @brief Obtengo la cantidad en promedio con el n_lac numeros de la lactancias de leche producida en el Campo **/
//	float CantPromGBLac (int n_lac); /** @brief Obtengo la cantidad en promedio con el n_lac numeros de la lactancias de leche producida en el Campo **/
//	
//	int AnimalesProduccion (int n_lac); /**@brief Obtengo la cantidad de animales que se encuentran en produccion**/
	
//	float CantPromPLac (int n_lac); /** @brief Obtengo la cantidad en promedio con el n_lac numeros de la lactancias de leche producida en el Campo **/
//	
//	float CantTotLechLac (int n_lac); // total de leche en todas las vacas de esa lactacia
//	float CantTotGBLac (int n_lac); // total de grasa brutirosa en todas las vacas de esa lactacia
//	float CantTotPLac (int n_lac);
//	
//	int CantAniSec (int n_lac); /** @brief Obtengo la cantidad de animales (secas) con el n_lac numeros de la lactancias del Campo **/
};


extern Campo *mi_campo;


#endif

