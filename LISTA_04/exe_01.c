#include <stdio.h>

int soma(int a, int b) {
    printf("Digigte o primeiro numero.\n");
    scanf("%d", &a);
    printf("Digite o segundo numero.\n");
    scanf("%d", &b);
    return a + b;
}



int main() {

    int resultado = soma(0, 0);
    printf("O resultado da soma é: %d\n", resultado);
    return 0;
}