#include <iostream>

using namespace std;


class Coche{  /**< Implantacion de la clase coche */
    private:
        string color,marca; /**< Atributo de la clase */

    public:

        Coche (string xcolor,string xmarca){

            color = xcolor;

            marca = xmarca;
            }
        Coche (){}

        string ver (){

            return color + marca;}
     ~Coche(){}

};

int main()

{
Coche Uno,Dos,Tres("Amarillo ","Renault");

Coche  *punte1;
punte1 = new Coche("Verde "," Mercedes");

Coche  *punte2;
punte2 = new Coche("Azul "," FORD");

cout<<"Yo soy el coche numero 1 "<<punte1->ver()<<endl;

cout<<"Yo soy el coche numero 2 "<<(*punte2).ver()<<endl;

cout<<"Yo soy el coche numero 3 creado como objeto "<<Tres.ver()<<endl;

return 0;
}
