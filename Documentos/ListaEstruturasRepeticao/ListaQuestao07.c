#include<stdio.h>
int main(){

    /*Fazer um programa que leia um conjunto de alturas de pessoas. O final do conjunto de valores
é conhecido através do valor zero. Escreva a menor altura deste conjunto.*/

 
    // Declaração de variáveis
    float altura; //Varíavel que guarda a altura
    float menor_altura; //Varíavel que encontra a menor altura
    int flag = 1; // Varíavel de controle que inicializa com 1 e finaliza com 0
    int cont = 0; //Contador que conta quantas alturas válidas foram digitadas

    // Entrada de dados
    while(flag == 1){ //Enquanto flag for 1, o programa continua lendo as alturas

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        //Condicional
        if(altura == 0){ //Se a altura digitada for igual zero
            flag = 0; //Finaliza-se o programa
        }

        if(flag == 1 && cont == 0){ // Verifica se não foi digitado 0 para continuar o loop e se o contador está em 0
            menor_altura = altura; // Pegar o valor que está em altura e colocar dentro de menor_altura.
        }

        if(flag == 1 && altura < menor_altura){ //verifica se o loop deve continuar e verifica se a altura atual é menor que a menor altura encontrada anteriormente.
            menor_altura = altura; //Substitui a menor altura anterior pela altura atual, que é menor
        }
        if(flag == 1){ //Se a flag é igual a 1 o loop continua
            cont++; //Aumenta o contador em 1 para contar a altura digitada
        }
    }

    // Saída de dados
    printf("A menor altura: %.2f\n", menor_altura);

    return 0;
}