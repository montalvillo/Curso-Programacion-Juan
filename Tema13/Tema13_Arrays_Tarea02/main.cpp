#include <iostream>

using namespace std;


/**<  */int main()
{
 int miArray[10];/**< Declaracion del array con 10 indices */

 int cuenta = 0;  /**< Variable para contar */

  cout << "Introduce 10 numeros  entero: "<<endl;

    for (int i=0;i<=9;i++) /**< para introducir los 10 valores */
    cin>>miArray[i];  /**< Asignacion de los valores al array */

    for (int i = 0; i < 10; i++)/**< Bucle para recorrer el array */

    if (miArray[i] >= 10)  /**< Comprueba los valores del array iguales o superiores a 10 */

      cuenta = ++cuenta;  /**< Contador para los valores iguales o superiores a 10 */

    cout<<"Numeros mayores que 10 hay  "<<cuenta;

return 0;
}
