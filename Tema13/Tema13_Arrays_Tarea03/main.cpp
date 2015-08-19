#include <iostream>
using namespace std;

int  main()
{
   int miArray[10]; /**< Creacion del array con 10 */

   int a,cuenta=0; /**< Variable 'a' para almacenar el valor 'V', 'cuenta' para comprobar la posicion del valor V */

    cout<< "Introduce una serie de enteros hasta que  solicite introducir 'V'  : "<<endl;

 for(int i=0;i<=9;i++)/**< Ciclo for para introducir el numero de valores , finaliza cuando el contador i es igual o mayor

al numero de valores del array como esta entre {} solo se ejecuta hasta que se cumple*/
   {

      cin>>miArray[i]; /**< Almacena los valores en el array [i] */


   }

   cout<<"Introduce un entero 'V'para comprobar si esta en la seri: "; /**< Se ejecuta cuando termina el for de introducir los valores */

   cin>>a; /**< Almacena el valor a buscar */

   for(int i=0;i<=9;i++) /**< For para recorrer todo el array , no esta emglobado en el primer for*/


   {
      if(a==miArray[i]) /**< Condicion si el valor "a" es igual a algun valor del array  se ejecuta */
      {
         cout<<"Si estoy, en la serie "<<endl; /**< Ejecucion del if si se cumple la condicion*/
    }
      else
      {
         cuenta++; /**< si no se cumple la condicion se incrementa el valor de cuenta en uno y cuenta la posicion  */
    }
   }
   if(cuenta==10) /**< Si el valor de cuenta es igual al numero de indices del array ha llegado al final y no ha encontrado el valor */
   {
      cout<<"Este numero no esta en la serie ";
   }

}


