/*

ATIVIDADE: Identificar e implementar ajustes (moelhorias) no c�digo dado presenvando o objetivo inciial.
--------------------------------------------------------------------------------------------------------

Na cidade TemQueFazerN�o? as crian�as costumam brincar com um jogo (de dois jogadores) onde:
(1) um jogador A define uma sequencia de 10 letras usando: G, R e B (exemplo: G G G R B R B B B R);
(2) um jogador B pode ler a sequencia quantas vezes quiser;
(3) o jogador B tamb�m pode dizer uma das letras e obter em quais posi��es a letra dada se encontra na sequencia;
(4) o jogador B tamb�m pode dar uma posi��o e saber qual letra ocupa a posi��o na sequencia;
(5) como objetivo final do jogo o jogador B deve dizer a sequencia de letras, obtendo um ponto para cada acerto.
Escrever programa para automatizar o jogo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

  char Sequencia[10],Letra;
  int Opcao, Posicao, Pontos, SqDefinida;

  system("color 80"); // Cor de fundo cinza 8, e cor de texto preta 0.
  SqDefinida=0; // Somente pode haver acesso as opcoes 2, 3, 4 e 5 depois da sequencia ser definida.  Esta variavel controla estes acessos.

  do
    {
    //Exibicao de menu e leitura da opcao.
	system("cls");
	printf("\n\n >>> Jogo das Letras GRB <<< \n\n");
	printf("1 - Definir Sequencia \n");
	printf("2 - Ver Sequencia \n");
	printf("3 - Qual Posicao da Letra \n");
	printf("4 - Qual Letra da Posicao \n");
	printf("5 - Jogar: Descobrir Sequencia \n");
	printf("6 - Sair \n\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&Opcao);

    int Cont;
    switch (Opcao){

      case 1: // Defini��o da Sequencia
	    Cont=0;
	    system("cls");
	    printf("\n\n >>> Jogo das Letras GRB <<< ");
	    printf("\n\n  >>  Definir Sequencia  << \n\n");
	    do{
	      printf("\nDigite a %da letra da sequencia: ",Cont+1);
  	      scanf(" %c",&Letra);
  	      fflush(stdin);
  	      Letra=toupper(Letra);
	      if ((Letra=='G')||(Letra=='R')||(Letra=='B')){
	        Sequencia[Cont]=Letra;
	        Cont=Cont+1;}
  	      else
    	    printf("\n ERRO: Letra Invalida! \7\n");}
	    while (Cont<10);
	    SqDefinida=1;
	    break;

	  case 2: // Exibi��o da Sequencia
	    if (SqDefinida){
	      system("cls");
	      printf("\n\n >>> Jogo das Letras GRB <<< ");
	      printf("\n\n  >>   Exibir Sequencia  << \n\n");
	  	  printf("Os elementos da sequencia sao: \n\n");
          for (Cont=0; Cont<=9; Cont++)
	        printf(" (%d) %c \n",Cont+1,Sequencia[Cont]);}
	    else
	      printf("\n\n ERRO: Sequencia de letras ainda nao definida! \7\n\n");
	    system("pause");
		break;

	  case 3: // Qual Posi��o da Letra
	    if (SqDefinida){
	      system("cls");
	      printf("\n\n >>> Jogo das Letras GRB <<< ");
	      printf("\n\n  >>  Posicao da  Letra  << \n");
		  do{
 	  	    printf("\n De qual letra deseja saber as posicoes? ");
  	        scanf(" %c",&Letra);
  	        fflush(stdin);
  	        Letra=toupper(Letra);
	        if ((Letra!='G')&&(Letra!='R')&&(Letra!='B')){
    	      printf("\n ERRO: Letra Invalida! \7\n");
	    	system("pause");}}
		  while ((Letra!='G')&&(Letra!='R')&&(Letra!='B'));
		  printf("\n As posicoes da letra %c sao: ",Letra);
		  for (Cont=0; Cont<10; Cont++)
  		    if (Letra == Sequencia[Cont])
    		  printf("%d ",Cont+1);}
    	else
	      printf("\n\n ERRO: Sequencia de letras ainda nao definida! \7\n\n");
	    system("pause");
		break;

	  case 4: // Qual Letra da Posicao
	    if (SqDefinida){
	      system("cls");
	      printf("\n\n >>> Jogo das Letras GRB <<< ");
	      printf("\n\n  >>  Letra  da Posicao  << \n");
		  do{
 	  	    printf("\n De qual posicao deseja saber as letras? ");
  	        scanf("%d",&Posicao);
  	        fflush(stdin);
	        if ((Posicao<0)||(Posicao>9)){
    	      printf("\n ERRO: Posicao Invalida! \7\n");
	    	  system("pause");}}
		  while ((Posicao<0)||(Posicao>9));
		  printf("\n A letra da posicao %d dada eh: %c.",Posicao,Sequencia[Posicao-1]);}
	    else
	      printf("\n\n ERRO: Sequencia de letras ainda nao definida! \7\n\n");
	    system("pause");
		break;

	  case 5: // Jogar
	    if (SqDefinida){
	      system("cls");
	      printf("\n\n >>> Jogo das Letras GRB <<< ");
	      printf("\n\n  >>    Obter  Pontos    << \n");
		  Pontos=0;
		  for (Cont=0; Cont<=9; Cont++){
  		  	do{
 	  	  		printf("\n Qual a %da letra da sequencia? ", Cont+1);
  	      		scanf(" %c",&Letra);
  	      		fflush(stdin);
  	      		Letra=toupper(Letra);
	     		if ((Letra!='G')&&(Letra!='R')&&(Letra!='B')){
    	    		printf("\n ERRO: Letra Invalida! \7\n");
	    			system("pause");}}
			while ((Letra!='G')&&(Letra!='R')&&(Letra!='B'));
  			if (Letra==Sequencia[Cont])
    			Pontos=Pontos+1;}
		  printf("Pontuacao obtida: %d. \n\n",Pontos);}
		else
	      printf("\n\n ERRO: Sequencia de letras ainda nao definida! \7\n\n");
	    system("pause");
		break;

	  case 6:
	    break;

	  default:
	    printf("\n ERRO: Opcao Invalida! \7\n");
		break;}
   }
  while (Opcao!=6);

	return 0;
}
