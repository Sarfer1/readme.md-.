#include <stdio.h>

int main() {
    int numero = 12567;
    int inverso = 0;

    while (numero != 0) {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }

    printf("El numero inverso es %d\n", inverso);

    return 0;
}
    