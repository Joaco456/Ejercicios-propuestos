#include <iostream>

using namespace std;

int main()
{
//EJERCICIO 2
int F,C;
cout << "Tabla de grados Fahrenheit y grados Celsius \n\n";
cout << " FAHRENHEIT    CELSIUS    \n";
for(F = 0; F <= 300; F+=20){
    C = (F-32)*5/9;
    if(F==0){
        cout<<      "      "<<F<<   "      "<<C<<endl;
    }
    else if(F>0 &  F<100){
            cout<<"      "<<F<<"      "<<C<<endl;
    }
    else{
        cout<<"      "<<F<<"      "<<C<<endl;
    }
}
    return 0;
}
