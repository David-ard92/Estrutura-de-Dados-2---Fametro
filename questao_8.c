#include <stdio.h>

void operacoes(float x, float y, float *mais, float *menos,
               float *vezes, float *dividir) {

    *mais = x + y;
    *menos = x - y;
    *vezes = x * y;
    *dividir = x / y;
}

int main() {

    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    operacoes(num1, num2, &soma, &subtracao, &multiplicacao, &divisao);

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
