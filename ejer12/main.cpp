#include <iostream>

using namespace std;
//EJERCICIO 12
void invertir_arreglo(int arr[],int lenght){
    int temp;
    for( int i = 0; i<(lenght/2); i++){
        temp = arr[i];
        arr[i] = arr[lenght-i-1];
        arr[lenght-i-1] = temp;
    }
    for(int i=0;i<lenght;i++){
        cout<<i<<"->"<<arr[i]<<endl;
    }
    }
int main()
{
int n;
    cout << "Ingrese el numero de elementos: " ; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout <<"Ingresar valor: " ; cin >> arr[i];
    }
    invertir_arreglo(arr,n);
    return 0;
}
