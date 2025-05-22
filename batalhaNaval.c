#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Criação das variáveis de linhas e colunas da matriz
    char linha[10] = { 'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {{0}};

    // Exibição do título do tabuleiro e espaço inicial
    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" ");

    
    // Primeiro barco na horizontal
    for (int i = 0, j = 7; i <= 0; i++,j++){
        tabuleiro[i][j] = 9;
    } 

    // Exibição dos valores da matriz 
    for (int i = 0; i < 10; i++){
        printf(" %c",linha[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%d", i + 1);
    for(int j = 0; j < 10; j++){
        printf(" %d",tabuleiro[i][j]);
        }
        //Pula a linha quando termina de percorrer todos os valores de j(coluna)
        printf("\n");
    }

    return 0;
}
