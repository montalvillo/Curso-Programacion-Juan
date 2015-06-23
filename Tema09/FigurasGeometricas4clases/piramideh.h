#ifndef PIRAMIDEH_H_INCLUDED
#define PIRAMIDEH_H_INCLUDED
class Piramide{

float lado ,altura , apotema;

public:
    Piramide();
    Piramide (float xLado,float xAltura, float xApotema);
    ~Piramide();



    void asignarAltura();
    void asignarLado();
    float areaPiramide();
    float asignarApotema();

    float volumenPiramide();
    };


#endif // PIRAMIDEH_H_INCLUDED
