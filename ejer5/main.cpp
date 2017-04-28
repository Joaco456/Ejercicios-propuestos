#include <iostream>

using namespace std;

int main()
{
//EJERCICIO 5
int numero;
    cout << "Ingrese un numero entre 0 y 9: " ; cin >> numero;
    switch(numero){
    while(numero != -1)
        case 0: cout << "cero" ; break;
        case 1: cout << "uno" ; break;
        case 2: cout << "dos" ; break;
        case 3: cout << "tres" ; break;
        case 4: cout << "cuatro" ; break;
        case 5: cout << "cinco" ; break;
        case 6: cout << "seis" ; break;
        case 7: cout << "siete" ; break;
        case 8: cout << "ocho" ; break;
        case 9: cout << "nueve" ; break;
        default: cout <<"Numero no permitido"; break;
}
    return 0;
}
