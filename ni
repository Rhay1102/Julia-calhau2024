#include <stdio.h>

int main() {
    int n, i, j, divisoes, primo;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    printf("Números primos entre 1 e %d:\n", n);

    for (i = 2; i <= n; i++) {
        primo = 1;
        divisoes = 0;

        for (j = 2; j <= i / 2; j++) {
            divisoes++;
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            printf("%d ", i);
            printf("(Divisões: %d)\n", divisoes);
        }
    }

    return 0;
}
