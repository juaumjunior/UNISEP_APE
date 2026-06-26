#include <stdio.h>

int par() {
    int num;
    printf("Digite um numero inteiro.\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}


int main() {
    par();
    return 0;
}