#include<stdio.h>
int main(){
	int L =2, C = 2, Total, x;
	int E[2][2], M1[2][2]={{1,2},{30,4}};
	int M2[2][2]={{10,20},{30,40}};// Mtotal = {11,22},{60, 44}

void SomarM(int M1[2][2], int M2[2][2],int L, int C, int MSoma[][2]){
	int i, j;
	for (i=0; i<L; i++)
		for (j=0; j<C; j++)
			MSoma[i][j]=M1[i][j]+M2[i][j];
			}
int SomarM2(int M1[2][2], int M2[2][2],int L, int C,int MSoma[2][2], int *T){
	int i, j;
	*T=0;
	for (i=0; i<L; i++)
	for (j=0; j<C; j++){
	MSoma[i][j]=M1[i][j]+M2[i][j];
	*T=*T+MSoma[i][j];}
	return *T;
	}

void Exibir(int Matriz[2][2], int L, int C){
		int i, j;
		for (i=0; i<L; i++)
			for (j=0; j<C; j++){
			printf(" %d ",Matriz[i][j]);
			if (j==C-1)
				printf("\n");}
				}
int F(int M[2][2], int L, int C){
	int Resultado;
	Resultado=M[0][0];
	int i, j;
	for (i=0; i<L; i++)
		for (j=0; j<C; j++)
			if (M[i][j] > Resultado)
				Resultado=M[i][j];
	return Resultado;
}

	
		SomarM(M1,M2,L,C,E);
		Exibir(E,L,C);
		x = SomarM2(M1,M2,L,C,E, &Total);
		printf("o total: %d ", x);
		x = F(M2,L,C);
		printf("\n o resultado: %d ", x);

return 0;
}
