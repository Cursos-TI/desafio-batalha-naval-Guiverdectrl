#include <stdio.h>

int main (){
    printf("Desafio Batalha naval!! \n");

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Matriz 10x10 representando o tabuleiro do jogo
    int Matriz [10][10];
    // Coordenadas iniciais dos dois navios
    int linha1= 3, coluna1 = 2, linha2 = 6, coluna2 =7;
       
    // Inicializa tabuleiro com 0 (água)
    for (int y = 0; y < 10; y++){
        for (int x = 0; x < 10; x++){
            Matriz[y][x] = 0;
        }
    }

     // Coloca o primeiro navio (horizontal) de tamanho 3
    for (int i = 0; i < 3; i++){
       Matriz[linha1][coluna1 + i]= 3; // Linha fixa, coluna varia
    }
    
    // Coloca o segundo navio (vertical) de tamanho 3
    for (int i = 0; i < 3; i++){
        Matriz[linha2 + i][coluna2]= 3; // Coluna fixa, linha varia
    }

        // Imprime as letras no topo da matriz
    for(int x = 0; x < 10; x++){
        printf("%c ", letras[x]);
    }
        printf("\n");

    // Imprime as linhas da matriz
    for (int y = 0; y < 10; y++){
        printf("%d ", y);               // Mostra o número da linha
        for (int x = 0; x < 10; x++){
            printf("%d ", Matriz[y][x]); // Mostra cada célula (0 = água, 3 = navio)
    }
        printf("\n");                   // Quebra de linha ao fim de cada linha
    }



    return 0;
}
