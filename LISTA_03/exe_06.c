#include <stdio.h>

int main() {
    int v[10];
    int positivos = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

        if(v[i] > 0) {
            positivos++;
        }
    }

    printf("Quantidade de positivos: %d\n", positivos);
}