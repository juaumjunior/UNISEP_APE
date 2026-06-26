#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma = %d\n", soma);
}