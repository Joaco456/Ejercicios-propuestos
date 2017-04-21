#include <iostream>

using namespace std;
//EJERCICO 4(FUNCION)
/*int potencia(int base, int exponente){
    int resultado = 1;
    for(int i = 0; i<exponente; i++)
        resultado *= base;
    return resultado;
}
*/

//EJERCICIO 7(FUNCION)
/*void intercambiar(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y =  temp;
}
*/

//EJERCICIO 8(FUNCION)
/*void intercambiar_con_punteros(int *x, int *y, int *temp){
    *temp = *x;
    *x = *y;
    *y = *temp;
}
*/

//EJERCICIO 11(FUNCION)
/*void multiplicar_matrices(){
    int matrizA[3][2]= {{1,2},{3,4},{5,6}};
    int matrizB[2][3]= {{2,3,4},{4,5,6}};
    int producto[3][3]= {{0,0,0},{0,0,0},{0,0,0}};

    for(int f = 0; f<3; f++){
        for(int c=0; c<3; c++){
            for(int m = 0; m<2; m++){
                producto[f][c] += matrizA[f][m] * matrizB[m][c];
             }
            cout << producto[f][c] << "  ";
        }
        cout << "\n";
    }
*/

//EJERCICIO 12(FUNCION)
/*void invertir_arreglo(int arr[],int lenght){
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
*/

//EJERCICIO 13(FUNCION)
/*void invertir_arreglo_punteros(int *arr[],int l)
{
    int temp,i=l-1,i=0;
    if(l!=2)
    {
        while(i<=l/2 and i>=0)
        {
            temp=*l[i];
            *arr[i]=*l[i+i];
            *arr[i+i]=temp;
            i-=2;
            i++;
        }
    }
    else
    {
        temp=*arr[0];
        *arr[0]=*arr[1];
        *arr[1]=temp;
    }
}
*/

//EJERCICIO 14(FUNCION)
/*int suma(int arr[], int l, int &sum){
    if(l==-1){
        return sum;
    sum += arr[l];
    return suma(arr,l-1,sum);
    }
}
*/

//EJERCICIO 15(FUNCION)
/*bool palindrome(char p[]){
    int i=0,a=0,b;
    while(p[i]!='\0')
    {
        i++;
    }
    i--;
    b=i;
    for(int y=0;y<b/2;y++)
    {
        if(p[a]!=p[i])
            return false;
        i--;
        a++;
    }
    return true;
}
*/
int main()
{
//EJERCICIIO 1
    float milla = 0, kilometro;
    cout << "Ingresar el numero de millas: " ; cin >> milla;
    kilometro = milla*1.60934;
    cout << "Su valor en kilometros es: " <<kilometro<<endl;


    //EJERCICIO 2
    /*int F,C;
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
    */

    //EJERCICIO 3
    /*int numero;
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
    */

    //EJERCICIO 4
    /*int base, exponente;
    cout <<"Ingrese la base:  "; cin >> base;
    cout <<"Ingrese el exponente:  "; cin >> exponente;
    cout << "El resultado es: " << potencia(base,exponente);
    */

    //EJERCICIO 5
    /*int numero;
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
    */

    //EJERCICIO 6
    /*char a;
    int x,y,resultado;
    cout<<"Ingrese el operador: "; cin>>a;
    switch(a){
        case '+':
            cout<<"Ingrese su 1er y 2do operando: "; cin>>x>>y;
            resultado = x+y;
            cout<<resultado;break;
        case '*':
            cout<<"Ingrese si 1er y 2do operando: "; cin>>x>>y;
            resultado = x*y;
            cout<<resultado;break;
    }
    */

    //EJERCICIO 7
    /*int x;
    int y;
    cout << "El valor de x es: " ; cin >> x;
    cout << "El valor de y es: " ; cin >> y;
    intercambiar(x,y);
    cout << "El valor de x ahora es: " <<x<<endl;
    cout << "El valor de y ahora es: " <<y<<endl;
    */

    //EJERCICIO 8
    /*int x;
    int y;
    int temp;
    cout << "El valor de x es: " ; cin >> x;
    cout << "El valor de y es: " ; cin >> y;
    intercambiar_con_punteros(&x,&y,&temp);
    cout << "El valor de x ahora es: " <<x<<endl;
    cout << "El valor de y ahora es: " <<y<<endl;
    */

    //EJERCICIO 9
    /*int j, temp,length=5,arr[]={4,3,2,1,5};
    cout<<"La lista EN DESORDEN: \n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
	for (int i=0;i<length;i++)
    {
		j = i;
		while (j>0 & arr[j]<arr[j-1])
            {
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
            }
	}
	cout<<"La lista EN ORDEN: \n";
	for (int i=0;i<length;i++)
        {
            cout<<arr[i]<<endl;
        }
    */

    //EJERCICIO 10
    //NO ME SALE

    //EJERCICIO 11
    /* multiplicar_matrices(); */

    //EJERCICO 12
    /*int n;
    cout << "Ingrese el numero de elementos: " ; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout <<"Ingresar valor: " ; cin >> arr[i];
    }
    invertir_arreglo(arr,n);
    */

    //EJERCICIO 13
    //NO ME SALE

    //EJERCICIO 14
    /*int l,sum =0;
    cout<<"Ingrese la longitud del arreglo: ";cin >>l;
    int arr[l];
    cout<<"Ingrese los elementos\n";
    for(int i=0;i<l;i++)
        cin>>arr[i];
    cout<<"La suma de los elementos de la lista es: "<<suma(arr,l-1,sum)<<endl;
    */

    //EJERCICIO 15
    /*char p[50];
    cout<<"Ingrese una palabra: \n"; cin>>p;
    cout<<palindrome(p)<<endl;
    */


    return 0;
}
