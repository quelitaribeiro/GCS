#include <stdio.h>
int main(){
struct TpMed{
char Nome[20];
char Convenio[10],
 Fone[10];
float Pago;
int Retorno; //1 retorno 0 primeira vez
} Consulta;
FILE *Arquivo;
Arquivo = fopen("Consultas.Dat","a+b");

printf("Paciente: ");
gets(Consulta.Nome);
printf("Convenio: ");
gets(Consulta.Convenio);
printf("Telefone: ");
gets(Consulta.Fone);
printf("Valor: ");
scanf("%f",&Consulta.Pago);
printf("Retorno? S/N ");
scanf("%d",&Consulta.Retorno);
int Tamanho=40*sizeof(char)+sizeof(float)+sizeof(int);
fwrite(&Consulta,Tamanho,1,Arquivo);

fseek(Arquivo,2,1);
do {
fread(&Consulta,Tamanho,1,Arquivo);
if (!feof(Arquivo)){
printf("Paciente: %s\n",Consulta.Nome);
printf("Convenio: %s\n",Consulta.Convenio);
printf("Telefone: %s\n",Consulta.Fone);
printf("Valor: %f\n",Consulta.Pago);
printf("Retorno: %d\n",Consulta.Retorno);
printf("***\n\n");}
}
while (!feof(Arquivo));

fclose(Arquivo);
return 0;
}
