#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int numbers[10];
int j=100;
int *p;
for (int i = 0;i<9;i++){ /**< Introducir los valores en array */

j=j+100; /**< para introducir de 100 en 100 */

numbers[i]=j; /**< Asigno el valor de j al array */

p=numbers; /**< El puntero apunta a numbers al indice 0 y le pasa los valores del array*/

cout<<*(p+i)<<endl;}/**< Recorre el puntero *p que tieno los valores del array */

return 0;
}



