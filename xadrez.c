#include <stdio.h>

// Função para mover a Torre
void move_tower(int moviments) {
  if (moviments == 0)
    return;
  printf("Direita\n");
  move_tower(moviments - 1);
}

// Função para mover o Bispo (recursão e loops aninhados)
void move_bishop(int movimentos) {
  if (movimentos == 0)
    return;

  // Movimento vertical (cima)
  for (int i = 0; i < 1; i++) {
    printf("Cima\n");
  }

  // Movimento horizontal (direita)
  for (int j = 0; j < 1; j++) {
    printf("Direita\n");
  }

  move_bishop(movimentos - 1);
}

// Função para mover a Rainha
void move_queen(int movimentos) {
  if (movimentos == 0)
    return;

  // Movimento para a esquerda
  for (int i = 0; i < 1; i++) {
    printf("Esquerda\n");
  }

  move_queen(movimentos - 1);
}

// Função para mover o Cavalo (loops aninhados)
void move_horse(int vertical, int horizontal) {
  for (int i = 0; i < vertical; i++) {
    for (int j = 0; j < horizontal; j++) {
      if (i == 0) {
        printf("Cima\n");
      }
      if (j == 0) {
        printf("Esquerda\n");
      }
    }
  }
}

int main() {
  const int mov_tower = 5;
  const int mov_bisshop = 5;
  const int mov_queen = 8;
  const int mov_horse_vertical = 2;
  const int mov_horse_horizontal = 1;

  printf("Torre:\n");
  move_tower(mov_tower);

  printf("\nBispo:\n");
  move_bishop(mov_bisshop);

  printf("\nRainha:\n");
  move_queen(mov_queen);

  printf("\nCavalo:\n");
  move_horse(mov_horse_vertical, mov_horse_horizontal);

  return 0;
}
