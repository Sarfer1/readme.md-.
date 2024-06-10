#include <stdio.h>
    int main() {
        printf("Si el numero es divisible para 2 y no hay residuo es primo");
        int h = 2;
        int p = 3;
        int u = 10;
        int primo = h% u;
        int noprimo = u% p;
        
        for(int i = 0; i < 1; i = primo = noprimo) {
            printf("El numero primo es %d\n", primo);
            printf("El numero no es primo y residuo %d\n", noprimo);

            return 0;
        }

        }
    