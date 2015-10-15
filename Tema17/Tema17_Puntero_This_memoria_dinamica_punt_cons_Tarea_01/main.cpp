#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    char  b = 'H' ;
    int c = 10;

    int const *ptrconst = &a; /**< Puntero constante hay que inicializar , se puede cambiar el valor de int
    pero no la direccion*/

    cout<<"Soy puntero constante soy el int a y mi valor es  "<< *ptrconst<<endl<<endl;


  char *const ptrtipoconst = &b; /**< Puntero de tipo constante a una variable que se puede cambiar*/

    cout<<"Soy puntero *ptrtipoconst, de tipo char constante, pero no mi char b que ahora soy la "<< *ptrtipoconst<<endl;


   (*ptrtipoconst)++;

   cout<<" Soy *ptrtipoconst el mismo de antes ahora he corrido una a mi char b letra y ahora soy la "<<*ptrtipoconst<<endl<<endl;

  const int *const ptrtotal =&c; /**< Todo es constante */

  cout<<"Yo soy un puntero constante a una variable constante nadie me toca siempre valdre  "<<*ptrtotal<<endl<<endl
  ;



    return 0;
}
