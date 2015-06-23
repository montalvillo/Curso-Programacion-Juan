#include <iostream>
#include "cuboh.h"
#include "cilindroh.h"
#include "piramideh.h"
#include "conoh.h"

using namespace std;

int main()
{


   Cubo miCubo;

  miCubo.longitudArista(6.9);

  cout << "El area del cubo "<< miCubo.areaCubo()<< " m2"<< endl;

   cout << "y su volumen es de "  << miCubo.volumenCubo()<< " m3"<< endl << endl;


   Cilindro miCilindro(1,1);

    miCilindro.areaCilindro();

    cout << "El area del cilindro " << miCilindro.areaCilindro()<<" m2" << endl;

    cout << "Y su volumen es de  " <<miCilindro.volumenCilindro()<<" m3"<< endl << endl;

Piramide miPiramide( 10,12,13);

miPiramide.areaPiramide();
miPiramide.volumenPiramide();

cout << "El area de la piramide es de " << miPiramide.areaPiramide()<< " cm2" << endl;

 cout << "Y su volumen es de " << miPiramide.volumenPiramide()<< " cm3" << endl <<endl;


Cono miCono(12,3,15);

miCono.calcularArea();

cout << " El area del cono es de " << miCono.calcularArea()<<" cm3"<< endl;

cout << "Y su volumen es de " << miCono.calcularVolumen() << " cm3" << endl;




    return 0;
}
