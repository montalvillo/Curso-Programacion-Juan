
#include"cilindroh.h"
#define Pi 3.14



Cilindro::Cilindro (float xRadio, float xAltura){

radio = xRadio; altura = xAltura;
}
Cilindro::~Cilindro(){}

float Cilindro:: areaCilindro(){

return 2*Pi*radio*altura;}

float Cilindro::volumenCilindro(){

return Pi * radio * radio * altura;
}
