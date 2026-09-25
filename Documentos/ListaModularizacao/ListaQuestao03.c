  #include <stdio.h>
  
   /*Crie um aplicativo que faça a contagem regressiva de um número inteiro informado pelo usuário. O
usuário deve informar também o espaço de tempo entre cada contagem (em segundos). Controle o tempo
com um método tempo() contido em outra classe. Crie uma nova classe para esse método do tempo()
ou aproveite do exemplo 3.*/

    // unsigned = a variável não pode armazenar números negativos
   // long long permite armazenar números inteiros muito grandes
  // contadorTempo é a variável usada que vai guardar o resultado
   unsigned long long contadorTempo = 0;

  // Protótipo da função tempo_abstrato()
  void tempo_abstrato(int segundos);

  int main() {

  // Declaração das variáveis
  int num;       // Número inicial da contagem
  int intervalo; // Tempo entre cada número da contagem

  // Entrada de dados
  printf("Digite o numero inicial: ");
  scanf("%d", &num);

  printf("Digite o intervalo entre cada contagem: ");
  scanf("%d", &intervalo);

  // Laço para contar o intervalo (número ... 0)
    for (int i = num; i >= 0; i--) {

      printf("%d\n", i);

        if (i > 0) {

          tempo_abstrato(intervalo);

        } else {

          printf("MORRA!!");
        }
    }

    return 0;
}

   // Simula o tempo informado pelo usuário
   void tempo_abstrato(int segundos) {

    // O tempo de espera depende da máquina
    for (int s = 0; s < segundos; s++) {

        // Faz várias repetições para simular a passagem do tempo
        for (long long contador = 0; contador < 3000000; contador++) {

            contadorTempo += contador % 2;
        }
    }
}


