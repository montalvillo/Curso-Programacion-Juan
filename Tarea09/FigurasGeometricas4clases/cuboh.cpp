
#include "cuboh.h"



Cubo::Cubo() {}
Cubo::~Cubo() {}

void Cubo::longitudArista (float miArista){ /**< metodo para asignar el valor de arista */

arista = miArista;}

float Cubo::areaCubo(){ /**< Metodo para calcular el area */

return (arista * arista) * 6; }

float Cubo::volumenCubo(){ /**< Metodo para calcular el volumen */

return arista * arista * arista;
}


