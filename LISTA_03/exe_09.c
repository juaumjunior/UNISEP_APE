#include <stdio.h>

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

        if(v[i] < 0) {
            v[i] = 0;
        }
    }

    printf("Vetor:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}