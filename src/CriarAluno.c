#include "Ordenacao.h"

void criaAluno(Aluno vetor[],int n){

    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for(int i = 0; i<n ; i++){
        for(int j=0;j<6;j++){
            int valor_letra = rand() % 25 + 1;
            vetor[i].nome[j] = alfabeto[valor_letra];
        }
        vetor[i].nome[6] = '\0';

        strcpy(vetor[i].curso,"computacao");
        vetor[i].matricula = rand() % 99999 + 10000;
        vetor[i].periodo = rand() % 10 + 1;
        vetor[i].rendimento = rand() % 100 + 1;
    }
}

void imprimeVetor(Aluno vetor[], int n){

    for(int i=0;i<n;i++){

        printf("Nome : %s\n", vetor[i].nome);
        printf("Matricula : %d\n", vetor[i].matricula);
        printf("Curso : %s\n", vetor[i].curso);
        printf("Rendimento : %f\n", vetor[i].rendimento);
        printf("Periodo : %d\n\n", vetor[i].periodo);
    }
}

void liberaVetor(Aluno vetor[]) {
    free(vetor);
}