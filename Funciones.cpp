#include "Funciones.h"

/**
* Funcion que convierte un string totalmente a mayusculas
* @param &original recibe como paramtro el string original, que es convertivo a mayusculas
**/
void PasarMayusculas (string &original) {          
	int tamanio = original.length();	// Obtego el tamaño
	for (int i=0; i<tamanio; i++) {
		original[i] = toupper ( original[i] );	// Paso todo a mayusculas
	}
}
/**
* Funcion que convierte un string totalmente a minusculas
* @param &original recibe como paramtro el string original, que es convertivo a minusculas
**/
void PasarMinusculas (string &original) {
	int tamanio = original.length();	// Obtengo el tamaño
	for (int i=0; i<tamanio; i++) {
		original[i] = tolower ( original[i] );	// Paso todo a minusculas
	}
}
/**
* Funcion que capitaliza las primeras palabras despues de un punto en un string,
* además capitaliza la primera palabra que se encuentra al principio del string,
* sin inportar que este precedecida de blancos.-
* @param &original recibe como parametro el string original, que es capitalizado
**/
void Capitalizar (string &original) {
	int cont = 0;
	int tam = original.length();	// Obtengo el tamaño
	PasarMinusculas (original);		// lo Paso a minusculas
	while ( original[cont]==' ' ) { // Verifico si el string empieza con blanco y me posiciono
		cont++;
	}
	original[cont] = toupper ( original [cont] ); // Paso a mayusculas la primera letra del string
	
	// Si el tamano es mayor a tres recien es posble a capitalizar, porque quiere decir que el string se
	// compone de 2 o mas palabras.
	if ( tam>3 ) {
		for ( int i=1; i<tam; i++ ) {
			if ( original[i]=='.' ) {	// Si encuentro un punto
				original[i+2] = toupper ( original[i+2] ); // Capitalizo las letras despues de los blancos
			}
		}
	}	
}
/**
* Funcion que capitaliza todas las palabras en un string, además capitaliza la 
* primera palabra que se encuentra al principio del string, sin inportar que este
* precedecida de blancos.-
* @param &original recibe como parametro el string original, que es capitalizado en su totalidad
**/
void CapitalizarTodo (string &original) { 
	int cont = 0;
	int tam = original.length();	// Obtengo el tamaño
	PasarMinusculas (original);		// Lo Paso a minusculas
	while ( original[cont]==' ' ) { // Verifico si el string empieza con blanco y me posiciono
		cont++;
	}
	original[cont] = toupper ( original [cont] );  // Paso a mayusculas la primera letra del string
	
	// Si el tamano es mayor a tres recien es posble a capitalizar, porque quiere decir que el string se
	// compone de 2 o mas palabras.
	if ( tam>3 ) {
		for ( int i=1; i<tam; i++ ) {
			if ( original[i]==' ' ){
				original[i+1] = toupper ( original[i+1] ); // Capitalizo las letras despues de los blancos
			}
		}
	}	
}
/**
* Funcion que busca en el string espacios en blanco, devuelve verdadero o falso
* @param &original recibe como parametro el string original, que es analizado en busca de blancos
* @retval true si encuentra espacios en blancos en el string
* @retval false si no encuentra espacios en blancos en el string
**/
bool HayBlancos (string &original) {
	int cont = 0;
	int tam = original.length();
	while ( cont<=tam ) { // Mientras no llegue al final del string..
		cont++;
		if (original[cont]==' ') {	// Si encuentro algun blanco retorno true y salgo del while
			return true;
			break;
		}
	}
	return false;	// Salgo con falso si no encontro un blanco
}
/**
* Funcion que devuelve una respuesta al valor booleano que se le pasa como parametro
* @param original recibe como parametro el bool original, que es analizado como verdadero o falso
* @retval "SI" si el bool es true.
* @retval "NO" si el bool es false.
**/
string Resbool (bool original) {
	string res;
	if (original==true)
		res="SI";
	else 
		res="NO";
	return res;
}
/**
* Funcion que devuelve que completa un string con ceros a la izquierda
* @param original recibe como parametro el string original.-
* @param n recibe un entero n, longitud final que deberia tener el string.-
**/
void CompletarCeros (string &original, int n) {
	int tam = original.size();
	int falta = (n-tam);
	
	if (falta>0)
		original.insert(0,falta,'0');
}
/**
* Funcion que devuelve un string con el valor de un entero
* @param numero recibe como parametro el numero.-
**/
string ConvertirIntTOString (int numero) {
	string num;
	int temp;
	while(numero / 10!=0){
		temp=numero%10;
		numero= numero/10;
		temp =temp + 48;
		num = (char)temp + num;
	}
	numero=numero+48;
	num = (char)numero + num ;
	return num;
}
