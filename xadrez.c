#include <stdio.h>

// Constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUPERIOR_DIREITA "Diagonal Superior Direita\n"

// Função recursiva para mover o Bispo na diagonal superior direita
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf(DIAGONAL_SUPERIOR_DIREITA); // mover diagonalmente em um unico movimento
    moverBispo(casas - 1); 
}

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf(DIREITA);
    moverTorre(casas - 1); 
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return; 
    printf(ESQUERDA);
    moverRainha(casas - 1); 
}

// Função para mover o Cavalo em L para cima e para a direita
void moverCavalo() {
    printf("Movendo o Cavalo em L para cima e para a direita:\n");

    // Loop de cotrole do movimento em L
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 1; j++) {
            if (i == 1) {
                printf(CIMA); 
            } else if (i == 2) {
                printf(DIREITA);
                break; // saindo do loop interno depois do movimento para direita
            }
        }
    }
}

int main() {
    // Variáveis de controle das peças de xadrez
    int bispoMovimento = 1; // 1 para mover o Bispo
    int torreMovimento = 1; // 1 para mover a Torre
    int rainhaMovimento = 1; // 1 para mover a Rainha
    int cavaloMovimento = 1; // 1 para mover o Cavalo

    // Movimentação do Bispo
    if (bispoMovimento) {
        printf("Movendo o Bispo 5 casas na diagonal superior direita:\n");
        moverBispo(5); // diagonal
    }

    // Movimentação da Torre
    if (torreMovimento) {
        printf("Movendo a Torre 5 casas para a direita:\n");
        moverTorre(5); // Chamada da função recursiva
    }

    // Movimentação da Rainha
    if (rainhaMovimento) {
        printf("Movendo a Rainha 8 casas para a esquerda:\n");
        moverRainha(8); // Chamada da função recursiva
    }

    // Movimentação do Cavalo
    if (cavaloMovimento) {
        moverCavalo(); // Chamada da função para mover o cavalo
    }

    return 0;
}
