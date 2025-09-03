#include <stdio.h>

#define linha 10
#define coluna 10

int main (){
    printf("Desafio Batalha naval!! \n");

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Matriz 10x10 representando o tabuleiro do jogo
    int Matriz [linha][coluna];

    // Coordenadas iniciais dos quatros navios
    int Lnavio1= 3, Cnavio1 = 2, Lnavio2 = 6, Cnavio2 =7, 
    Lnavio3 = 0, Cnavio3 = 3, Lnavio4 = 6, Cnavio4 = 4;
       
    // Inicializa tabuleiro com 0 (água)
    for (int y = 0; y < linha; y++){
        for (int x = 0; x < coluna; x++){
            Matriz[y][x] = 0;
        }
    }

     // Coloca o primeiro navio (horizontal) de tamanho 3
    for (int i = 0; i < 3; i++){
        Matriz[Lnavio1][Cnavio1 + i]= 3; // Linha fixa, coluna varia
    }
    
    // Coloca o segundo navio (vertical) de tamanho 3
    for (int i = 0; i < 3; i++){
        Matriz[Lnavio2 + i][Cnavio2]= 3; // Coluna fixa, linha varia
    }

     // Coloca o terceiro navio na diagonal
    for (int i = 0; i < 3; i++){
        Matriz[Lnavio3 + i][Cnavio3 + i]= 3; // Linha fixa, coluna varia
    }
    
    // Coloca o quarto navio na diagonal
    for (int i = 0; i < 3; i++){
        Matriz[Lnavio4 + i][Cnavio4 + i]= 3; // Coluna fixa, linha varia
    }

        // Imprime as letras no topo da matriz
    for(int x = 0; x < coluna; x++){
        printf("%c ", letras[x]);
    }
        printf("\n");

    // Imprime as linhas do tabuleiro
    for (int y = 0; y < linha; y++){
        printf("%d ", y);               // Mostra o número da linha
        for (int x = 0; x < coluna; x++){
            printf("%d ", Matriz[y][x]); // Mostra cada célula (0 = água, 3 = navio)
    }
        printf("\n");                   // Quebra de linha ao fim de cada linha
    }

}