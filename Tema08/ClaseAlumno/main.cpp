#include <iostream>
#include "alumnoh.h"
using namespace std;

int main()
{

Alumno miAlumno ("","",5,0); /**< Creacion del objeto miAlumno que pertenece a la
clase Alumno */

cout << miAlumno.verNombre() ;
cout << miAlumno.verApellidos()<< endl;

cout << miAlumno.verDni();

    return 0;
}
