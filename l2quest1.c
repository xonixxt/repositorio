#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("%d é maior que 10.\n", numero);
    } else {
        printf("%d não é maior que 10.\n", numero);
    }

    return 0;
}
