#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("%d � maior que 10.\n", numero);
    } else {
        printf("%d n�o � maior que 10.\n", numero);
    }

    return 0;
}
