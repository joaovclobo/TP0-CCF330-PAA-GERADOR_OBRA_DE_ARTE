/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */

#include "funcoesAuxiliares.h"

void printMatrizChar(int linhas, int colunas, char quadro[col][lin]){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            
            printf("%c", quadro[i][j]);
        }

        putchar('\n');
    }
}

void criaQuadroVazio(char quadro[col][lin]){

    char quadroI[col][lin];

    for (int i = 0; i < lin; i++){

        for (int j = 0; j < col; j++){

            itoa(j, quadro[i][j] ,10);
            // if(i == 0 || i == lin-1){
            //     quadro[i][j] = '-';
            // } 
            // else if (j == 0 || col-1){
            //     quadro[i][j] = '|';
            // }
            
        }
    }

    // printMatrizChar(lin, col, quadro);
    // for (int i = 0; i < lin; i++){
        
    //     quadro[i][0] = '|';
    //     quadro[i][lin-1] = '|';
    // }

    // putchar('\n');

    // for (int j = 0; j < col; j++){
        
        // strcpy(quadro[0], "--------------------------------------------------------------------------------");
        // strcpy(quadro[col-1], "--------------------------------------------------------------------------------");
        // putchar('\n');
    // }
    
    printMatrizChar(lin, col, quadro);

    quadro = quadroI;
}
