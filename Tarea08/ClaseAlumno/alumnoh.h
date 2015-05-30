#ifndef ALUMNOH_H_INCLUDED
#define ALUMNOH_H_INCLUDED
#include <iostream>
 using namespace std;

class Alumno{     /**< Creacion de la clase Alumno */


 string nombre,apellidos; /**< Atributos de la clase, variables */

  int edad,dni; /**< Atributos de la clase, variables */

public:
          Alumno(string xNombre,string xApellidos,int xEdad, int xDni); /**< Declaracion del
          constructor  con parametro*/

          Alumno (); /**< Declaracion del constructor sin parametros */


    string verNombre();  /**< Declaracion del metodo verNombre */
    string verApellidos(); /**< Declaracion del metodo verApellidos */

     int verEdad(); /**< Declaracion del metodo verEdad */
     int verDni();   /**< Declaracion del metodo verDNI */

    ~Alumno(); /**< Destructor de la clase */

 };

#endif // ALUMNOH_H_INCLUDED
