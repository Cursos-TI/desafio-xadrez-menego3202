#include <stdio.h>
#include <unistd.h> // Para usar usleep()

// Função para imprimir texto com efeito de digitação
void imprimir_com_efeito(const char *texto, int atraso_ms) {
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        fflush(stdout);
        usleep(atraso_ms * 1000);
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int i;

    imprimir_com_efeito("Movimento da Torre:", 25);
    for (i = 1; i <= casasTorre; i++) {
        imprimir_com_efeito("direita", 25);
    }
    printf("\n");

    imprimir_com_efeito("Movimento do Bispo:", 25);
    i = 1;
    while (i <= casasBispo) {
        imprimir_com_efeito("Cima, Direita", 25);
        i++;
    }
    printf("\n");

    imprimir_com_efeito("Movimento da Rainha:", 25);
    i = 1;
    do {
        imprimir_com_efeito("esquerda", 25);
        i++;
    } while (i <= casasRainha);

    return 0;
}
