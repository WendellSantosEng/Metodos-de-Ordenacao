#include "Ordenacao.h"


    void selectSort(Aluno vetor[], int n,int long *comparacao, int long *movimentacao){
        int i, j, min;
        Aluno temp;


        for (i = 0; i < n - 1; i++) {
            min = i;
            (*movimentacao)++;
            for (j = i + 1; j < n; j++) {
                if (vetor[j].matricula < vetor[min].matricula) {
                    min = j;
                    (*movimentacao)++;
                    (*comparacao)++;
                }
            }
            temp = vetor[min];
            (*movimentacao)++;
            vetor[min] = vetor[i];
            (*movimentacao)++;
            vetor[i] = temp;
            (*movimentacao)++;
        }
    }


    void insertSort(Aluno vetor[], int n,int long *comparacao, int long *movimentacao){
        int i, j;
        Aluno temp;

        for (i = 1; i < n; i++) {
            temp = vetor[i];
            (*movimentacao)++;
            j = i - 1;

            while (j >= 0 && temp.matricula < vetor[j].matricula) {
                vetor[j + 1] = vetor[j];
                (*movimentacao)++;
                (*comparacao)++;
                j--;
            }

            vetor[j + 1] = temp;
            (*movimentacao)++;
        }
    }





    void merge(Aluno vetor[], int l, int m, int r,int long *comparacao, int long *movimentacao){
        if (l <= r) {  // Verificação de limites
            int i, j, k;
            int n1 = m - l + 1;
            (*movimentacao)++;
            int n2 = r - m;
            (*movimentacao)++;

            // Vetores temporários para armazenar metade esquerda e direita
            Aluno *L = (Aluno *)malloc(n1 * sizeof(Aluno));
            Aluno *R = (Aluno *)malloc(n2 * sizeof(Aluno));

            // Verifica se a alocação foi bem-sucedida antes de prosseguir
            if (L == NULL || R == NULL) {
                printf("Erro na alocação de memória.\n");
                exit(1);  // Encerra o programa com código de erro
            }

            // Copiando dados para os vetores temporários L[] e R[]
            for (i = 0; i < n1; i++)
                L[i] = vetor[l + i];
                (*movimentacao)++;
            for (j = 0; j < n2; j++)
                R[j] = vetor[m + 1 + j];
                (*movimentacao)++;

            i = 0;
            j = 0;
            k = l;
            while (i < n1 && j < n2) {
                (*comparacao)++;
                if (L[i].matricula <= R[j].matricula) {
                    vetor[k] = L[i];
                    (*movimentacao)++;
                    (*comparacao)++;
                    i++;
                } else {
                    vetor[k] = R[j];
                    (*movimentacao)++;
                    (*comparacao)++;
                    j++;
                }
                k++;
            }

            // Copiando os elementos restantes de L[], se houver
            while (i < n1) {
                vetor[k] = L[i];
                (*movimentacao)++;
                (*comparacao)++;
                i++;
                k++;
            }

            // Copiando os elementos restantes de R[], se houver
            while (j < n2) {
                vetor[k] = R[j];
                (*movimentacao)++;
                (*comparacao)++;
                j++;
                k++;
            }

            // Liberando a memória alocada para os vetores temporários
            free(L);
            free(R);
        }
    }

    void mergeSort(Aluno vetor[], int l, int r,int long *comparacao, int long *movimentacao) {
        if (l < r) {
            int m = l + (r - l) / 2;
            (*comparacao)++;

            mergeSort(vetor, l, m,comparacao,movimentacao);
            mergeSort(vetor, m + 1, r,comparacao,movimentacao);

            merge(vetor, l, m, r,comparacao,movimentacao);
        }
    }




   int partition(Aluno vetor[], int low, int high,int long *comparacao, int long *movimentacao) {
        int pivot = vetor[high].matricula;
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (vetor[j].matricula < pivot) {
                (*comparacao)++;
                i++;
                // Troca vetor[i] e vetor[j]
                Aluno temp = vetor[i];
                (*movimentacao)++;
                vetor[i] = vetor[j];
                (*movimentacao)++;
                vetor[j] = temp;
                (*movimentacao)++;
            }
        }

        // Troca vetor[i + 1] e vetor[high] (o pivot)
        Aluno temp = vetor[i + 1];
        (*movimentacao)++;
        vetor[i + 1] = vetor[high];
        (*movimentacao)++;
        vetor[high] = temp;
        (*movimentacao)++;

        return (i + 1);
    }

    void quickSort(Aluno vetor[], int low, int high,int long *comparacao, int long *movimentacao){
        if (low < high) {
            (*comparacao)++;
            // Encontra o índice de partição
            int pi = partition(vetor, low, high, comparacao, movimentacao);

            // Recursivamente ordena os elementos antes e depois da partição
            quickSort(vetor, low, pi - 1,comparacao,movimentacao);
            quickSort(vetor, pi + 1, high,comparacao,movimentacao);
        }
    }


    void inverterVetor(Aluno vetor[], int n) {
        int inicio = 0;
        int fim = n - 1;

        while (inicio < fim) {
            // Troca os elementos nas extremidades do vetor
            Aluno temp = vetor[inicio];
            vetor[inicio] = vetor[fim];
            vetor[fim] = temp;

            // Move os índices para o próximo par de elementos
            inicio++;
            fim--;
        }
    }

