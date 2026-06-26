#include <stdio.h>

int main() {
    int v[10], aux;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("Ordem decrescente:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}