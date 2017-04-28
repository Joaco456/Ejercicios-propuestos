#include <iostream>

using namespace std;
//EJERCICIO 11
void multiplicar_matrices(){
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
int main()
{
 multiplicar_matrices();
    return 0;
}
