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

#define lin 20
#define col 80

enum trueFalse {
    true = 1, false = 0
};

//Funções gerais

void printMatrizChar(int linhas, int colunas, char quadro[lin][col]);

void criaQuadroVazio(char quadro[lin][col]);

void criaQuadroVazioAlternativo(char quadro[lin][col]);

int normalizaNumero(int numeroUsuario);

int verificaVazio(int linha, int coluna, char quadro[lin][col]);

int geraLinhaAleatoria();

int geraColunaAleatoria();

//Funções da opção 5 - Fibonacci e série harmonica

int sequenciaFibonacci(int pos);

int serieHarmonica(int pos);

//Funções da opção 5 - Snake

char substituiSnake(char valorCasa, int vertical);

int comidaNaLinha(int linha, char quadro[lin][col]);
