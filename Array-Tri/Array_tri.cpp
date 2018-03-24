#include <iostream>
using namespace std;
int main(){
       int n  =0;
       int numeros [4][5][3];
       int filas = sizeof(numeros)/sizeof(numeros[0]);
       int columnas = sizeof(numeros[0])/sizeof(numeros[0][0]);
       int planos = sizeof(numeros[0][0])/sizeof(numeros[0][0][0]);
       for(int i = 0; i<filas; ++i){
           for(int j = 0; j<columnas; ++j){
               for(int k = 0; k<planos; ++k){
                   numeros[i][j][k] = n++;
               }
           }
       }

       cout<<"plano 0 fila 1 columna 1 = "<<numeros[1][1][0]<<endl;
       cout<<"plano 1 fila 1 columna 1 = "<<numeros[1][1][1]<<endl;
       cout<<"plano 2 fila 1 columna 0 = "<<numeros[1][0][2]<<endl;
return 0;
}
