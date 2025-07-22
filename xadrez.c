#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torreRecursiva(int casas){
    if (casas >= 1){
        printf("Direita\n");
        torreRecursiva(casas - 1);
    }
}
void bispoRecursiva(int casas){
    if (casas >= 1){
        
        printf("Diagonal direita cima\n");
        bispoRecursiva(casas - 1);
    }
}
void rainhaRecursiva(int casas){
    if (casas >= 1){
        
        printf("Esquerda\n");
        rainhaRecursiva(casas - 1);
    }
}

void cavalo(){
    int i = 1;
    int countCima = 1;
    while (i > 0)
    {
        printf("Cima\n");
        if(countCima == 1 ){
            countCima += 1;
            continue;
        } else {
            break;
        }
    }
    printf("Direita");
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int ladoParaMovimentarBispo, i = 0;

    printf("Você pode mover o Bispo para a diagonal acima direita (1), diagonal acima esquerda (2), diagonal abaixo direita (3) e para a diagonal abaixo esquerda (4).\n");
    printf("Escolha uma direção para mover o bispo: ");
    scanf("%d", &ladoParaMovimentarBispo);

    while (i <= 5)
    {
        switch (ladoParaMovimentarBispo)
        {
        case 1:
            printf("Bispo se movendo para a diagonal acima direita\n");
            i++;
            break;
        case 2:
            printf("Bispo se movendo para a diagonal acima esquerda\n");
            i++;
            break;
        case 3:
            printf("Bispo se movendo para a diagonal abaixo direita\n");
            i++;
            break;
        case 4:
            printf("Bispo se movendo para a diagonal abaixo direita\n");
            i++;
            break;
        default:
            break;
        }
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(int i = 0; i<=5; i++){
        printf("Torre se movendo para a direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do
    {
        printf("Rainha se movendo para a esquerda.\n");
        i++;
    } while (i <= 7);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int i = 0; i < 1; i++)
    {
        
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    torreRecursiva(5);
    bispoRecursiva(5);
    rainhaRecursiva(8);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    cavalo();
    
    return 0;
}
