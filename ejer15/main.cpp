#include <iostream>

using namespace std;
//EJERCICIO 15
string palindromo(string pal)
    {
        string s;
        for(int i = pal.size()-1;i>=0;i--)
            s += pal[i];
        return s;
    }

int main()
{
string palabra,cambio;
    cout<<"Ingrese una palabra: \n";
    cin>>palabra;
    cambio = palindromo(palabra);
    cout<<cambio<<endl;
    if (palabra==cambio)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}
