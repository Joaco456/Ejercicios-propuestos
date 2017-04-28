#include <iostream>

using namespace std;
//EJERCICIO 14
int suma(int arr[], int l, int &sum){
    if(l==-1){
        return sum;
    sum += arr[l];
    return suma(arr,l-1,sum);
    }
}
int main()
{
int l,sum =0;
cout<<"Ingrese la longitud del arreglo: ";cin >>l;
int arr[l];
cout<<"Ingrese los elementos\n";
for(int i=0;i<l;i++){
    cin>>arr[i];
}
l--;
cout<<"La suma de los elementos de la lista es: "<<suma(arr,l,sum)<<endl;
return 0;
}
