#include <iostream>
#include "cilindroh.h"

using namespace std;

int main()
{
    Cilindro miCilindro(1,1);

    miCilindro.areaCilindro();

    cout << "Area " << miCilindro.areaCilindro()<<" m2" << endl;

    cout << "Volumen " <<miCilindro.volumenCilindro()<<" m3"<< endl;

    return 0;
}
