#include <stdio.h>
#include <stdlib.h>

int bordematriz (int (*)[5], int, int);

int main (){
    int sumat;
    int matriz[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    sumat=bordematriz(matriz, 5,5);
    printf("sumat=%d",sumat);
    return 0;
}

int bordematriz (int (*mat)[5],int f,int c){
    int i,j,suma=0;
    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            if (i==0 || i==f-1 || j==0 || j==c-1){
                suma=suma+mat[i][j];
            }
        }
    }
    return suma;
}