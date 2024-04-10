// inclusão de bibliotecas
#include <stdio.h>
#include <stdbool.h>

// inclusão de funções
#include "limpa.h"
#include "inverte.h"
#include "fib_ite.h"
#include "fib_rec.h"

// função principal
int main(void) {
    int escolha;
    bool running = true;

    limpar_console();
    printf("ALGORITMOS COM RECURSIVIDADE.\n\n");
    while (running) {
        printf("Escolha o algoritmo que deseja executar:\n");
        printf("1 - Inverter vetor.\n");
        printf("2 - Fibonacci iterativo.\n");
        printf("3 - Fibonacci recursivo.\n");
        printf("0 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (0 > escolha | escolha > 3) {
            limpar_console();
            printf("Escolha inválida, tente novamente.");
            continue;
        }

        limpar_console();
        switch(escolha){
            case 1:
                principal_inverte();
                break;
            case 2:
                principal_fib_ite();
                break;
            case 3:
                principal_fib_rec();
                break;
            case 0:
                printf("Adeus!\n");
                running = false;
                break;
        }
    }
}