#include <stdio.h>

int maior() {
    int n1, n2, n3;
    printf("Digite o primeiro numero.\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero.\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero.\n");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3) {
        return n1;
    } else if (n2 > n1 && n2 > n3) {
        return n2;
    } else {
        return n3;
    }

}

int main() {
    int resultado = maior();
    printf("O maior numero é: %d\n", resultado);
    return 0;
}