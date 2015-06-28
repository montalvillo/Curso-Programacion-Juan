#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


* Ejemplo - aprenderaprogramar.com */

//Ejemplo de clase que utiliza tipos definidos en otras clases (usa otras clases)
 public class TaxiCond {

     private Taxi vehiculoTaxi;
     private Persona conductorTaxi;

     //Constructor
     public TaxiCond () {
         vehiculoTaxi = new Taxi (); //Creamos un objeto Taxi con el constructor general de Taxi
         conductorTaxi = new Persona (); //Creamos un objeto Persona con el constructor general de Persona
     }

     public void setMatricula (String valorMatricula) { vehiculoTaxi.setMatricula(valorMatricula); }

     //Método que devuelve la información sobre el objeto TaxiCond
     public String getDatosTaxiCond () {
         String matricula = vehiculoTaxi.getMatricula();
         String distrito = vehiculoTaxi.getDistrito();
         int tipoMotor = vehiculoTaxi.getTipoMotor();
         String cadenaTipoMotor = "";

        if (tipoMotor ==0) { cadenaTipoMotor = "Desconocido"; }
         else if (tipoMotor == 1) { cadenaTipoMotor = "Gasolina"; }
         else if (tipoMotor == 2) { cadenaTipoMotor = "Diesel"; }

         String datosTaxiCond = "El objeto TaxiCond presenta estos datos. Matrícula: " + matricula +
             " Distrito: " + distrito + " Tipo de motor: " + cadenaTipoMotor;

         System.out.println (datosTaxiCond);
         return datosTaxiCond;
     } //Cierre del método

 } //Cierre de la clase






* Ejemplo - aprenderaprogramar.com */

//Ejemplo de clase con dos constructores y un método

public class Persona {

    private String nombre;

    private int edad;



    public Persona (String nombrePersona) {   //CONSTRUCTOR 1

       nombre = nombrePersona;

       edad = 0;     }



    public Persona () {   //CONSTRUCTOR2

       nombre = "";

       edad = 0;     }



    public String getNombre () { return nombre; }  //Cierre del método

} //Cierre de la clase






/* Ejemplo - aprenderaprogramar.com */

public class Taxi { //El nombre de la clase



    private String ciudad; //Ciudad de cada objeto taxi

    private String matricula; //Matrícula de cada objeto taxi

    private String distrito; //Distrito asignado a cada objeto taxi

    private int tipoMotor; //Tipo de motor asignado a cada objeto taxi. 0 = desconocido, 1 = gasolina, 2 = diesel



    //Constructor: cuando se cree un objeto taxi se ejecutará el código que incluyamos en el constructor

    public Taxi (String valorMatricula, String valorDistrito, int valorTipoMotor) {

        ciudad = "México D.F.";

        matricula = valorMatricula;

        distrito = valorDistrito;

        tipoMotor = valorTipoMotor;

    } //Cierre del constructor



      //Método para obtener la matrícula del objeto taxi

    public String getMatricula () { return matricula; } //Cierre del método



    //Método para obtener el distrito del objeto taxi

    public String getDistrito () { return distrito; } //Cierre del método



    //Método para obtener el tipo de motor del objeto taxi

    public int getTipoMotor () { return tipoMotor; } //Cierre del método



} //Cierre de la clase

