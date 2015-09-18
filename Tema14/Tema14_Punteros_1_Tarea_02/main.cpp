#include <iostream>

using namespace std;

int main()
{

    int  count = 10,*temp,sum = 0;/**< declaracicon de la variable count= 10 y sum = 0 */

    temp = &count;  /**< Apuntamos a temp hacia la posicion de count */

    *temp = 20;     /**< Asignamos el valor 20 al puntero temp que esta en la posiccion count, luego count pasa a valer 20 */

    temp = &sum;     /**< Apuntamos temp a la direccion de sum */

    *temp = count;    /**< Asignamos al puntero temp que esta en sum el valor de count que es 20 luego sum vale 20 */

    cout<<"Valor final de temp "<<*temp<<"  Valor final de sum "<<sum<<"  Valor final de count "<<count<<endl;

    return 0;
}
