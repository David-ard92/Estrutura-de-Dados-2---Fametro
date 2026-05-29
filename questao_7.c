#include <stdio.h>

void inverter(char *texto) {

    int tamanho = 0;
	 // Conta o tamanho da string
    while (texto[tamanho] != '\0') {
        tamanho++;
    }
	  // Índice do início e do fim
    int inicio = 0;
    int fim = tamanho - 1;
	  // Troca as letras das extremidades
    while (inicio < fim) {

        char aux = texto[inicio];

        texto[inicio] = texto[fim];
        texto[fim] = aux;

        inicio++;
        fim--;
    }
}

int main() {

    char palavra[100];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    inverter(palavra);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
