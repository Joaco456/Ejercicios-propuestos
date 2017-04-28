#include <iostream>

using namespace std;

int main()
{
//EJERCICIO 6
 char o; float a,b,resul;
    cout<<"Ingrese el operador y dos operandos\n"; cin>>o>>a>>b;
    if(o=='+')
        resul=a+b;
    else if(o=='-')
        resul=a-b;
    else if(o=='*')
        resul=a*b;
    else if(o=='/')
        resul=a/b;

    cout<<a<<o<<b<<" es: "<<resul;

    return 0;
}
