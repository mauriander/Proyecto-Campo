#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
using namespace std;

void PasarMayusculas (string &original);	///< Pasar todo el string a mayusculas
void PasarMinusculas (string &original);	///< Pasar todo el string a minusculas
void Capitalizar (string &original);		///< Pasa a mayusculas la primera letra de cada palabra despues de un punto
void CapitalizarTodo (string &original);	///< Pasa a mayusculas las primera letra de cada palabra
bool HayBlancos (string &original);			///< Devuelve true si encuentra espacios en blanco en el string
string Resbool (bool original);				///< Devuelve "SI" en caso que el bool sea true, sino devuelve "NO"
void CompletarCeros (string &original, int n);///< Completa string con ceros a la izquierda
string ConvertirIntTOString (int numero);	///< Funcion que devuelve el valor de un numero entero en string
#endif

