#include <stdio.h>
int main(){

    /*Elaborar um programa que apresente no final o somatório dos valores pares existentes entre
1 e 500*/

   //Declaração de varíaveis
   int somatorio = 0;
   int i;

   //Processamento
   for(i = 1; i <=500; i++){//O laço inicia com 0 e vai até 500
    if(i % 2 == 0){
       somatorio = somatorio + i; // Pega o valor do somatorio e soma pelo valor de i e guarda o resultado novamente no somatório
     }
   }
   //Saída de dados
   printf("O somatório dos valores pares existentes: %d\n",somatorio); //62.750
   return 0;
}