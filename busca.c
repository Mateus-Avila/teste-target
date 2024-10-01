#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], letra;
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 

    printf("\nDigite uma letra que deseja contar: ");
    scanf(" %c", &letra);

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(letra)) {
            contador++;
        }
    }

    if (contador > 0) {
        printf("\nA letra '%c' aparece %d vezes na string.\n", letra, contador);
    } else {
        printf("\nA letra '%c' nao aparece na string.\n", letra);
    }

    return 0;
}
