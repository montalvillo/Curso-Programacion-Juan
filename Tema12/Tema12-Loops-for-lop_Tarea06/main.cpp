#include <iostream>

using namespace std;

int main()
{

    for (int i=8;i>=0;i--){/**<Este bucle es el principal, es el contador, engloba a los dos.En el primer paso i vale 8 se cumple
       la condicion se ejecuta y pasa al siguiente for en el siguiente paso i valdra 7
       la condicion se cumple se ejecuta y pasa al siguiente for asi hasta que i valga 0
       y la condicion no se cumple y se para */


    cout<<"\n";/**< cada vez que se ejecuta genera un salto de linea hacia abajo */

    for (int j=i;j<=8;j++){ /**< En este for se iguala el valor de i a j cada vez que se ejecuta y que cada vez tendra un decremento en
         la entrada es decir 8,7 6,5 4,3,2,1 y 0 por lo tanto el ciclo se ejecutara tantas veces hasta valer 8  cuando
         i valga 0 se ejecutara 8 veces*/

     cout <<"#"; /**< Esto se imprime en la misma fila tantas veces por fila como el valor de j en cada pasada del bucle */

    }

}
return 0;
}
