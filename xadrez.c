#include <stdio.h>

void movimento_torre()
{
    // O loop abaixo faz com que o programa imprima a direção "Direita" 5 vezes, 
    // simulando os movimentos possíveis da torre para a direita em um tabuleiro de xadrez.
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    printf("\n");
}

void movimento_bispo()
{
    // O loop abaixo imprime a direção "Cima, Direita" 5 vezes, 
    // simulando os movimentos possíveis do bispo que se move nas diagonais do tabuleiro.
    for (int i = 0; i < 5; i++)
    {
        printf("Cima, Direita\n");
    }
    printf("\n");
}

void movimento_rainha()
{
    // O loop abaixo imprime a direção "Esquerda" 8 vezes, 
    // simulando os movimentos possíveis da rainha, que pode se mover em várias direções, incluindo para a esquerda.
    for (int i = 0; i < 8; i++)
    {
        printf("Esquerda\n");
    }
    printf("\n");
}

int main(void)
{
    // Imprime a direção de movimento da Torre
    printf("Torre:\n");
    movimento_torre();

    // Imprime a direção de movimento do Bispo
    printf("Bispo:\n");
    movimento_bispo();

    // Imprime a direção de movimento da Rainha
    printf("Rainha:\n");
    movimento_rainha();

    return 0;
}
