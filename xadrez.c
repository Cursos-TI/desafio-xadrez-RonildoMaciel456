#include <stdio.h>
// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moivimentoBispo(int numCasas) {
    int x = 1, y = 1;

    if (numCasas > 0) {
        while (x <= numCasas) {
            printf("Cima, ");
            x++;
            while (y < x) {
                printf("Direita\n");
                y++;
            }
        }
        /*
        Aqui eu estou meio que "forçando" a chamada recursiva a acontecer apenas quando
        os valores de x e y são reiniciados para 1 dentro dos loops
        Isso garante que os loops externo e interno não imprimam os dados mais vezes do que
        o esperado.
        */
        if ((y == 1) && (x == 1)) {
            moivimentoBispo(numCasas - 1);
        }
   }
} 


int main() {
    // Nível Novato - Movimentação das Peças
    // variáveis para a realização dos loops: 
    /*
    int x = 1, y = 1, z = 1, i, j;

    
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
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // O loop representar a movimentação horizontal e outro vertical.
    /*
       Na 1º interação do laço interno for, "j" = 0 e "i" no laço externo é 1,
       o que ainda atende a condição "i <= 1" e a condição "j <= i" imprimindo o movimento "Baixo" uma vez.
       Na 2º interação o "j" = 1 e "i" ainda é <= 1, o que ainda atende as condições "i <= 1"
       e portanto ainda "j <= i", imprimindo a movimentação "Baixo" pela 2º vez. Agora tanto "i"
       quanto "j" incrementa para 2. o que torna as condições "i <= 1" e "j <= i" falsas.
       No loop while "j <= 2" é uma condição verdadeira, porque no fim do loop for interno
       "j" passa a ser incrementado pra 2. Então a movimentação "Esquerda" é impressa uma vez. Logo após isso
       há um incremento de "j" para 3 (j++) o que torna a condição "j <= 2" do loop while falsa. encerrando 
       assim o loop e impedindo que "Esquerda" seja impresso infinitamente. Assim o resultado é: "Baixo, Baixo, Esquerda".
       Simulando a movimentação em "L" da peça "cavalo" do Xadrez.
    */
    /*
    printf("*** Movimento em 'L' do Cavalo ***\n");
    for(i = 1; i <= 1; i++) {
        for(j = 0; j <= i; j++) {
            printf("Baixo,");
        } while (j <= 2) {
            printf("Esquerda");
            j++;
        }  

        }
        printf("\n");
    */
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados

    // Implementação de Movimentação do Bispo
    // Movimentação do Bispo em diagonal usando Funções Recursivas e Loops Aninhados
    printf("*** Movimento do Bispo ***\n");
    int quantCasas = 5;
    moivimentoBispo(quantCasas);

    // Implementação de Movimentação da Torre
    // Movimentação da Torre 5 casas para a direita usando Função Recursiva
    printf("*** Movimento do Torre ***\n");




    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


 return 0;
}

