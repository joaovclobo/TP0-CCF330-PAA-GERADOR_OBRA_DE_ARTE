/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define LIN 20
#define COL 80

enum trueFalse {
    true = 1, false = 0
};

//Funções gerais

void printMatrizChar(int linhas, int colunas, char quadro[LIN][COL]);

void criaQuadroVazio(char quadro[LIN][COL]);

void criaQuadroVazioAlternativo(char quadro[LIN][COL]);

int normalizaNumero(int numeroUsuario);

int verificaVazio(int linha, int coluna, char quadro[LIN][COL]);

int geraLinhaAleatoria();

int geraColunaAleatoria();

//Funções da opção 5 - Fibonacci e série harmonica

int sequenciaFibonacci(int pos);

int serieHarmonica(int pos);

//Funções da opção 5 - Snake

char substituiSnake(char valorCasa, int vertical);

int comidaNaLinha(int linha, char quadro[LIN][COL]);
