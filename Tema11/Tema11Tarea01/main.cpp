#include <iostream>

using namespace std;

int main()
{
int n; /**< Declaracion de la variable n */
n = 15; /**< Inicializo n con valor 15 */
do {

    if (n%3 ==0 || n%5 == 0){ /**< Aqui divido n entre 3 y 5 si el cociente es 0 es multiplo
    con valor 15 la primera condicion es true  y la segunda true imprime numeros
    en n = 18 es true y false devuelve true e imprime el true, n= 20 es false y true
    devuelve true y lo imprime*/

    cout <<n<< endl;}

    n++; /**< Incrementamos el valor de n en una unidad 16,17 etec */

} while (n<=45);/**< Cuando se cunpla la condicion se termina el bucle */

return 0;
}
