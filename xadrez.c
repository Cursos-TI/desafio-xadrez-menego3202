#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int passos, int atual) {
    if(atual > passos){
        return; // condição de parada
    }
    printf("direita\n");

    moverTorre(passos, atual + 1);
}

// Função recursiva para mover o Bispo diagonalmente para cima e direita
void moverBispo(int passos, int atual) {
    if (atual > passos) {
        return;
    }

    // Para cada passo vertical (cima)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        // Para cada passo horizontal (direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(passos, atual + 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int passos, int atual) {
    if (atual > passos) {
        return;
    }
    printf("Esquerda\n");

    moverRainha(passos, atual + 1);
}

int main(){
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int i, j;

    printf("Movimento da Torre\n");
    moverTorre(casasTorre, 1);

    printf("\n");

    printf("Movimento do Bispo\n");
    moverBispo(casasBispo, 1);

    printf("\n");

    printf("Movimentos da Rainha\n");
    moverRainha(casasRainha, 1);

    printf("\n");

    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do Cavalo\n");
    // Loop externo: controla o movimento vertical (subir 2 casas)
    for (i = 1; i <= casasCima; i++) {
        printf("Cima\n");

        // Loop interno: controla o movimento horizontal (andar 1 casa)
        for (j = 1; j <= casasDireita; j++) {
            // Enquanto ainda não subiu as 2 casas, não anda para direita
            if (i < casasCima) {
                continue; // pula esta iteração do loop interno
            }

            printf("Direita\n");
            break; // sai do loop interno após andar para direita
        }
    }

    return 0;
}
