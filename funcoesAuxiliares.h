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
#define lin 20
#define col 80

enum trueFalse {true = 1, false = 0};

void printMatrizChar(int linhas, int colunas, char quadro[lin][col]);
void criaQuadroVazio(char quadro[lin][col]);
int normalizaNumero(int numeroUsuario);

void preencheAsteriscoSimples(int numeroFiguras, char quadro[lin][col]);
void preencheAsteriscoSimplesI(int numeroFiguras, char quadro[lin][col], int linha, int coluna, int preenchido);

void preencheSomaAsteriscos(int numeroFiguras, char quadro[lin][col]);
void preencheSomaAsteriscosI(int numeroFiguras, char quadro[lin][col], int linha, int coluna, int preenchido);

void preencheXAsteriscos(int numeroFiguras, char quadro[lin][col]);
void preencheXAsteriscosI(int numeroFiguras, char quadro[lin][col], int linha, int coluna, int preenchido);

void preencheFigsAleatorias(int numeroFiguras, char quadro[lin][col]);

void preencheRetas(char quadro[lin][col]);

int sequenciaFibonacci(int poss);
int geraLinhaAleatoria();
int geraColunaAleatoria();
int verificaVazio(int linha, int coluna, char quadro[lin][col]);
