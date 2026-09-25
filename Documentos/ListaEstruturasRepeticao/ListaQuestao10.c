#include<stdio.h>
int main(){

    /*Construa um algoritmo que leia um número inteiro N e imprima o mesmo na ordem inversa:
exemplo: dado 23457, a saída será 75432*/

   //Declaração de varíaveis
   int N; //Varíavel guarda número inteiro
   int inverso = 0; //Guarda o numero inteiro invertido
   int resto ; //Resto da divisão do valor 23457

   //Entrada de dados
   printf("Digite um numero inteiro: ");
   scanf("%d",&N);

   //Condicional
   while(N > 0){ //Enquanto número for maior que 0  loop continua
      resto = N % 10; // Resto da divisão do numero 23457
      inverso = inverso * 10 + resto;
      N = N/10;
   }
   //Saída de dados
   printf("O número invertido: %d\n",inverso);

   return 0;
}
