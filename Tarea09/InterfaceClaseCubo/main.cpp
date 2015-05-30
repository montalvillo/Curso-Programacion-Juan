#include <iostream>
#include "cuboh.h"

using namespace std;

int main()
{

  Cubo miCubo;

  miCubo.longitudArista(6.9);

  cout << "El area del cubo con una arista de longitud " << miCubo.verArista()<< " m es de"  << miCubo.areaCubo()<< " m2"<< endl;

   cout << "y su volumen es de "  << miCubo.volumenCubo()<< " m3"<< endl;

    return 0;
}
