#include<stdio.h>
int main(){

    //Exibir a soma dos números positivos no intervalo de um a cem.

    //Declaração de varíaveis
    int soma = 0;
    int i;

    //Processamento
    for( i = 1; i <=100; i++){  // O for começa no número 1 e vai até o número 100
        soma = soma + i; // Soma o valor de i ao valor que já está guardado em soma
    }
    //Saída de dados
    printf("A soma dos numeros positivos de 1 a 100:  %d\n",soma);

    return 0;
}