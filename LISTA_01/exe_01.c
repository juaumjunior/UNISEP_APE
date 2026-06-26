#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 % n2 == 0) {
        printf("O primeiro numero eh multiplo do segundo.\n");
    } else {
        printf("O primeiro numero nao eh multiplo do segundo.\n");
    }
}