#include<stdio.h>
/*
* Retorna o fatorial do número 
* passado como parâmetro
*
* Fórmula:
* n! = n(n-1)!
*
*/
int calculaFatorial(int num)
{
    if(num <= 1) return 1; 
    else return(num * calculaFatorial(num-1));
}
/*
* Retorna o binomial do número 
* passado como parâmetro
*
* Fórmula:
*    n!
* --------
* p!(n-p)!
*
*/
int calculaBinomial(int n, int p)
{
    return (calculaFatorial(n) / (calculaFatorial(p)*calculaFatorial(n-p)));
}



int main()
{
    int n,p;
    n = 10;
    p = 7;
    
    // Imprime o binomial de n sobre p
    printf("O binomial de %d sobre %d eh: %d\n", n, p, calculaBinomial(n,p));
    
    return(0);
}

