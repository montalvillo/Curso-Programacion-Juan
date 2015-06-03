#include "conoh.h"
#include <math.h>
#define Pi 3.14



Cono::Cono(float xRadio, float xAltura,float xGeneratriz){
radio = xRadio, altura = xAltura ,generatriz = xGeneratriz;}

Cono::~Cono(){}


float Cono::calcularArea(){

return (Pi * (generatriz * radio)) + (Pi * (radio * radio)) ;}

float Cono::calcularVolumen (){

return (Pi*(radio * radio) * (altura))/3;}



