#include  <stdio.h>

int temperatura() {
    float temp;
    printf("Digite a temperatura em Celsius.\n");
    scanf("%f", &temp);
    if (temp < 0) {
        printf("A temperatura está abaixo de zero.\n");
    } else if (temp >= 0 && temp <= 100) {
        printf("A temperatura está entre zero e cem graus.\n");
    } else {
        printf("A temperatura está acima de cem graus.\n");
    }
    return 0;
}

int main() {
    temperatura();
    return 0;
}