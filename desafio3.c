#include <stdio.h>

int main() {
    int numero, tabuada;
    printf("Entre com um número inteiro:\n");
  scanf("%d", &numero);

  for(int i = 1; i <= 10; i++) {
    tabuada = i * numero;
    printf("\n%dx%d = %d\n", numero, i, tabuada);
  }
    return 0;
}
