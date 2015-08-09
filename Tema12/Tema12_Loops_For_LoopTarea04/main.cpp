#include <iostream>

using namespace std;


int main (){

int sum =0 ,nu;/**< Asigno a la variable sum un valor de inicio */
cout << "Ingrese 10 numeros" << endl;


for (int i =1 ; i<=10;i++){ /**< Este for es un contador hasta llegar a los 10 numeros, e incrementa el valor de i en uno
        cada vez que se ejecuta cuando es verdadero salta al cout*/
    cin>> nu; /**< Almaceno el numero introducido */

    sum= sum+nu; /**< Se realiza la suma del primero + el segundo, del segundo + el tercero.etcc hasta el decimo */
}

cout<< "La suma es:"<<sum << endl;

return 0;


}





















