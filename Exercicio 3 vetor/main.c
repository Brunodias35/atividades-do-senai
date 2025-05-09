#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[5];
    int j ;
    int numero;
printf("digite um numero: ");
    scanf("%d",&numero);
    for (j = 4;j >= 0;j--){
    vetor[j] = numero % 10;
    numero /= 10;
    }
    for (j = 0;j < 5 ;j++){
    printf("%d",vetor[j]);
    }
    return 0;
}
