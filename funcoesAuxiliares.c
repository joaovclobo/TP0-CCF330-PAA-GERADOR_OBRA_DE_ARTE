/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */

#include "funcoesAuxiliares.h"

//Funções gerais

void printMatrizChar(int linhas, int colunas, char quadro[LIN][COL]){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            
            printf("%c", quadro[i][j]);
        }

        putchar('\n');
    }
}

void criaQuadroVazio(char quadro[LIN][COL]){

    for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){

            if(i == 0 || i == LIN-1){
                quadro[i][j] = '-';
                
            } 
            else if (j == 0 || j == COL-1){
                quadro[i][j] = '|';

            } else{
                quadro[i][j] = ' ';

            }
        }
    }
}

void criaQuadroVazioAlternativo(char quadro[LIN][COL]){

    for (int i = 0; i < LIN; i++){

        for (int j = 0; j < COL; j++){

            if(i == 0 || i == LIN-1){
                quadro[i][j] = '=';
                
            } 
            else if (j == 0 || j == COL-1){
                quadro[i][j] = 'I';

            } else{
                quadro[i][j] = ' ';

            }
        }
    }
}

int normalizaNumero(int numeroUsuario){
    
    if (numeroUsuario <= 0 ){
        return (rand() % 100 + 1);

    } if (numeroUsuario > 100 ){
        return 100;

    } else {
        return numeroUsuario;

    }
}

int verificaVazio(int linha, int coluna, char quadro[LIN][COL]){
    
    if (quadro[linha][coluna] != ' '){
        return false;

    } else{
        return true;

    }
}

int geraLinhaAleatoria(){
    return (rand() % 18 + 1);

}

int geraColunaAleatoria(){
    return (rand() % 78 + 1);

}


//Funções da opção 5 - Fibonacci e série harmonica

int serieHarmonica(int pos){

    float soma = 1;

    for (int i = 2; i <= pos; i++){
        
        soma += (1.0/i);
        
    } 

    return (int) soma;
    
}

int sequenciaFibonacci(int pos){
    
    int n1 = 0, n2 = 1;
    int n3 = n1 + n2;

    if (pos <= 0 ){

        return n1;

    } else if (pos == 1){
        
        return n2;

    }else {
        for (int i = 3; i <= pos; i++) {

            n1 = n2;
            n2 = n3;
            n3 = n1 + n2;
        }
    }

    return n3;
}


//Funções da opção 5 - Snake

char substituiSnake(char valorCasa, int vertical){
    
    char novoValorCasa = valorCasa;
    
    switch (valorCasa) {
        case ' ':
            if (vertical){
                novoValorCasa = '|';
                break;
            } else {
            
                novoValorCasa = '-';
                break;
            }

        case 'O':
            novoValorCasa = 'o';

            break;
        
        default:
            break;
    }

    return novoValorCasa;
}

int comidaNaLinha(int linha, char quadro[LIN][COL]){
    
    int comida = false;
    
    for (int i = 0; i < COL; i++){
        if (quadro[linha][i] == 'O'){
            comida = true;
            break;
        }
    }
    return comida;
}
