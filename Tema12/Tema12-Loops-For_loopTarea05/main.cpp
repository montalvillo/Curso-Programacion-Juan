
#include <iostream>
using namespace std;

int main() {

int numero;          /**< Esta variable es para el valor del numero que entra */
int contador = 0;    /**< Esta variable es para almacenar la cantidad de numeros que entran */
int total = 0;       /**< Esta variable es para almacenar la suma de los numero introducidos */
int promedio;         /**< Esta variable para calcular el promedio */


   cout << "Introduce numero, 0 para terminar y calcular el promedio de tus numeros "<<endl;

   cin >> numero;       /**< Asigna un valor inicial  */


   while (numero <0){/**< Solo controla el primer numero introducido que sea positivo */

    cout << "ERROR "<< endl; /**< Si la condicion es falsa */

    cout <<"Dame otro numero"<<endl;

    cin >> numero;}


  while (numero !=0){      /**< captura y acumulación de los numeros con la condicion que sean distintos de 0 */

    total = total + numero;  /**< La variable total se incrementa con la suma de los numeros introducidos */

    contador = contador + 1; /**< Contador cuenta los numeros introducidos */

    cin>>numero;

    }

   if    (contador !=0){

    promedio=total/contador;

    promedio =  total / contador;

  cout << ( "El promedio de tus numeros es:  ")<< promedio;

 }
     else cout << ("No se introdujeron numeros.\n");

return 0;

}










