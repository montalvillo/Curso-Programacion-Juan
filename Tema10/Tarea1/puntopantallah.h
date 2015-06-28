#ifndef PUNTOPANTALLAH_H_INCLUDED
#define PUNTOPANTALLAH_H_INCLUDED
#include <iostream>
class PuntoPantalla{
int x,y;
public:
PuntoPantalla();
PuntoPantalla (int mix, int miy);

void coord(int mix, int miy);
int getx() const;
int gety() const;
};



#endif // PUNTOPANTALLAH_H_INCLUDED
