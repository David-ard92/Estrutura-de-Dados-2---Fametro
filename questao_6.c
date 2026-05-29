#include <stdio.h>

void contar(char *texto, int *vogais, int *consoantes) {

    int i = 0;

    *vogais = 0;
    *consoantes = 0;
		
    // Percorre a string até o final
    while (texto[i] != '\0') {
			 // Guarda a letra atual
        char letra = texto[i];

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
             (*vogais)++;

        } else {

            (*consoantes)++;
        }

        i++;
    }
}

int main() {

    char palavra[100];
    int vogais, consoantes;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    contar(palavra, &vogais, &consoantes);

    printf("Palavra: %s\n", palavra);
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
