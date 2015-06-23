#include "piramideh.h"


Piramide::Piramide (float xLado,float xAltura, float xApotema){

 lado = xLado ; altura = xAltura, apotema= xApotema;
}
Piramide::~Piramide (){}



float Piramide:: areaPiramide(){


return lado *( 2* (apotema+lado));
}
float Piramide::volumenPiramide(){

return (lado * lado * altura)/3;

}
