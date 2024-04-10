#include <stdio.h>
#include <stdlib.h>

void inverte(int vet[], int n, int i) {
    if (n == 1) {
        printf("| %d |", vet[i]);
    } else {
        inverte(vet, n - 1, i + 1);
        printf("| %d |", vet[i]);
    }
}

void principal_inverte() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        system("clear");
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    system("clear");
    printf("Vetor invertido: ");
    inverte(vet, n, 0);
    printf("\n\n\n");
}

// complexidade = O(n)
