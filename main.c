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

    int opcao, repetir = 0;
    int numeroFiguras;
    char quadro[LIN][COL];

    char* teste = "()%%[-]/|\\ XLVTIMNZHWY Oo";

    time_t tempo;
    srand((time(&tempo)));

    printf("\n\n|============================ Universidade Federal De Vicosa - Campus Florestal ============================|\n|================ Trabalho prático 0 - Disciplina CCF 330 - PROJETO E ANÁLISE DE ALGORITMOS ================|\n");
    printf("|========================================= Gerador de obra de arte =========================================|\n\n");  
    printf("Professor responsável:\n    Daniel Mendes Barbosa\n\nAluno responsável:\n    Joao Vitor Chagas Lobo - 4693\n\n");
    printf("|===========================================================================================================|\n\n");

    do {

        printf("\nSelecione uma opcao para criar a 'Obra de arte' digitando o numero correspondente:\n\n    1 - Com um único asterisco.\n    2 - Simbolo de soma (+) com asterisco.\n    3 - Letra X com asterisco.\n    4 - Todas as figuras anteriores aleatorimente.\n    5 - Obra de arte especial!\n    0 - Encerar programa.\n");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:;

            do{

                criaQuadroVazio(quadro);

                if(!repetir){
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro SEM a obra de arte:\n\n");            
                    printMatrizChar(LIN, COL, quadro);
                    printf("\nEscolha o número de figuras da obra de arte: ");
                    scanf("%d", &numeroFiguras);
                    numeroFiguras = normalizaNumero(numeroFiguras);

                }

                preencheAsteriscoSimples(numeroFiguras, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("\nQuadro COM a obra de arte:\n\n");
                printMatrizChar(LIN, COL, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("Criar outra obra de arte com o mesmo número de figuras?\n\n    0 - Não.\n    1 - Sim.\n");
                scanf("%d", &repetir);

            } while(repetir);
            break;

        case 2:;

            do{
                
                criaQuadroVazio(quadro);

                if(!repetir){
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro SEM a obra de arte:\n\n");
                    printMatrizChar(LIN, COL, quadro);
                    printf("\nEscolha o número de figuras da obra de arte: ");
                    scanf("%d", &numeroFiguras);
                    numeroFiguras = normalizaNumero(numeroFiguras);

                }

                preencheSomaAsteriscos(numeroFiguras, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("\nQuadro COM a obra de arte:\n\n");
                printMatrizChar(LIN, COL, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("Criar outra obra de arte com o mesmo número de figuras?\n\n    0 - Não.\n    1 - Sim.\n");
                scanf("%d", &repetir);

            } while(repetir);
            break;

        case 3:;

            do{

                criaQuadroVazio(quadro);

                if(!repetir){
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro SEM a obra de arte:\n\n");
                    printMatrizChar(LIN, COL, quadro);
                    printf("\nEscolha o número de figuras da obra de arte: ");
                    scanf("%d", &numeroFiguras);
                    numeroFiguras = normalizaNumero(numeroFiguras);

                }

                preencheXAsteriscos(numeroFiguras, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("\nQuadro COM a obra de arte:\n\n");
                printMatrizChar(LIN, COL, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("Criar outra obra de arte com o mesmo número de figuras?\n\n    0 - Não.\n    1 - Sim.\n");
                scanf("%d", &repetir);

            } while(repetir);
            break;

        case 4:;

            do{

                criaQuadroVazio(quadro);

                if(!repetir){
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro SEM a obra de arte:\n\n");
                    printMatrizChar(LIN, COL, quadro);
                    printf("\nEscolha o número de figuras da obra de arte: ");
                    scanf("%d", &numeroFiguras);
                    numeroFiguras = normalizaNumero(numeroFiguras);

                }

                preencheFigsAleatorias(numeroFiguras, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("\nQuadro COM a obra de arte:\n\n");
                printMatrizChar(LIN, COL, quadro);

                printf("\n|===========================================================================================================|\n");
                printf("Criar outra obra de arte com o mesmo número de figuras?\n\n    0 - Não.\n    1 - Sim.\n");
                scanf("%d", &repetir);

            } while(repetir);
            break;

        case 5:;

            int opcao2;

            printf("\nEscolha a opção especial:\n\n    1 - Quadro feito com sequência de Fibonacci e serie harmonica.\n    2 - Jogo Snake automático espiral.\n    3 - Jogo Snake automático zig zag.\n");
            scanf("%d", &opcao2);

            switch (opcao2){
                case 1:;

                    criaQuadroVazio(quadro);
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro SEM a obra de arte:\n\n");
                    printMatrizChar(LIN, COL, quadro);
                    
                    printf("\n|===========================================================================================================|\n");
                    printf("\nQuadro COM a obra de arte:\n\n");
                    preencheRetasFibonacci(quadro);
                    printMatrizChar(LIN, COL, quadro);

                break;

                case 2:

                    criaQuadroVazioAlternativo(quadro);
                    printMatrizChar(LIN, COL, quadro);
                    preencheComidas(quadro);
                    percorreSnakeEspiral(quadro);
                
                break;

                case 3:

                    criaQuadroVazioAlternativo(quadro);
                    printMatrizChar(LIN, COL, quadro);
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
