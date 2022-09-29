/* ------------------------------------------------------------------------------------------------------------------------------------------------------------

     Universidade Federal De Viçosa - Campus Florestal
     Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS

       Professor responsável:
           Daniel Mendes Barbosa

       Aluno responsável:
           João Lobo - 4693

----------------------------------------------------------------------------------------------------------------------------------------------------------- */

#include "funcoesQuadro.h"

int main(){

    int opcao;
    int numeroFiguras;
    char quadro[lin][col];

    char* teste = "()%%[-]/|\\ XLVTIMNZHWY Oo";

    time_t tempo;
    srand((time(&tempo)));

    printf("\n\n|============================ Universidade Federal De Vicosa - Campus Florestal ============================|\n|================ Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS ================|\n");
    printf("|========================================= Gerador de obra de arte =========================================|\n\n");  
    printf("Professor responsável:\n    Daniel Mendes Barbosa\n\nAluno responsável:\n    Joao Vitor Chagas Lobo - 4693\n\n");
    printf("|===========================================================================================================|\n\n");

    do {

        printf("\nSelecione uma opcao para criar a 'Obra de arte' digitando o numero correspondente:\n\n    1 - Com um único asterisco.\n    2 - Simbolo de soma (+) com asterisco.\n    3 - Letra X com asterisco.\n    4 - Todas as figuras anteriores aleatorimente.\n    5 - Obra de arte surpresa!.\n    0 - Encerar programa.\n");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:;
            
            
            printf("\n|===========================================================================================================|\n");
            criaQuadroVazio(quadro);
            printf("\nQuadro SEM a obra de arte:\n\n");            
            printMatrizChar(lin, col, quadro);
            
            printf("\nEscolha o número de figuras da obra de arte: ");
            scanf("%d", &numeroFiguras);
            preencheAsteriscoSimples(normalizaNumero(numeroFiguras), quadro);
            
            printf("\n|===========================================================================================================|\n");
            printf("\nQuadro COM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            printf("\n|===========================================================================================================|\n");

            break;

        case 2:;
            
            printf("\n|===========================================================================================================|\n");
            criaQuadroVazio(quadro);
            printf("\nQuadro SEM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            
            printf("\nEscolha o número de figuras da obra de arte: ");
            scanf("%d", &numeroFiguras);
            preencheSomaAsteriscos(normalizaNumero(numeroFiguras), quadro);
            
            printf("\n|===========================================================================================================|\n");
            printf("\nQuadro COM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            printf("\n|===========================================================================================================|\n");

            break;

        case 3:;
            
            printf("\n|===========================================================================================================|\n");
            criaQuadroVazio(quadro);
            printf("\nQuadro SEM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            
            printf("\nEscolha o número de figuras da obra de arte: ");
            scanf("%d", &numeroFiguras);
            preencheXAsteriscos(normalizaNumero(numeroFiguras), quadro);
            
            printf("\n|===========================================================================================================|\n");
            printf("\nQuadro COM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            printf("\n|===========================================================================================================|\n");

            break;

        case 4:;
            
            printf("\n|===========================================================================================================|\n");
            criaQuadroVazio(quadro);
            printf("\nQuadro SEM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            
            printf("\nEscolha o número de figuras da obra de arte: ");
            scanf("%d", &numeroFiguras);
            preencheFigsAleatorias(normalizaNumero(numeroFiguras), quadro);
            
            printf("\n|===========================================================================================================|\n");
            printf("\nQuadro COM a obra de arte:\n\n");
            printMatrizChar(lin, col, quadro);
            printf("\n|===========================================================================================================|\n");

            break;

        case 5:;

            int opcao2;

            printf("\nEscolha a opção surpresa:\n\n    1 - Quadro feito com sequência de Fibonacci e serie Harmonica.\n    2 - Jogo Snake automático espiral.\n    3 - Jogo Snake automático zig zag.\n");
            scanf("%d", &opcao2);

            switch (opcao2){
                case 1:;

                    criaQuadroVazio(quadro);
                    printMatrizChar(lin, col, quadro);
                    preencheRetasFibonacci(quadro);
                    printMatrizChar(lin, col, quadro);

                break;

                case 2:

                    criaQuadroVazioAlternativo(quadro);
                    printMatrizChar(lin, col, quadro);
                    preencheComidas(quadro);
                    percorreSnakeEspiral(quadro);
                
                break;

                case 3:

                    criaQuadroVazioAlternativo(quadro);
                    printMatrizChar(lin, col, quadro);
                    preencheComidas(quadro);
                    percorreSnakeZigZag(quadro);
                
                break;
            
            default:

                printf("ERRO: Opcao invalida!\n");

                break;
            }

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
