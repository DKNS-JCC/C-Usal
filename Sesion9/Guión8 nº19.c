#include <stdio.h>
#include <stdlib.h>

int mcd (int, int);
int mcm (int, int);

int main (void) {
    int n1,n2;
    do{
        do{
            printf("Introduzca un numero: ");
            scanf("%d", &n1);
        }
        while (n1<=0);
        do{
            printf("Introduzca otro numero: ");
            scanf("%d", &n2);
        }
        while (n2<=0);
    if(n1<n2)
        printf("N1 debe ser mayor que N2\n");
    }
    while (n1<n2);

    printf("El MCD de %d y %d es %d", n1,n2,mcd(n1,n2));
    printf("\nEl MCM de %d y %d es %d", n1,n2,mcm(n1,n2));
    return 0;
}

int mcd (int n1,int n2){
    int c1,c2,i,res;
        for (i=n1;i>0;i--){
            c1=n1%i;
            c2=n2%i;
            if (c1==0 && c2==0)
                break;
        }   
    return i;
}

int mcm (int fn1,int fn2){
    int i;
       for(i=1;i<fn1;i++){
            if (((fn2*i)%fn1)==0)
            {
                break;
            }
       } 
    return fn2*i;
}