#include <stdio.h>

int main() {
    int v[10];
    int maiorFreq = 0;
    int maisRepete;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++) {
        int cont = 0;

        for(int j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > maiorFreq) {
            maiorFreq = cont;
            maisRepete = v[i];
        }
    }

    printf("Numero que mais se repete: %d\n", maisRepete);
}