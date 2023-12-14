#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum{
    TRES = 3,
    MIL = 1000,
    CINQUENTAMIL = 50000,
    CEMMIL = 100000,
    DUZENTOSMIL = 200000
};

typedef struct Aluno{

    int matricula;
    char nome[7];
    char curso[12];
    double rendimento;
    int periodo;
}Aluno;


void programa(int n);


void criaAluno(Aluno vetor[],int n);
void imprimeVetor(Aluno vetor[], int n);
void liberaVetor(Aluno vetor[]);

void selectSort(Aluno vetor[],int n,int long *comparacao, int long *movimentacao);

void insertSort(Aluno vetor[],int n,int long *comparacao, int long *movimentacao);

void mergeSort(Aluno vetor[], int l, int r,int long *comparacao, int long *movimentacao);
void merge(Aluno vetor[], int l, int m, int r,int long *comparacao, int long *movimentacao);

int partition(Aluno vetor[], int low, int high,int long *comparacao, int long *movimentacao);
void quickSort(Aluno vetor[], int low, int high,int long *comparacao, int long *movimentacao);

void inverterVetor(Aluno vetor[], int n);



void OrdenaSelect(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca);
void OrdenaInsert(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca);
void OrdenaQuick(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca);
void OrdenaMerge(int n, Aluno *vetor, char *caminho_arquivo, FILE *console_output,int inverte,int aloca);

