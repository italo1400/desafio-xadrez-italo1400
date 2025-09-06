#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentaPeca(int movimento, char direcao[10])
{
    if (movimento > 0) {
        printf("%s\n", direcao);
        movimento--;
        movimentaPeca(movimento, direcao);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    const int torreMovimento = 5;
    const int bispoMovimento = 5;
    const int rainhaMovimento = 8;
    int aux = 0;
    int trocaDirecao = 0;

    printf("Movimentando Torre\n");
    for (int i = 0; i < torreMovimento; i++)
    {
        printf("Direita\n");
    }

    printf("\n\nMovimentando Bispo\n");
    while (aux < bispoMovimento)
    {
        printf("Esquerda\n");
        aux++;
    }

    aux = 0;
    printf("\n\nMovimentando Rainha\n");
    do
    {
        printf("Cima Direita\n");
        aux++;
    } while (aux < rainhaMovimento);

    printf("\n\nMovimentando Cavalo\n");
    do
    {

        for (int i = 0; i < 2; i++)
        {
            printf("Baixo \n");
        }
        printf("Esquerda \n");
        trocaDirecao++;
    } while (trocaDirecao == 0);

    printf("\n\nMovimentando Torre Recursivamente\n");
    movimentaPeca(5, "Direita");

    printf("\n\nMovimentando Bispo Recursivamente\n");
    movimentaPeca(5, "Esquerda");

    printf("\n\nMovimentando Rainha Recursivamente\n");
    movimentaPeca(8, "Cima Direita");
    return 0;
}
