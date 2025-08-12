#include <stdio.h>
#include <unistd.h> // Para usar usleep()

// Função para imprimir texto com atraso, caractere por caractere
void imprimir_com_atraso(const char *texto, int atraso_ms) {
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        fflush(stdout);              // força a impressão imediata do caractere
        usleep(atraso_ms * 1000);   // atraso em microssegundos
    }
}

int main() {
    // Define o número de casas que cada peça deve andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 3;      // movimento do cavalo para baixo
    int casasEsquerda = 1;   // movimento do cavalo para esquerda
    int i, j;                // variáveis de controle dos loops

    // Movimento da Torre: 5 casas para a direita usando 'for'
    imprimir_com_atraso("Movimento da Torre:\n\n", 25);
    for (i = 1; i <= casasTorre; i++) {
        imprimir_com_atraso("direita\n", 25);
    }

    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal superior direita usando 'while'
    imprimir_com_atraso("Movimento do Bispo:\n\n", 25);
    i = 1;
    while (i <= casasBispo) {
        imprimir_com_atraso("Cima, Direita\n", 25);
        i++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda usando 'do-while'
    imprimir_com_atraso("Movimento da Rainha:\n\n", 25);
    i = 1;
    do {
        imprimir_com_atraso("esquerda\n", 25);
        i++;
    } while (i <= casasRainha);

    printf("\n");

    // Movimento do Cavalo: 3 casas para baixo e 1 para a esquerda usando loops aninhados
    imprimir_com_atraso("Movimento do Cavalo:\n\n", 25);
    for (i = 1; i <= casasBaixo + casasEsquerda; i++) {
        j = 1;
        while (j <= 1) {
            if (i <= casasBaixo) {
                imprimir_com_atraso("Baixo\n", 25);
            } else {
                imprimir_com_atraso("Esquerda\n", 25);
            }
            j++;
        }
    }

    return 0;
}
