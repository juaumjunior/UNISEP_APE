#include <stdio.h>

void inverter(char texto[]) {
    int tamanho = 0;
    char aux;

    while(texto[tamanho] != '\0') {
        tamanho++;
    }

    for(int i = 0; i < tamanho / 2; i++) {
        aux = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = aux;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    inverter(texto);

    printf("Invertida: %s\n", texto);
}