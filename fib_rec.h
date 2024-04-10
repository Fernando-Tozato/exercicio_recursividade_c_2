#include <stdio.h>
#include <stdlib.h>

long fib_rec(int n) {
    if (n <= 1){
        return n;
    } else {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

void principal_fib_rec() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    system("clear");
    for (int i = 0; i <= n; i++) {
        printf("| %ld |", fib_rec(i));
    }

    printf("\n\n\n");
}

// complexidade O(n^n)
