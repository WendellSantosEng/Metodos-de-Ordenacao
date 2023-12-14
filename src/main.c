#include "Ordenacao.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: %s <caminho_do_arquivo>\n", argv[0]);
        return 1;
    }

    char *caminho_arquivo = argv[1];

    // FILE *arquivo = fopen(caminho, "w");

    srand(time(NULL));
    int n;

    Aluno *vetor;
    int long comparacao=0,movimentacao=0;

    //const char *caminho_arquivo = "src/info.txt";

    FILE *output_file = fopen(caminho_arquivo, "w");

    if (output_file == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    FILE *console_output = stdout;



printf("    INICIO DO PROGRAMA DE ANALISE DE ORDENACAO\n\n\n");

//              ORDENANDO ALEATORIO 1000 POSICOES 

    n=1000;
    vetor = (Aluno *)malloc(sizeof(Aluno));
    
    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/


//              ORDENANDO ALEATORIO 10000 POSICOES 

    n=10000;
    
    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaInsert(n, vetor, caminho_arquivo,console_output,0,0);
    liberaVetor(vetor);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

//              ORDENANDO ALEATORIO 100000 POSICOES 

    n=100000;

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);


//              ORDENANDO ALEATORIO 200000 POSICOES 

    n=200000;

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,0);
    liberaVetor(vetor);


//-------------------------------------------------------------------------------------------------------------------------------------



//              ORDENANDO ORDENADO 1000 POSICOES 
    n=1000;

    printf("    ORDENANDO VETORES JA ORDENADOS\n\n\n");

    vetor = (Aluno *)malloc(n*sizeof(Aluno));
    quickSort(vetor,0,n-1,&comparacao, &movimentacao);

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,1);
    liberaVetor(vetor);

//              ORDENANDO ORDENADO 10000 POSICOES 

    n=10000;
    vetor = (Aluno *)malloc(n*sizeof(Aluno));
    quickSort(vetor,0,n-1,&comparacao, &movimentacao);

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,1);
    liberaVetor(vetor);


//              ORDENANDO ORDENADO 100000 POSICOES 

    n=100000;
    vetor = (Aluno *)malloc(n*sizeof(Aluno));
    quickSort(vetor,0,n-1,&comparacao, &movimentacao);

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,1);
    liberaVetor(vetor);

//              ORDENANDO ORDENADO 200000 POSICOES 

    n=200000;
    vetor = (Aluno *)malloc(n*sizeof(Aluno));
    quickSort(vetor,0,n-1,&comparacao, &movimentacao);

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,0,1);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,0,1);
    liberaVetor(vetor);

///---------------------------------------------------------------------------------------------------------------------------------

//              ORDENANDO INVERSAMENTE ORDENADO 1000 POSICOES 
    n=1000;

    printf("    ORDENANDO VETORES INVERSAMENTE ORDENADOS\n\n\n");

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

    OrdenaInsert(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

    OrdenaMerge(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

    OrdenaQuick(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

//----------------------------------------------------------------------------------

//              ORDENANDO INVERSAMENTE ORDENADO 10000 POSICOES 
    n=10000;

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaInsert(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
   
    OrdenaMerge(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaQuick(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);


//----------------------------------------------------------------------------------


//              ORDENANDO INVERSAMENTE ORDENADO 100000 POSICOES 
    n=100000;

    OrdenaSelect(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaInsert(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaMerge(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    
    OrdenaQuick(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);


//----------------------------------------------------------------------------------

//              ORDENANDO INVERSAMENTE ORDENADO 200000 POSICOES 
    n=200000;

    
    OrdenaSelect(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
   
    OrdenaInsert(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaMerge(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

/*-------------------------------------------------------------------------------*/
    
    OrdenaQuick(n, vetor, caminho_arquivo, console_output,1,0);
    liberaVetor(vetor);

//----------------------------------------------------------------------------------

    fclose(output_file);
    return 0;
}