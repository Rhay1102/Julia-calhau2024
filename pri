#include <stdio.h>

int main() {
    int a, i, eh_primo = 1;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d não é um número primo\n", a);
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo == 1) {
            printf("%d é um número primo\n", a);
        } else {
            printf("%d não é um número primo\n", a);
        }
    }

    return 0;
}
