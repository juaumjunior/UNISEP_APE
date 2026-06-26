#include <stdio.h>

int quadrado() {
    int num;
    printf("Digite um numero inteiro.\n");
    scanf("%d", &num);
    return num * num;
}

int main() {
    int resultado = quadrado();
    printf("O quadrado do numero é: %d\n", resultado);
    return 0;
}