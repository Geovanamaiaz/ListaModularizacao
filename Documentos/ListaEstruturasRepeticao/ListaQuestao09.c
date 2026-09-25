#include<stdio.h>
int main(){

    /*Fazer um programa que leia a nota final de 50 alunos e escreva o total de aprovados. É
considerado aprovado o aluno com nota final maior ou igual a 6*/

    //Declaração de varíaveis
    float nota; //variavel que guarda as notas
    int total_aprovados = 0; //Varíavel que guarda o total de aprovados
    int i = 1; //Contador inicia em 1

    //Entrada de dados e laço for
    for(i = 1; i <= 50; i++){ //Inicia no aluno 1 e repete até o aluno 50
        printf("Digite a nota final do aluno(%d): ",i);
        scanf("%f",&nota);

    //Condicional
    if(nota >= 6.0){ //Verifica se a nota é maior ou igual a 6
        total_aprovados ++; //Conta mais um aluno aprovado
    }
    //Saída de dados
    printf("Total de aprovados: %d\n",total_aprovados);

    }
     return 0;
}
