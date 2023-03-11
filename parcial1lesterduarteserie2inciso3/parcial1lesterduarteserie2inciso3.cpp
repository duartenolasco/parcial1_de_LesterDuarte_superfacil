# include "iostream"

using namespace std;

int main()
{
    cout<< "estas son del no. 1 al 7  \n";
    cout<<"la cual le mostrara los dias de la  \n semana si es un dia laboral o no \n";
    cout << "Ingrese la Opción a ejecutar:  \n";

    char opcionesdisponibles;
    cin >> opcionesdisponibles;

    switch(opcionesdisponibles)
    {
        case '1': cout << "representa el dia lunes y \n es un dia laboral :(";
            break;
        case '2': cout << "representa el dia martes y \n es un dia laboral :(";
            break;
        case '3': cout << "representa el dia miercolesy \n es un dia laboral :(";
            break;
        case '4': cout << "representa el dia jueves y \n es un dia laboral :(";
            break;
        case '5': cout << "representa el dia viernes y \n es un dia laboral :(";
            break;
        case '6': cout << "representa el dia sabado y \n  es un dia laboral :(";
            break;
        case '7': cout << "representa el dia domingo y \n  y no es un dia laboral :)";
            break;

        default: cout << "Usted ha ingresado una opción no disponible "<<" elija un numero del 1 al 7";

    }
    

    return 0;
}