#include <stdio.h>

int main() {
    // Define o número de casas que cada peça deve andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int i; // variável usada como contador em todos os loops

    // Movimento da Torre: 5 casas para a direita usando 'for'
    printf("Movimento da Torre:\n");

    printf("\n"); // Linha em branco para separar as seções
    
    for (i = 1; i <= casasTorre; i++) {
        printf("direita\n");
    }

    printf("\n"); 

    // Movimento do Bispo: 5 casas na diagonal superior direita usando 'while'
    printf("Movimento do Bispo:\n");

    printf("\n");

    i = 1; // reseta o contador antes do loop
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n"); 

    // Movimento da Rainha: 8 casas para a esquerda usando 'do-while'
    printf("Movimento da Rainha:\n");

    printf("\n");
    i = 1; // reseta o contador antes do loop
    do {
        printf("esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0; // Indica que o programa terminou com sucesso
}
