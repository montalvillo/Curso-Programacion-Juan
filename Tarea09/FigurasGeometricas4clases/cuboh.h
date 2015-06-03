#ifndef CUBOH_H_INCLUDED
#define CUBOH_H_INCLUDED

class Cubo{ /**< Declaracion de la clase */

float arista; /**< Atributo variable de la clase */
public:
    Cubo ();     /**< Declaracion del constructor sin parametros */
    ~Cubo ();    /**< Declaracion del destructor */

    void longitudArista (float miArista ); /**<e acceso a los datos */
    float verArista (); /**< Metodo void  */
    float areaCubo (); /**< Metodo para calcular el area */
    float volumenCubo (); /**< Metodo para calcular el volumen */

};


#endif // CUBOH_H_INCLUDED
