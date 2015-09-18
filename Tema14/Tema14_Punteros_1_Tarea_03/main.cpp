
/**< Escribe un programa que tome tres variables (x, y, z) asigna valores por separado y cambia los valores almacenados
de manera que: valor de y pase a z; valor de z pase a x ; valor de x pase a y .Imprime por consola los resultados. */

#include <iostream>

using namespace std;

int main()
{

int x=10,y=20,z=30;

cout<<"Soy la z y valgo "<<z<<" Soy la x y valgo "<<x<<" Soy la y y valgo "<<y<<endl;

int *p = 0;

    p = &y;                                                  /**< Apunta a la direccion de 'y' */

    z = *p;                                                 /**< Asigna el valor del puntero a z  */

    cout<<"Soy la nueva z ahora valgo  "<<z<<endl;

    p= &y;                                                      /**< Apunta a la direccion de x para coger su valor */

    x = *p;                                                    /**< Asigna el valor del del puntero a 'x' */

    cout<<"Soy la nueva x ahora valgo  "<<x<<endl;

    p = &y;

    y = *p;

    cout<<"Soy la nueva y ahora valgo  "<<y<<endl;
    cout<<"Que curioso todas valemos lo mismo"<<endl;

return 0;
}
