/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */

#include "funcoesAuxiliares.h"

void printMatrizChar(int linhas, int colunas, char quadro[lin][col]){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            
            printf("%c", quadro[i][j]);
        }

        putchar('\n');
    }
}

void criaQuadroVazio(char quadro[lin][col]){

    char quadroI[lin][lin];

    for (int i = 0; i < lin; i++){

        for (int j = 0; j < col; j++){

            if(i == 0 || i == lin-1){
                quadro[i][j] = '-';
                
            } 
            else if (j == 0 || j == col-1){
                quadro[i][j] = '|';

            } else{
                quadro[i][j] = ' ';

            }
        }
    }
}
