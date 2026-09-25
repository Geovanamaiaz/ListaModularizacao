#include <stdio.h>
int main(){

    //Exibir o produto dos números inteiros positivos no intervalo de um a cem.

    //Declaração de varíaveis
    int produto = 1; //Inicializa em 1 a varíavel do produto
    int i;

    //Processamento
    for(i = 1; i <=100; i++){    // O for começa no 1 e vai até o número 100
        produto = produto * i;  //Pegar o valor que está em produto, multiplicar pelo valor de i e guarda o resultado novamente em produto.
    }

    //Saída de dados
    printf("O produto dos numeros positivos de 1 a 100: %d\n", produto);

    return 0;
}