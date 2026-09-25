#include<stdio.h>
int main (){

    //Fazer um algoritmo para achar o fatorial de um número N

    //Declaração de varíaveis
    int N; //varíavel que guarda o número
    int i = 1; //Contador inicia em 1
    int fatorial = 1; //Fatorial iniciar em 1 pra fazer a multiplicação 

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d",&N);

    //Condicional
    while(i <= N){ //Enquanto i for maior ou igual a n continua o loop
        fatorial = fatorial * i; //fatorial multiplica pelo valor atual do contador
        i++; //Aumenta +1 no contador
    }

    //Saída de dados
    printf("Fatorial: %d\n",fatorial);

    return 0;
}  