#include <stdio.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (primo(n)) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }
    return 0;
}