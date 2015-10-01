/**< Programa para encontar el numero mayor del array y el indice  */

#include <iostream>

using namespace std;

int main()
{
 int miarray[5];

 int mayor =0;

 cout << "Introduce 5 numeros enteros "<<endl;

 for (int i = 0; i<5;i++){

    cin>>miarray[i];}

    for (int i = 0; i<5;i++){

        if (miarray[i]> mayor){

            mayor=miarray[i];}}




        cout<<"El mayor es "<<mayor<<endl;


    cout<<"El indice es "<<endl;



    return 0;
}
