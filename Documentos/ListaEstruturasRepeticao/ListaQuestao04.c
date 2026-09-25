#include<stdio.h>
int main(){

    /*Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. Caso
contrário solicitar novamente apenas o segundo valor*/

   //Declaração de varíavel
   int valor1, valor2;
   
   //Entrada de dados
   printf("Digite o primeiro valor: ");
   scanf("%d",&valor1);

   printf("Digite o segundo valor: ");
   scanf("%d",&valor2);

   //Processamento
    while(valor2 <= valor1){ //Enquanto o segundo valor for menor ou igual ao primeiro, continue pedindo o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d",&valor2);
   }
   //Saída de dados
   printf("Primeiro valor: %d\n",valor1);
   printf("O segundo valor: %d\n",valor2);

   return 0;
}