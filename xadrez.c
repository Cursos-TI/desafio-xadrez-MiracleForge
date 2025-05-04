#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de
// movimentação das peças de xadrez. O objetivo é utilizar estruturas de
// repetição e funções para determinar os limites de movimentação dentro do
// jogo.

int main() {
  const int mov_tower = 5;
  const int mov_bisshop = 5;
  const int mov_queen = 8;

  int _count = 0;
  printf("Torre:\n");
  while (_count < mov_tower) {

    printf("Direita\n");
    _count++;
  }

  printf("Bispo:\n");
  for (int i = 0; i < mov_bisshop; i++) {
    printf("Cima Direita\n");
  }

  printf("Rainha\n");
  int count_queen = 0;
  do {
    printf("Esquerda\n");
    count_queen++;
  } while (count_queen < mov_queen);
  // Nível Novato - Movimentação das Peças
  //
  // Sugestão: Declare variáveis constantes para representar o número de casas
  // que cada peça pode se mover.

  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do
  // Bispo em diagonal.

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da
  // Torre para a direita.

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da
  // Rainha para a esquerda.

  // Nível Aventureiro - Movimentação do Cavalo
  // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em
  // L. Um loop pode representar a movimentação horizontal e outro vertical.

  // Nível Mestre - Funções Recursivas e Loops Aninhados
  // Sugestão: Substitua as movimentações das peças por funções recursivas.
  // Exemplo: Crie uma função recursiva para o movimento do Bispo.

  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com
  // variáveis múltiplas e condições avançadas. Inclua o uso de continue e break
  // dentro dos loops.

  return 0;
}
