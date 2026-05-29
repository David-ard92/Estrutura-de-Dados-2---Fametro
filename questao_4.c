#include <stdio.h>

void multiplicarPorDois(int *numero) {

    *numero = *numero + *numero;

}

int main() {

    int valor;

    printf("Digite um numero:\n");
    scanf("%d", &valor);

    multiplicarPorDois(&valor);

    printf("Resultado: %d\n", valor);

    return 0;
}
