#include "Ordenacao.h"

void OrdenaSelect(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca){
    int op=0;
    clock_t start, end;
    double cpu_time_used;
    int long comparacao=0, movimentacao=0;

    printf("SELECT SORT\n\n");

    if(aloca == 0){
        vetor = (Aluno *)malloc(n*sizeof(Aluno));
    }

    criaAluno(vetor,n);
    
    /*printf("Deseja imprimir o vetor desordenado: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor desordenado\n\n");
        imprimeVetor(vetor,n);
    }
    op=0;

    // Redireciona a saída padrão para o arquivo
    freopen(caminho_arquivo, "a", console_output);

    printf("=> SELECT SORT\n");
    printf("   Tamanho %d\n",n);
    
    if(inverte == 1){
        inverterVetor(vetor,n);
    }
    
    start = clock();

    selectSort(vetor, n,&comparacao, &movimentacao);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("   Tempo de execução: %f segundos\n", cpu_time_used);
    printf("   Movimentacoes = %ld , Comparacoes = %ld\n\n", movimentacao,comparacao);
    movimentacao = 0;
    comparacao = 0;

    // Fecha o redirecionamento da saída padrão para o arquivo
    freopen("CON", "w", console_output);

    /*printf("Deseja imprimir o vetor: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor ordenado\n\n");
        imprimeVetor(vetor,n);
    }
}


void OrdenaInsert(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca){
    
    int op=0;
    clock_t start, end;
    double cpu_time_used;
    int long comparacao=0, movimentacao=0;
    
    printf("\n\n        INSERT SORT         \n\n");

    start = clock();
    
    if(aloca == 0){
        vetor = (Aluno *)malloc(n*sizeof(Aluno));
    }

    criaAluno(vetor,n);

    /*printf("Deseja imprimir o vetor desordenado: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor desordenado\n\n");
        imprimeVetor(vetor,n);
    }
    op=0;

    // Redireciona a saída padrão para o arquivo
    freopen(caminho_arquivo, "a", console_output);

    printf("=> INSERT SORT\n");
    printf("   Tamanho %d\n",n);

    if(inverte == 1){
        inverterVetor(vetor,n);
    }

    start = clock();

    insertSort(vetor, n,&comparacao, &movimentacao);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("   Tempo de execução: %f segundos\n", cpu_time_used);
    printf("   Movimentacoes = %ld , Comparacoes = %ld\n\n", movimentacao,comparacao);
    movimentacao = 0;
    comparacao = 0;

    // Fecha o redirecionamento da saída padrão para o arquivo
    freopen("CON", "w", console_output);

    /*printf("Deseja imprimir o vetor: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor ordenado\n\n");
        imprimeVetor(vetor,n);
    }
}


void OrdenaQuick(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca){
    
    int op=0;
    clock_t start, end;
    double cpu_time_used;
    int long comparacao=0, movimentacao=0;
    
    printf("\n\n        QUICK SORT         \n\n");

    start = clock();

    if(aloca == 0){
        vetor = (Aluno *)malloc(n*sizeof(Aluno));
    }

    criaAluno(vetor,n);
    
    /*printf("Deseja imprimir o vetor desordenado: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor desordenado\n\n");
        imprimeVetor(vetor,n);
    }
    op=0;

    start = clock();
    
    // Redireciona a saída padrão para o arquivo

    freopen(caminho_arquivo, "a", console_output);

    printf("=> QUICK SORT\n");
    printf("   Tamanho %d\n",n);

    if(inverte == 1){
        inverterVetor(vetor,n);
    }

    freopen(caminho_arquivo, "a", console_output);

    start = clock();

    quickSort(vetor, 0, n - 1,&comparacao, &movimentacao);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("   Tempo de execução: %f segundos\n", cpu_time_used);
    printf("   Movimentacoes = %ld , Comparacoes = %ld\n\n", movimentacao,comparacao);
    movimentacao = 0;
    comparacao = 0;

    // Fecha o redirecionamento da saída padrão para o arquivo
    freopen("CON", "w", console_output);

    /*printf("Deseja imprimir o vetor: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor ordenado\n\n");
        imprimeVetor(vetor,n);
    }

}

void OrdenaMerge(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca){
    
    int op=0;
    clock_t start, end;
    double cpu_time_used;
    int long comparacao=0, movimentacao=0;

    printf("\n\n        MERGE SORT         \n\n");

    start = clock();

    if(aloca == 0){
        vetor = (Aluno *)malloc(n*sizeof(Aluno));
    }

    criaAluno(vetor,n);
    
    /*printf("Deseja imprimir o vetor desordenado: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor desordenado\n\n");
        imprimeVetor(vetor,n);
    }
    op=0;

    // Redireciona a saída padrão para o arquivo
    freopen(caminho_arquivo, "a", console_output);

    printf("=> MERGE SORT\n");
    printf("   Tamanho %d\n",n);

    if(inverte == 1){
        inverterVetor(vetor,n);
    }

    start = clock();

    mergeSort(vetor, 0, n - 1,&comparacao, &movimentacao);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("   Tempo de execução: %f segundos\n", cpu_time_used);
    printf("   Movimentacoes = %ld , Comparacoes = %ld\n\n", movimentacao,comparacao);
    movimentacao = 0;
    comparacao = 0;

    // Fecha o redirecionamento da saída padrão para o arquivo
    freopen("CON", "w", console_output);

    /*printf("Deseja imprimir o vetor: 1- sim, 2- nao\n");
    scanf("%d",&op);*/

    if(op == 1){
        printf("\nVetor ordenado\n\n");
        imprimeVetor(vetor,n);
    }
}
