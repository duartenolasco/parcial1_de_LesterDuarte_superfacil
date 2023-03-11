/* Hacer un procedimiento que despliegue la tabla de multiplicar de cualquier numero ingresado
por el usuario utilizando la estrictura de control while
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int numeroaingresar, multiplicacion, primernumero=1; //declaro mis variables a utilizar
    cout<<"ingrese el numero de la tabla de multiplicar que desea realizar:  \n";
    cin>>numeroaingresar; //aca pido que ingresen el numero de la tabla que quieran saber

    cout<<"la tabla del "<<numeroaingresar<< " es: "<<endl; //y aca nuestro el mensaje con el numero de la tabla que quiero saber
    do{ //hablo ciclo do porque va junto con el while
        multiplicacion =numeroaingresar * primernumero; //aca hago que el resultado de mi variable multiplicacion sea la variable numero a ingresar por la variable primer numero
        cout<< numeroaingresar <<" x "<< primernumero<<" = "<< multiplicacion <<endl; //aca nuestro en pantalla para que se vea estetico
        primernumero++;
    }
    while(primernumero<=10); //aca el ciclo le indico que quiero que me haga la tabla hasta el numero 10
}