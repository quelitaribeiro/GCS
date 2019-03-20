#include<stdio.h>
int main(){
	int Placar[4][6];
	int Amigo, Jogo, Pontos, x;
	void IniciaMatriz(int M [4][6], int L, int C){
		int i, j;
		for (i=0; i<L; i++)
		for (j=0; j<C; j++)
		M[i][j]=0;
		//return;
		}
   IniciaMatriz(Placar,4,6);
	void ArmazenaDado(int M[][6], int L, int C, int Dado){
		
		M[L][C]=Dado;
		printf("%d\n", L);
		printf("%d\n", C);
		printf("%d\n", Dado);
		//return;
		}
	printf("digite o número do amigo: \n");
	scanf("%d",&Amigo);
	printf("Digite o número do jogo: \n");
	scanf("%d",&Jogo);
	printf("digite o número dos pontos: \n");
	scanf("%d",&Pontos);
	ArmazenaDado(Placar,Amigo-1,Jogo-1,Pontos);				
	int RetornaDado(int M[][6], int L, int C){
		return M[L][C];}	

	printf("Consulte a pontuação /n Digite o número do Amigo:");
	scanf("%d",&Amigo);
	printf("Consulte a pontuação /n Digite o número do Jogo:");
	scanf("%d",&Jogo);
	printf("Pontos:");
	//scanf("%d",&Pontos);
	x = RetornaDado(Placar,Amigo-1,Jogo-1);
	printf("%d",x);
return 0;
}
