  #include<stdio.h>
  #include<math.h>

/*Crie um aplicativo que receba o raio de uma esfera (do tipo double) e chame o método volumeEsfera para
calcular e exibir o volume da esfera na tela. Para cálculo do volume deve ser usada a fórmula: volume =
(4.0/3.0)*pi*raio2.*/

   //Função que recebe o raio e calcular o volume da esfera

   double volumeEsfera(double raio){
    double volume;

    //Fórmula vólume = (4.0/3.0) * 3.14 * pow(raio,3);
    volume = (4.0/3.0) * 3.14 * pow(raio,3);

    //Devolve o volume calculado
    return volume;
   }

   int main(){

    //Declaração de varíaveis
    double raio;
    double volume;

    //Pede o valor do usuário
    printf("Digite o raio da esfera: ");
    scanf("%lf",&raio);

    //Chama a função e guarda o resultado
    volume = volumeEsfera(raio);

    //Mostra o resultado
    printf("Volume da esfera: %.2lf\n", volume);

    return 0;
   }
  


    

   

    

  

