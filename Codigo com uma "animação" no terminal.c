#include <stdio.h>
#include <unistd.h> // usleep

// Função para imprimir com delay em ms entre caracteres
void imprimir_com_efeito(const char *texto, int atraso_ms) {
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        fflush(stdout); // força imprimir imediatamente
        usleep(atraso_ms * 1000); // converte ms para microssegundos
    }
}

// Funções recursivas para as peças
void moverTorre(int passos, int atual) {
    if(atual > passos){
        return;
    }
    imprimir_com_efeito("direita\n", 25);
    moverTorre(passos, atual + 1);
}

void moverBispo(int passos, int atual) {
    if (atual > passos) {
        return;
    }
    // movimento diagonal: um "Cima" e um "Direita" a cada passo
    imprimir_com_efeito("Cima\n", 25);
    imprimir_com_efeito("Direita\n", 25);
    moverBispo(passos, atual + 1);
}

void moverRainha(int passos, int atual) {
    if (atual > passos) {
        return;
    }
    imprimir_com_efeito("Esquerda\n", 25);
    moverRainha(passos, atual + 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCima = 2;
    int casasDireita = 1;
    int i, j;

    imprimir_com_efeito("Movimento da Torre\n\n", 25);
    moverTorre(casasTorre, 1);
    imprimir_com_efeito("\nMovimento do Bispo\n\n", 25);
    moverBispo(casasBispo, 1);
    imprimir_com_efeito("\nMovimentos da Rainha\n\n", 25);
    moverRainha(casasRainha, 1);

    imprimir_com_efeito("\nMovimento do Cavalo\n", 25);
    for (i = 1; i <= casasCima; i++) {
        imprimir_com_efeito("Cima\n", 25);
        for (j = 1; j <= casasDireita; j++) {
            if (i < casasCima) {
                continue;
            }
            imprimir_com_efeito("Direita\n", 25);
            break;
        }
    }

    return 0;
}
