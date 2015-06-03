#ifndef CILINDROH_H_INCLUDED
#define CILINDROH_H_INCLUDED
class Cilindro{

float altura,radio;
public:
    Cilindro();

    Cilindro (float xAltura, float xRadio);
    ~Cilindro ();

    void asignarAltura();
    void asignarRadio();
    float areaCilindro();
    float volumenCilindro();

};


#endif // CILINDROH_H_INCLUDED
