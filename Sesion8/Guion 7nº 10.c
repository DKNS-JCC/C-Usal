#include <stdio.h>
#define DIM 7
#define FIL 3
#define COL 4

int main ( ) {
    int *p,i,j;
    int  vector [DIM]= {25,40,55,70,85,100,115};
    int tabla [FIL][COL]={15, 25, 35, 45, 115, 125, 135, 145, 215, 225, 235, 245};

    printf("\n============VECTOR===================\n");
    for (int i=0; i<DIM; i++){
        printf("%d ", *(&vector[i]));
    }
    printf("\n=====================================\n");
    for (int i=0; i<DIM; i++){
        printf("%d ", *(vector+i));
    }
    printf("\n=====================================\n");
    p=vector;
    for (int i=0; i<DIM; i++){
        printf("%d ",*(p+i) );
    }

    printf("\n=============TABLA===================\n");
    for(i=0; i<FIL; i++){
        for(j=0; j<COL; j++){
            printf("%d ", *(&tabla[i][j]));
        }
        printf("\n");
    }
    printf("\n=====================================\n");
    for(i=0; i<FIL; i++){
        for(j=0; j<COL; j++){
            printf("%d ", *(*(tabla+i)));
        }
        printf("\n");
    }


    return 0;

}