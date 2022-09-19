/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */

#include "funcoesAuxiliares.h"

int main(){

    int opcao;
    int numeroFiguras;
    char quadro[lin][col];
    time_t tempo;
    srand((time(&tempo)));

    printf("\n\n|____________________________ Universidade Federal De Vicosa - Campus Florestal ___________________________|\n|________________ Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS _______________|\n");
    printf("|_________________________________________ Gerador de obra de arte _________________________________________|\n\n");  
    printf("Professor responsável:\n    Daniel Mendes Barbosa\n\nAluno responsável:\n    Joao Vitor Chagas Lobo - 4693\n\n");
    printf("|__________________________________________________________________________________________________________|\n\n");

    do {

        printf("\nSelecione uma opcao para criar a 'Obra de arte' digitando o numero correspondente:\n    1 - Com um único asterisco.\n    2 - Simbolo de soma (+) com asterisco.\n    3 - Letra X com asterisco.\n    4 - Todas as figuras anteriores aleatorimente.\n    5 - Obra de arte surpresa!.\n    0 - Encerar programa.\n");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:;
            
            criaQuadroVazio(quadro);
            printMatrizChar(lin, col, quadro);
            scanf("%d", &numeroFiguras);
            preencheAsteriscoSimples(normalizaNumero(numeroFiguras), quadro);
            printMatrizChar(lin, col, quadro);

            break;

        case 2:;

            criaQuadroVazio(quadro);
            printMatrizChar(lin, col, quadro);
            scanf("%d", &numeroFiguras);
            preencheSomaAsteriscos(normalizaNumero(numeroFiguras), quadro);
            printMatrizChar(lin, col, quadro);

            break;

        case 3:;

            criaQuadroVazio(quadro);
            printMatrizChar(lin, col, quadro);
            scanf("%d", &numeroFiguras);
            preencheXAsteriscos(normalizaNumero(numeroFiguras), quadro);
            printMatrizChar(lin, col, quadro);

            break;

        case 4:;
            
            criaQuadroVazio(quadro);
            printMatrizChar(lin, col, quadro);
            scanf("%d", &numeroFiguras);
            preencheFigsAleatorias(normalizaNumero(numeroFiguras), quadro);
            printMatrizChar(lin, col, quadro);

            break;

        case 5:;
            printMatrizChar(lin, col, quadro);
            printf("5\n");

            break;

        case 0:;
            break;

        default:;
            printf("ERRO: Opcao invalida!\n");
            break;
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}
