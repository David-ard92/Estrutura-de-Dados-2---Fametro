#include <stdio.h>

int main() {

    int numero;
    int *ponteiro;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    ponteiro = &numero;

    printf("Numero digitado: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Endereco guardado no ponteiro: %p\n", ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
