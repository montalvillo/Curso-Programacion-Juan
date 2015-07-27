#include <iostream>

using namespace std;

int main()
{
   for (int n = 1; n <= 15; n++){ /**< Este es contador del 1 hasta el 15 */

        cout <<"Esta es la tabla del " << n << endl;



        for (int j = 1; j <= 15; j++){ /**< Este for esta dentro del contador se
            ejecuta 15 veces por cada incremento de n */

            cout << n * j << endl;

        }

        cout << endl; /**< pertenece al for del contador deja un espacio por cada
         incremeto de n */

    }


    return 0;
}
