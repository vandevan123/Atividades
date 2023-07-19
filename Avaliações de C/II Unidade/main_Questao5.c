#include <stdio.h>

#define LINHAS 2
#define COLUNAS 2

void cabecalho() {
  printf("\tInstituto Federal da bahia\n");
  printf("\tAvaliação prática\n");
  printf("\tDisciplina: Estrutura de Dados\n");
  printf("\tNome do aluno: Hiarles de Souza Queiroz e Vandevan Silva dos Passos\n"); 
  printf("\tTurma: 732\n");
  printf("\tQuestão: 05.\n\n\n"); 
}

int main() {
  
  cabecalho();
  
    int A[LINHAS][COLUNAS];
    int B[LINHAS][COLUNAS];
    int SOMA[LINHAS][COLUNAS];
    
    printf("Usuário, por favor, digite os valores para a matriz A:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
  
    printf("\n\nUsuário, por favor, digite os valores para a matriz B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
  
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            SOMA[i][j] = A[i][j] + B[i][j];
        }
    }
  
    printf("\n\nA matriz SOMA[2][2] é:\n\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", SOMA[i][j]);
        }
        printf("\n");
    }
    return 0;
}