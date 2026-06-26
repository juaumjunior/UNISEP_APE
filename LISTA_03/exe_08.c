#include <stdio.h>

int main() {
    int v[10];
    int soma = 0;
    float media;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

        soma += v[i];
    }

    media = (float)soma / 10;

    printf("Valores maiores que a media:\n");

    for(int i = 0; i < 10; i++) {
        if(v[i] > media) {
            printf("%d ", v[i]);
        }
    }

    printf("\n");
}