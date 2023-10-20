#include <stdio.h>

int main() {
    int numero, i, fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

  for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", numero, fatorial);

    return 0;
}
