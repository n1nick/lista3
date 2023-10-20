#include <stdio.h>

int main() {
    int a, b, operacao, resultado;
    printf("Entre com um número inteiro:\n");
    scanf("%d", &a);
    printf("Entre com outro número inteiro:\n");
    scanf("%d", &b);
    printf("1 - Adição | 2 - Subtração | 3 - Multiplicação | 4 - Divisão\n");
    printf("Qual operação você deseja realizar?\n");
    scanf("%d", &operacao);

    if (operacao == 1 ) {
      resultado = a + b;
      printf("\nO resultado da adição é: %d", resultado);
    } else if (operacao == 2) {
      resultado = a - b;
      printf("\nO resultado da subtração é: %d", resultado);
    } else if (operacao == 3) {
      resultado = a * b;
      printf("\nO resultado da multiplicação é: %d", resultado);
    } else if (operacao == 4) {
      resultado = a / b;
      printf("\nO resultado da divisão é: %d", resultado);
    }
    return 0;
}
