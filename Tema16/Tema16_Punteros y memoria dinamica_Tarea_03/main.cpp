
#include <iostream>

using namespace std;

int main()
{
    int x =10;  /**< Variable x guardada en una posicion */

    int *y;    /**< Implantacion del puntero y que apunta a una direccion */

    int **z;   /**< Implantaccion del puntero z que contiene la direccion de otro puntero */

    y=&x;      /**< El puntero y apunta a x y toma su valor */

    z=&y;     /**< El puntero z contiene la direccion de y */


cout<<"Valor de la variable x "<<x<<endl;
cout <<"Valor del puntero y " <<*y<<endl;
cout<<"Valor del puntero z "<<**z <<endl;

return 0;
}
