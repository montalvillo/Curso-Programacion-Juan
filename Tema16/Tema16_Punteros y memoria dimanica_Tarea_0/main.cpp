#include <iostream>

using namespace std;


int main()
{
    char  *caracter = new char('A') ;

    cout<<"Yo soy el caracter "<< *caracter<<endl;

    delete caracter;

    int  *entero = new int (5);

    cout<<"Yo soy el entero y valgo "<< *entero<<endl;

    delete entero;

    float *decimal = new float (2.2);

    cout<<"Yo soy el float y valgo "<< *decimal<<endl;

    delete decimal;

    double *decimallargo = new double (4.44444);

    cout<<"Yo soy el double y valgo "<< *decimallargo<<endl;

    long *largo = new long (1234);

    cout<<"Yo soy el long y valgo "<< *largo<<endl;

    delete largo;

    bool *deci = new bool (false);


    if (*deci){
        cout<<"Yo soy el bool y soy verdadero"<<endl;}

        else {cout<<"Yo soy el bool y soy falso"<<endl;}

    delete deci;


return 0;
}
