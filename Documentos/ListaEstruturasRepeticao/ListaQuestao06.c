#include<stdio.h>
int main(){

    /*Fazer um programa que leia um conjunto de idades de pessoas. O final do conjunto de valores
é conhecido através do valor -1. Calcule e escreva a idade média deste conjunto.*/

    //Declaração de varíaveis
    int idade;
    int flag = 1;
    int soma = 0;
    int cont = 0;
    float media = 0;

    //Entrada de dados
    while(flag == 1){
        printf("Digite sua idade: ");
        scanf("%d",&idade);

    //Condicional
       if(idade == -1){
        flag = 0;
       }
    else{
        soma = soma + idade;
        cont = cont + 1;
    }
 }
    media = (float) soma/ cont;

    //Saída de dados 
    printf("A idade média: %.2f\n",media);

    return 0;
}