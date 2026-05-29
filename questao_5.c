#include <stdio.h>

void copiar(char *texto1, char *texto2) {

    int i = 0;

    while (texto1[i] != '\0') {
        texto2[i] = texto1[i];
        i++;
    }

    texto2[i] = '\0';
}

int main() {

    char palavra1[100];
    char palavra2[100];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra1);

    copiar(palavra1, palavra2);

    printf("Original: %s\n", palavra1);
    printf("Copia: %s\n", palavra2);

    return 0;
}
