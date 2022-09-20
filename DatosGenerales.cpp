#include "DatosGenerales.h"



DatosGenerales::DatosGenerales ( string nom, string ape, string dir, string tel, string emp, string tit,
								string esp, string cuit, bool user)
{
	// capitalizo las palabras para que sea mas elegible
	CapitalizarTodo(nom);
	CapitalizarTodo(ape);
	CapitalizarTodo(dir);
	CapitalizarTodo(emp);
	CapitalizarTodo(tit);
	CapitalizarTodo(esp);
	//CapitalizarTodo(nom_tam);
	
	Nombre=nom;
	Apellido=ape;
	Direccion=dir;
	Telefono=tel;
	Empresa=emp;
	Titulo=tit;
	Especialidad=esp;
	CUIT=cuit; 
	Usuario=user;
	//Nombre_Tambo=nom_tam;
}
// -- Para ver los datos -- //
string DatosGenerales::Ver_Nombre () const {
	return Nombre;
}
string DatosGenerales::Ver_Apellido () const {
	return Apellido;
}
string DatosGenerales::Ver_Direccion () const {
	return Direccion;
}
string DatosGenerales::Ver_Telefono () const {
	return Telefono;
}
string DatosGenerales::Ver_Empresa () const {
	return Empresa;
}
string DatosGenerales::Ver_Titulo () const {
	return Titulo;
}
string DatosGenerales::Ver_Especialidad () const {
	return Especialidad;
}
string DatosGenerales::Ver_CUIT () const {
	return CUIT;
}
bool DatosGenerales::Ver_Usuario () const {
	return Usuario;
}
/*
string DatosGenerales::Ver_Nombre_Tambo () const {
	return Nombre_Tambo;
}*/
//
// -- Para Modificar los datos -- //
void DatosGenerales::ModificarNombre (string n_nombre) {
	Nombre=n_nombre;
}
void DatosGenerales::ModificarApellido (string n_apellido) {
	Apellido=n_apellido;
}
void DatosGenerales::ModificarDireccion (string n_direccion) {
	Direccion=n_direccion;
}
void DatosGenerales::ModificarTelefono (string n_telefono) {
	Telefono=n_telefono;
}
void DatosGenerales::ModificarEmpresa (string n_empresa) {
	Empresa=n_empresa;
}
void DatosGenerales::ModificarTitulo (string n_titulo) {
	Titulo=n_titulo;
}
void DatosGenerales::ModificarEspecialidad (string n_especialidad) {
	Especialidad=n_especialidad;
}
void DatosGenerales::ModificarCUIT (string n_cuit) {
	CUIT=n_cuit;
}
void DatosGenerales::ModificarUsuario (bool n_usuario) {
	Usuario=n_usuario;
}
/*
void DatosGenerales::ModificarNombre_Tambo (string n_nom_tam) {
	Nombre_Tambo=n_nom_tam;
}*/
//
//
// -- Guardar un registro evento en disco -- //
void DatosGenerales::GuardarGeneral (ofstream &archivo){
	general nuevo; // Creo un struct para los datos
	
	
	strcpy(nuevo.nomb_p,Nombre.c_str());
	strcpy(nuevo.ape_p,Apellido.c_str());
	strcpy(nuevo.direc_p,Direccion.c_str());
	strcpy(nuevo.tel_p,Telefono.c_str()); 			
	strcpy(nuevo.emp_p,Empresa.c_str());
	strcpy(nuevo.tit_p,Titulo.c_str());
	strcpy(nuevo.esp_p,Especialidad.c_str());
	strcpy(nuevo.cuit_p,CUIT.c_str());
	nuevo.usuar=Usuario;
	//strcpy (nuevo.nom_tam,Nombre_Tambo.c_str());
	
	// reinterpret_cast es la mejor opcion de casteo
	archivo.write (reinterpret_cast <char*> (&nuevo),sizeof (general));
//	archivo.write ((char*) &nuevo,sizeof (general));
}
//
// -- Leer un registro evento desde disco -- //
void DatosGenerales::LeerGeneral (ifstream &archivo){
	general nuevo;
	
	// reinterpret_cast es la mejor opcion de casteo
	archivo.read (reinterpret_cast <char*> (&nuevo),sizeof (general));
//	archivo.read ((char*) &nuevo,sizeof (general));
	
	Nombre=nuevo.nomb_p;
	Apellido=nuevo.ape_p;
	Direccion=nuevo.direc_p;
	Telefono=nuevo.tel_p;
	Empresa=nuevo.emp_p;
	Titulo=nuevo.tit_p;
	Especialidad=nuevo.esp_p;
	CUIT=nuevo.cuit_p;
	Usuario=nuevo.usuar;
	//Nombre_Tambo=nuevo.nom_tam;
	
}
//
// -- comprueba que los datos introducidos sean logicos -- //
string DatosGenerales::Validar () {
	string ERROR="";
	if (Nombre=="") ERROR+="* El campo Nombre no debe estar vacio\n";
	if (Apellido=="") ERROR+="* El campo Apellido no debe estar vacio\n";
//	if (Nombre_Tambo=="") ERROR+="* El campo Nombre del Tambo  no debe estar vacio\n";
	return ERROR;
	
}
