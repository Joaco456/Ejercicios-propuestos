#include <iostream>

using namespace std;
//EJERCICO 4
int potencia(int base, int exponente){
int resultado = 1;
for(int i = 0; i<exponente; i++)
    resultado *= base;
return resultado;
}
int main()
{
int base, exponente;
cout <<"Ingrese la base:  "; cin >> base;
cout <<"Ingrese el exponente:  "; cin >> exponente;
cout << "El resultado es: " << potencia(base,exponente);
return 0;
}
