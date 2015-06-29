#include <iostream>

using namespace std;

int main (){

int i, mayor=0;/**< Variables,i es el numero y mayor para comparar */

do{

    cout <<("Dime el numero: ");

    cin >> i; /**< Almacenamos el numero en i */

    if (mayor<i)mayor = i;} /**< mayor siempre vale el numero mas alto, si i es menor
    no se cumple la condicion y retiene el valor mas alto*/

    while (i!=0); /**< negacion de falso luego es verdadero y
    finaliza el bucle al introducir un 0 si no existiera  la negacion
    finalizaria el bucle al introducir el primer numero pues i valdria 0*/

    cout<< ("El mayor es:  ")<< mayor;

  return 0;}














