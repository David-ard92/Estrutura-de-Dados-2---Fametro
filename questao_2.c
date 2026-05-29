#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    
    for (int i = 0; i < tamanho; i++) {

        if (i == 0) {
            *maior = array[i];
            *menor = array[i];
        }

        if (array[i] > *maior) {
            *maior = array[i];
        }

        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}

int main() {
    int numeros[5];
    int maior, menor;

    printf("Digite 5 numeros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    encontrarMaiorMenor(numeros, 5, &maior, &menor);

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
