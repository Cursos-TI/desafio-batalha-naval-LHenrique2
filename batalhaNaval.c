

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    #include <stdio.h>

#include <stdio.h>
#define coluna 10
#define linha 10
int main(){

    char linhas[11] = {'-','a','b','c','d','e','f','g','h','i','j'};
    
    
    

    int tab[linha][coluna];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tab[i][j] = 0; // Atribuindo valores à matriz
        }
        
    }

    printf("Batalha naval\n");
     
    for (int j = 0; j < 11; j++)//navio orizontal
    {
       printf(" %c", linhas[j]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        tab[1][i]=3;
    }
    for (int j = 0; j < 3; j++)
    {
      tab[j][6]=3;
    }
   for (int l = 0; l < 2; l++)// navios diagonal
   {
   
    tab[4-l][l]=3;
    tab[5-l][l+1]=3;
    tab[6-l][l+2]=3;
   }

  
        
    for (int i = 0; i < linha; i++){

        printf("%2d ", i + 1); //número da linha

        for (int j = 0; j < coluna; j++){

        printf("%d ", tab[i][j]); // Valor do tabuleiro

        }printf("\n");

}




    return 0;
}
