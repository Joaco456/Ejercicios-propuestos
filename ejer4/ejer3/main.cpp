#include <iostream>

using namespace std;

int main()
{
    //EJERCICIO 3
    int numero;
    cout << "Ingrese un numero: " ; cin >> numero;
    if(numero%2 == 0){
        cout <<"El numero es par" << endl;
    }
    else if(numero == -1){
        return 0;
    }
    else {
        cout <<"El numero es impar" << endl;
    }
    return 0;
}
