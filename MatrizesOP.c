#include<stdio.h>
int A[3][3], B [3][3], E[3][3];
int main(){
	
void Exibir(int Matriz[3][3], int L, int C)
{
int i, j;
for (i=0; i<L; i++)
	for (j=0; j<C; j++){
		printf(" %d ",Matriz[i][j]);
		if (j==C-1)
		printf("\n");
		}
		return;
}
Exibir(A,3,3);
printf("\n");
Exibir(B,3,3);

void SomarM(int M1[][3], int M2[][3],int L, int C, int MSoma[][3]){
	int i, j;
	for (i=0; i<L; i++)
		for (j=0; j<C; j++)
			MSoma[i][j]=M1[i][j]+M2[i][j];
	return;
}

SomarM(A,B,3,3,E);
return 0;
}
	
