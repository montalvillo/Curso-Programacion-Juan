#ifndef CONOH_H_INCLUDED
#define CONOH_H_INCLUDED


class CONO{
float radio, altura, generatriz;

public:
    CONO (float xRadio,float xAltura, float xGeneratriz);
    ~CONO();

    void asignarRadio();
    void asignarAltura();
    float calcularArea();
    float calcularVolumen();
    };

#endif // CONOH_H_INCLUDED
