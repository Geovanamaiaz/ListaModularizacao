#include<stdio.h>
int main(){

    /*Fazer um programa que leia 20 idades de pessoas. Calcule e escreva a idade média deste
grupo*/

   //Declaração de varíaveis
   int idade, soma = 0;
   int i;
   float media_idade = 0;

   //Laço
   for( i = 0; i <= 20; i++){ //Será repetido 20 vezes

    //Entrada de dados
    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);
     
    //Processamento
    soma = soma + idade; //Pega o valor da soma e soma com a idade e guarda novamente na varíavel soma
    media_idade = soma / 20.0;
   } 
   //Saída de dados
   printf("Media da idade das 20 pessoas: %.2f\n",media_idade);
   
   return 0;

}