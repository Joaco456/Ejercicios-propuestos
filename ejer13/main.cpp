#include <iostream>

using namespace std;
void invertir_punteros(int arr[], const int *l){
    int temp;
    for(int i=0;i<*l/2; i++){
        temp=arr[i];
        arr[i]=arr[*l-i-1];
        arr[*l-i-1]=temp;
    }
}

int main()
{
 int l;
 cout<<"Ingrese el tamaño del arreglo que desee: "; cin >> l;
 int arr[l];
 cout<<"Ingrese los numeros del arreglo: "<<endl;
 for(int i=0;i<l;i++){
    cin >> arr[i];

 }
cout<<"El arreglo invertido es: "<<endl;
invertir_punteros(arr,&l);
for(int i = 0;i<l;i++){
    cout<<arr[i]<<endl;
 }
    return 0;
}

