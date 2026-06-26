#include <stdio.h>

int main() {
    int v[6];
    int maior, segundo;

    for(int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    maior = segundo = v[0];

    for(int i = 1; i < 6; i++) {
        if(v[i] > maior) {
            segundo = maior;
            maior = v[i];
        } else if(v[i] > segundo && v[i] != maior) {
            segundo = v[i];
        }
    }

    printf("Segundo maior: %d\n", segundo);
}