#include <stdio.h>

float media(int vetor[], int tamanho) {
    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (float)soma / tamanho;
}

int main() {
    int v[5] = {10, 20, 30, 40, 50};

    printf("Media = %.2f\n", media(v, 5));

    return 0;
}