#include <stdio.h>

int main() {
    int num, i;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("Fatorial = %lld\n", fatorial);
}