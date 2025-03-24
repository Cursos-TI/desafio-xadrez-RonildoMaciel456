#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // variáveis para a realização dos loops 
    int x = 1;
    int y = 1;
    int z = 1;

    printf("*** Desafio de Xadrez - MateCheck - Nível Novato ***\n\n");

    // Implementação de Movimentação do Bispo
    // Movimentação do Bispo em diagonal.
    // Uso do "do while"
    printf("*** Movimento do Bispo ***\n");
    do
    {
        printf("Cima,Direita\n");
        x++;

    } while (x <= 5);

    printf("\n");

    // Implementação de Movimentação da Torre
    // Movimentação da Torre 5 casas para a direita
    // Uso do "while"
    printf("*** Movimento da Torre ***\n");
    while (y <= 5)
    {
        printf("Direita\n");
        y++;
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Movimentação da Rainha 8 casas para a esquerda
    // Uso do "for"
    printf("*** Movimento da Rainha ***\n");
    for (z = 1; z <= 8; z++)
    {
        printf("Esquerda\n");
    }
    printf("\n");

    printf("### FIM DO JOGO! ###\n");
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
