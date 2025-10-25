#include <stdio.h>
#include <locale.h> //biblioteca respons�vel por identificar os caracteres locais

int main(){
    setlocale(LC_ALL, "Portuguese"); //fun��o que habilita caracteres da lingua portuguesa

    float peso, altura, imc;

    printf("\n ============ Calculadora de IMC ============\n\n");

    //fun��o setLocale conflita com ponto, ent�o � preciso usar v�rgula:
    printf(" -> Informe os dados separados por v�rgula \n\n");

    printf(" Seu peso (KG): ");
    scanf("%f", &peso);
    printf(" Sua altura (metros): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("\n -> Seu IMC �: %.2f\n", imc);

    printf(" -> Classifica��o: ");

    //Estrutura If Else para a quantidade de op��es dispon�veis
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso ideal\n\n"); //saltando 2 linhas apenas por est�tica
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidade Grau I\n\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidade Grau II - Severa\n\n");
    } else { // imc >= 40.0
        printf("Obesidade Grau III - M�rbida\n\n");
    }

    return 0;
}
