#include <stdio.h>
#include <stdlib.h>

void principal_fib_ite() {
    int n;
    long f1 = 0, f2 = 1, f3;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    system("clear");
    printf("| 0 || 1 |");
    for (int i = 2; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("| %ld |", f3);
    }

    printf("\n\n\n");
}

// complexidade = O(n)
