#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Função recursiva para o movimento da Torre
void movimentoTorre(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    printf("Direita: %d casa(s)\n", atual);
    movimentoTorre(casas, atual + 1);
}

// Função recursiva para o movimento do Bispo
void movimentoBispo(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    printf("Cima, Direita: %d casa(s)\n", atual);
    movimentoBispo(casas, atual + 1);
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    printf("Esquerda: %d casa(s)\n", atual);
    movimentoRainha(casas, atual + 1);
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5, 1);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre:\n");
    movimentoTorre(5, 1);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8, 1);
    printf("\n");



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo:\n");
    int movimentoCavalo = 1;

    while (movimentoCavalo--)
    {
        for(int x = 0; x < 2; x++){
            printf("Cima\n");
        } 
        printf("Direita\n");
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
