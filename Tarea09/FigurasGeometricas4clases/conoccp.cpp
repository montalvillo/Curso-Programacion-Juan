#include "conoh.h"
#include <math.h>
#define Pi 3.14



CONO::CONO (float xRadio, float xAltura,float xGeneratriz){
radio = xRadio, altura = xAltura ,generatriz = xGeneratriz;}

CONO::~CONO(){}


float CONO::calcularArea(){

return (Pi * (generatriz * radio)) + (Pi * (radio * radio)) ;}

float CONO::calcularVolumen (){

return (Pi*(radio * radio) * (altura))/3;}



