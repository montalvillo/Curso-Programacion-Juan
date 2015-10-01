#include <iostream>
#include <string>

using namespace std;

void loop_through_the_array(int array[], int size)  /**< Implantacion de la funcion con dos parametros  un array y una variable

size que es la longitud ,en este es  10*/
{
int *element, *terminator; /**< Declaracion  de dos punteros*/

element = array; /**< element apunta a la direccion de array al indice 0 */

terminator = array+size; /**< terminator apunta a la direccion de array + la suma de un entero size ,
 apunta a toda la longitud del array */


while(element != terminator) /**< condicion de negacion cuando element vale lo mismo que terminator, es decir cuando 10 =10

    compara el puntero element con el puntero terminator se cumple y se para el ciclo*/

{
cout << *element<<endl;  /**< Imprime el valor del una casilla del puntero element */

          element++;}     /**< Pasa a la siguiente casilla del puntero element o suma un entero a la direccion */
}

int main()
{
     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


     loop_through_the_array(array, 10);

     return 0;
}



