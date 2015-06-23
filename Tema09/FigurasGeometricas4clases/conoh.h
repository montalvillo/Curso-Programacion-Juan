#ifndef CONOH_H_INCLUDED
#define CONOH_H_INCLUDED


class Cono{
float radio, altura, generatriz;

public:
    Cono (float xRadio,float xAltura, float xGeneratriz);
    ~Cono();

    void asignarRadio();
    void asignarAltura();
    float calcularArea();
    float calcularVolumen();
    };

#endif // CONOH_H_INCLUDED
