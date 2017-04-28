#include <iostream>

using namespace std;
//EJERCICIO 7
void intercambiar(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y =  temp;
}
int main()
{
int x;
int y;
cout << "El valor de x es: " ; cin >> x;
cout << "El valor de y es: " ; cin >> y;
intercambiar(x,y);
cout << "El valor de x ahora es: " <<x<<endl;
cout << "El valor de y ahora es: " <<y<<endl;

    return 0;
}
