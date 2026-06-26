#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        resultado = n1 + n2;
    } else if (op == '-') {
        resultado = n1 - n2;
    } else if (op == '*') {
        resultado = n1 * n2;
    } else if (op == '/') {
        resultado = n1 / n2;
    }

    printf("Resultado: %.2f\n", resultado);
}