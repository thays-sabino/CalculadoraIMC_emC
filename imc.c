#include <stdio.h>
#include <locale.h> //biblioteca responsável por identificar os caracteres locais

int main(){
    setlocale(LC_ALL, "Portuguese"); //função que habilita caracteres da lingua portuguesa

    float peso, altura, imc;

    printf("\n ============ Calculadora de IMC ============\n\n");

    //função setLocale conflita com ponto, então é preciso usar vírgula:
    printf(" -> Informe os dados separados por vírgula \n\n");

    printf(" Seu peso (KG): ");
    scanf("%f", &peso);
    printf(" Sua altura (metros): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("\n -> Seu IMC é: %.2f\n", imc);

    printf(" -> Classificação: ");

    //Estrutura If Else para a quantidade de opções disponíveis
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso ideal\n\n"); //saltando 2 linhas apenas por estética
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidade Grau I\n\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidade Grau II - Severa\n\n");
    } else { // imc >= 40.0
        printf("Obesidade Grau III - Mórbida\n\n");
    }

    return 0;
}
