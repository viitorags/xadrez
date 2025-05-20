#include <stdio.h>

// Parâmetros de movimento definidos como constantes/variáveis
#define CASAS_TORRE 5
#define CASAS_BISPO 4
#define CASAS_RAINHA 6
#define TAM_TABULEIRO 8

// Função recursiva: Torre (para a direita)
void movimento_torre_rec(int casas) {
  if (casas == 0) {
    printf("\n");
    return;
  }
  printf("Direita\n");
  movimento_torre_rec(casas - 1);
}

// Função recursiva: Rainha (para a esquerda)
void movimento_rainha_rec(int casas) {
  if (casas == 0) {
    printf("\n");
    return;
  }
  printf("Esquerda\n");
  movimento_rainha_rec(casas - 1);
}

// Função recursiva + loops aninhados: Bispo (diagonal "Cima, Direita")
void movimento_bispo_rec(int linhas, int colunas, int atual_linha) {
  if (atual_linha >= linhas) {
    printf("\n");
    return;
  }
  // Loop interno: horizontal (colunas)
  for (int j = 0; j < colunas; j++) {
    printf("Cima, Direita\n");
  }
  movimento_bispo_rec(linhas, colunas, atual_linha + 1);
}

// Função com loops aninhados: Cavalo (movimento em "L": 2 para cima, 1 para
// direita)
void movimento_cavalo() {
  printf("Cavalo:\n");
  for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
    for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
      int nova_linha = linha - 2;   // duas casas para cima
      int nova_coluna = coluna + 1; // uma para a direita

      // Condição: deve estar dentro do tabuleiro
      if (nova_linha < 0 || nova_coluna >= TAM_TABULEIRO) {
        continue; // Ignora movimentos inválidos
      }
      // Simula o movimento em "L"
      printf("De (%d,%d) para (%d,%d): Cima, Cima, Direita\n", linha, coluna,
             nova_linha, nova_coluna);

      // Exemplo de uso de break: se chegar ao canto superior direito,
      // interrompe os loops
      if (nova_linha == 0 && nova_coluna == TAM_TABULEIRO - 1) {
        printf("Cavalo chegou ao canto superior direito!\n");
        break;
      }
    }
  }
  printf("\n");
}

int main(void) {
  // Torre
  printf("Torre:\n");
  movimento_torre_rec(CASAS_TORRE);

  // Bispo (recursivo + aninhado)
  printf("Bispo:\n");
  movimento_bispo_rec(3, CASAS_BISPO, 0); // 3 linhas, 4 colunas

  // Rainha
  printf("Rainha:\n");
  movimento_rainha_rec(CASAS_RAINHA);

  // Cavalo (loops aninhados)
  movimento_cavalo();

  return 0;
}
