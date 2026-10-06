  
  #include<stdio.h>
  /*Construa uma função que, a partir de um vetor de 100 inteiros, possibilite:
  • a digitação dos valores no vetor;
  • imprimir o valor do somatório de seus itens;
  • imprimir a média dos valores fornecidos;
  • substituir por zero todos os valores negativos;
  • substituir por zero todos os valores repetidos (maiores que zero);
  • Criar um menu para acessar os itens anteriores.*/

// Protótipos das funções
void digitar(int vetor[]);
int somatorio(int vetor[]);
float media(int vetor[]);
void zerarNegativos(int vetor[]);
void zerarRepetidos(int vetor[]);


int main() {

    // Declaração do vetor com 100 posições inteiras
    int vetor[100];

    // Declaração da variável que armazenará a opção do menu
    int opcao;

    do {

        // Exibe o menu
        printf("\n===== MENU =====\n");
        printf("1 - Digitar valores\n");
        printf("2 - Somatorio\n");
        printf("3 - Media\n");
        printf("4 - Substituir negativos por zero\n");
        printf("5 - Substituir repetidos por zero\n");
        printf("0 - Sair\n");

        // Lê a opção escolhida pelo usuário
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verifica a opção escolhida
        switch (opcao) {

            case 1:
                // Chama a função digitar e envia o vetor como argumento
                digitar(vetor);
                break;

            case 2:
                // Chama a função somatorio
                printf("Somatorio = %d\n", somatorio(vetor));
                break;

            case 3:
                // Chama a função media
                printf("Media = %.2f\n", media(vetor));
                break;

            case 4:
                // Chama a função para substituir negativos por zero
                zerarNegativos(vetor);
                printf("Valores negativos foram substituidos por zero.\n");
                break;

            case 5:
                // Chama a função para substituir repetidos por zero
                zerarRepetidos(vetor);
                printf("Valores repetidos foram substituidos por zero.\n");
                break;

            case 0:
                // Encerra o programa
                printf("Programa encerrado.\n");
                break;

            default:
                // Caso o usuário escolha uma opção inexistente
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}


// Função para digitar os 100 valores do vetor
void digitar(int vetor[]) {

    // Percorre as 100 posições do vetor
    for (int i = 0; i < 100; i++) {

        // Mostra qual valor deve ser digitado
        printf("Digite um valor %d: ", i + 1);

        // Armazena o valor digitado na posição atual
        scanf("%d", &vetor[i]);
    }
}


// Função para calcular o somatório dos valores
int somatorio(int vetor[]) {

    // Variável que armazenará a soma
    int soma = 0;

    // Percorre as 100 posições do vetor
    for (int i = 0; i < 100; i++) {

        // Soma o valor atual
        soma += vetor[i];
    }

    // Retorna o resultado da soma
    return soma;
}


// Função para calcular a média dos valores
float media(int vetor[]) {

    // Variável que armazenará a soma
    int soma = 0;

    // Percorre as 100 posições do vetor
    for (int i = 0; i < 100; i++) {

        // Soma os valores do vetor
        soma += vetor[i];
    }

    // Calcula e retorna a média
    return (float)soma / 100;
}


// Função para substituir os valores negativos por zero
void zerarNegativos(int vetor[]) {

    // Percorre as 100 posições do vetor
    for (int i = 0; i < 100; i++) {

        // Verifica se o valor é negativo
        if (vetor[i] < 0) {

            // Substitui o valor negativo por zero
            vetor[i] = 0;
        }
    }
}


// Função para substituir valores repetidos maiores que zero por zero
void zerarRepetidos(int vetor[]) {

    // Percorre o vetor
    for (int i = 0; i < 100; i++) {

        // Compara o valor atual com os valores seguintes
        for (int j = i + 1; j < 100; j++) {

            // Verifica se o valor é maior que zero e está repetido
            if (vetor[i] > 0 && vetor[i] == vetor[j]) {

                // Substitui o valor repetido por zero
                vetor[j] = 0;
            }
        }
    }
}