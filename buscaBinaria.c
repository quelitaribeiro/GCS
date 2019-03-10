#include<stdio.h>

int bbinaria (int chave, int inicio, int fim, int vetor[4]) {
	if (fim < inicio)
	return -1;
	else {
		int meio = (inicio + fim)/2;
		if (vetor[meio]==chave)
		return meio;
		else{
			if (vetor[meio] < chave)
			return bbinaria (chave, meio+1, fim, vetor);
			else
			return bbinaria (chave, inicio, meio-1, vetor);
		}
		}						
	}
int main(){
	int teste, chave, inicio, fim, Vetor[4] = {1,2,3,4};
   chave = 4;
    inicio =0;
    fim = 3;
    teste = bbinaria (chave, inicio, fim, Vetor);
   printf("retorne se achou a posicao do numero %i", teste);
   return 0;
}
