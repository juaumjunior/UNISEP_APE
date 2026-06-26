#include <stdio.h>

int contarVogais(char texto[]) {
    int cont = 0;

    for(int i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == 'a' || texto[i] == 'e' ||
           texto[i] == 'i' || texto[i] == 'o' ||
           texto[i] == 'u' || texto[i] == 'A' ||
           texto[i] == 'E' || texto[i] == 'I' ||
           texto[i] == 'O' || texto[i] == 'U') {
            cont++;
        }
    }

    return cont;
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    printf("Quantidade de vogais: %d\n", contarVogais(texto));
}