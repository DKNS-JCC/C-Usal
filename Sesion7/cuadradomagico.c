#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main (){
	
	int n;
	int m[MAX][MAX];
	int i,j,k;
	
do{
	
	puts("Introduzca n: ");
	scanf ("%d",&n);
}
while(n<0 || n>MAX);

for (i=0;i<n;i++){
	for (j=0;j<n;j++)
		m[i][j]=-1;
}


i=0;
j=n/2;
m[i][j]=k;

int cand_i, cand_j; //Candidados para proximo valor en f y c


for (k=2;k<=n*n;k++){
	m[i][j]=k;
	cand_i=i-1;	
	if(cand_i==-1){
		cand_i=n-1;
		cand_j=j+1;
	}
	if (cand_j==n)
		cand_j=0;
	
	if(m[cand_i][cand_j]==-1){
	
		i=cand_i;
		j=cand_j;
	}
	else {
	
		i=i+1;
		if(n==i)
			i=0;
	}
}

for (i=0;i<n;i++){
	for (j=0;j<n;j++)
		printf ("%3d",m[i][j]);
		printf("\n");		
}
	
return 0;
}
