#include <iostream>
#include "alumnoh.h"

Alumno::~Alumno(){} /**< Conexionado  del destructor de la clase */


Alumno::Alumno(string xNombre,string xApellidos, int xEdad,int xDni){

nombre = xNombre; /**< Conexionad del constructor recibe parametros de main  */

apellidos = xApellidos; /**< Implementacion del metodo */

edad = xEdad; /**< Implemetacion del metodo con una condicion */

if (edad <= 5 || edad < 0 ) { cout  << "su edad es de " << edad << endl << "Cumplimente nombre, apellidos y DNI" ;}

else{ cout << "No puede incribirse en nuestro centro,la edad es de 1 a 5" ;}

dni = xDni;

}

string Alumno::verNombre(){ /**< Implementacion del metodo verNombre es funcion void */
return nombre;} /**< Retorna el valor de nombre */

string Alumno::verApellidos(){ /**< Implementacion del metodo verApellidos es funcion void */
return apellidos;} /**< Retorna el valor de apellidos */


int Alumno::verEdad(){ /**< Implementacion del metodo verEdad es funcion void */
return edad;} /**< Retorna el valor de edad */

int Alumno::verDni(){ /**< Implementacion del metodo verDni es funcion void */
return dni;} /**< Retorna el valor de edad */
