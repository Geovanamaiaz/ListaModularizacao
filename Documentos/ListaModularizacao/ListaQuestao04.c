   #include<stdio.h>
   #include<stdlib.h>
   /*Crie um método chamado aleatório que sorteie uma determinada quantidade de números de acordo com
um argumento. O usuário deve informar a quantidade de números a ser gerada e a faixa de números
válidos para o sorteio, por exemplo: se o usuário informar os argumentos 4 e 100 (aleatório(4,100)),
devem ser gerados quatro números aleatórios entre 1 e 100.*/

   //Função que recebe a quantidade e limite
   void(aleatorio)(int quantidade, int limite){
     int numero;

    // Repetir até a quantidade de numeros informada
    for (int i = 0; i < quantidade; i++){

        // função rand() da biblioteca stdlib.h gera um número inteiro aleatório
       // % limite calcula o resto da divisão desse número pelo limite
      // O resto sempre ficará entre 0 e limite - 1
     // + 1 faz o resultado começar em 1
    // O número gerado ficará entre 1 e o limite
        
        numero = rand() % limite + 1;

        // Mostra o número sorteado
        printf("%d ", numero);
    }
}

  int main()
{
    // Invoca a função passando diretamente os valores 4 e 100
    // 4 = quantidade de números
    // 100 = limite máximo
    aleatorio(4, 100);

    return 0;
}

   