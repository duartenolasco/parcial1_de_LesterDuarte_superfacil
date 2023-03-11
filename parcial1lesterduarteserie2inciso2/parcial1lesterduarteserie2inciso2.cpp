/* hacer un procedimiento que despliegue la tabla de multiplicar
 */
#include <iostream>
using namespace std;
int main() {
    int tabla5=5, tabla8=8, tabla9=9, multiplicacion, multiplicacion8, primernumero=1;
    int segundonumero=1, tercernumero=1, multiplicacion9;
    cout<<" te mostrare las tablas de multiplicar del 5, 8 y 9:  \n";
    cout<<"\n";
    cout<<"la tabla del "<< tabla5<< " es: "<<endl; //y aca nuestro el mensaje con el numero de la tabla que quiero saber

    do{ //hablo ciclo do porque va junto con el while
        multiplicacion =tabla5 * primernumero; //aca hago que el resultado de mi variable multiplicacion sea la variable numero a ingresar por la variable primer numero
        cout<< tabla5 <<" x "<< primernumero<<" = "<< multiplicacion <<endl; //aca nuestro en pantalla para que se vea estetico
        primernumero++;
    }
    while(primernumero<=10); //aca el ciclo le indico que quiero que me haga la tabla hasta el numero 10

    cout<<"\n";
    cout<<"la tabla del "<< tabla8<< " es: "<<endl; //y aca nuestro el mensaje con el numero de la tabla que quiero saber

    do{ //hablo ciclo do porque va junto con el while
        multiplicacion8 =tabla8 * segundonumero; //aca hago que el resultado de mi variable multiplicacion sea la variable numero a ingresar por la variable primer numero
        cout<< tabla8 <<" x "<< segundonumero<<" = "<< multiplicacion8 <<endl; //aca nuestro en pantalla para que se vea estetico
        segundonumero++;
    }
    while(segundonumero<=10); //aca el ciclo le indico que quiero que me haga la tabla hasta el numero 10

    cout<<"\n";
    cout<<"la tabla del "<< tabla9<< " es: "<<endl; //y aca nuestro el mensaje con el numero de la tabla que quiero saber

    do{ //hablo ciclo do porque va junto con el while
        multiplicacion9 =tabla9 * tercernumero; //aca hago que el resultado de mi variable multiplicacion sea la variable numero a ingresar por la variable primer numero
        cout<< tabla9 <<" x "<< tercernumero<<" = "<< multiplicacion9 <<endl; //aca nuestro en pantalla para que se vea estetico
        tercernumero++;
    }
    while(tercernumero<=10); //aca el ciclo le indico que quiero que me haga la tabla hasta el numero 10
}
