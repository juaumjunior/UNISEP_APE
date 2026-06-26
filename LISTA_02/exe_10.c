#include <stdio.h>

int main() {
    int inicio, fim, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &inicio);

    printf("Digite o segundo numero: ");
    scanf("%d", &fim);

    if(inicio < fim) {
        for(i = inicio; i <= fim; i++) {
            printf("%d\n", i);
        }
    } else {
        for(i = inicio; i >= fim; i--) {
            printf("%d\n", i);
        }
    }
}