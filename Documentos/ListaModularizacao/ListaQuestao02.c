   #include<stdio.h>

   /*Crie um aplicativo que receba uma temperatura qualquer em Farenheit e apresente seu correspondente
em Celsius por meio de um método. Para o cálculo utilize a seguinte fórmula: Celsius = 5.0/9.0*(f-32)*/

   //Função que calcula temperatura em celsius
   double calcularTemperaturaCelsius (double f){

    //Declara a varíavel que vai armazenar o resultado 
    double celsius;

    //Calcula a temperatura em celsius
    celsius = 5.0 / 9.0 * ( f - 32);

    //Retorna o resultado para o programa principal
    return celsius;
   }

   int main(){

    //Declaração de varíaveis
    double fahrenheit;
    double resultado;

    //Entrada de dados
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%lf",&fahrenheit);

    //Processamento: Chama a função para calcular o celsius
    resultado = calcularTemperaturaCelsius(fahrenheit);

    //Saída de dados
    printf("Temperatura em celsius: %.2f\n", resultado);

    return 0;
   }

