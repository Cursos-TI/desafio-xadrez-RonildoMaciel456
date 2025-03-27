#include <stdio.h>

void moivimentoBispo(int numCasas) {
    int x = 1, y = 1;
    if (numCasas > 0) {
        //loop responsável pelo movimento vertical
        while (x <= numCasas) {
            printf("Cima, ");
            x++;
             //loop responsável pelo movimento horizontal
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

void movimentoTorre(int numCasas) {
    if (numCasas > 0){
        printf("Direita\n");

        movimentoTorre(numCasas - 1);
    }
}

void movimentoRainha(int numCasas) {
    if (numCasas > 0){
        printf("Esquerda\n");

        movimentoRainha(numCasas - 1);
    }
}


int main() {
    printf("*** Desafio de Xadrez - MateCheck ***\n");
    printf("*** Nível Mestre - Funções Recursivas e Loops Aninhados ***\n");
    printf("*** Objetivo: utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo. ***\n");
    printf("\n");


    // Implementação da Movimentação do Bispo
    // Movimentação do Bispo em diagonal usando Funções Recursivas e Loops Aninhados
    printf("*** Movimento do Bispo ***\n");
    int bispoCasas = 5;
    moivimentoBispo(bispoCasas);
    printf("\n");

    // Implementação da Movimentação da Torre
    // Movimentação da Torre 5 casas para a direita usando Função Recursiva
    printf("*** Movimento do Torre ***\n");
    int torreCasas = 5;
    movimentoTorre(torreCasas);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Movimentação da Rainha 8 casas para a esquerda
    printf("*** Movimento da Rainha ***\n");
    int rainhaCasas = 8;
    movimentoRainha(rainhaCasas);
    printf("\n");
    
    // Implementação da movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas
    // Incluído também o uso de continue e break dentro dos loops
    printf("*** Movimento em 'L' do Cavalo ***\n");
    int i, j;
    for(i = 1; i <= 1; i++) {
        for(j = 0; j <= i && j < 2; j++) {
            printf("Cima,");
            if(j != i) {
                continue;
            }
        } while (j <= 2) {
            printf("Direita");
            j++;
            break;
        }  

        }
        printf("\n\n");
        printf("### FIM DO PROJETO! ###");
    
   return 0;
}


    
    















