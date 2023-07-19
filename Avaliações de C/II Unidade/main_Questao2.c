#include <stdio.h>

#define VETOR 17

void cabecalho() {
  printf("\tInstituto Federal da bahia\n");
  printf("\tAvaliação prática\n");
  printf("\tDisciplina: Estrutura de Dados\n");
  printf("\tNome do aluno: Hiarles de Souza Queiroz e Vandevan Silva dos Passos\n"); 
  printf("\tTurma: 732\n");
  printf("\tQuestão: 02.\n\n\n"); 
}

int Maior(int vetor[]) {
    int maior = vetor[0];
    for (int i = 1; i < VETOR; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int Menor(int vetor[]) {
    int menor = vetor[0];
    for (int i = 1; i < VETOR; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

float PercentualPares(int vetor[]) {
    int pares = 0;
    for (int i = 0; i < VETOR; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    return (float)pares / VETOR * 100.0;
}


float calcularMedia(int vetor[]) {
    int soma = 0;
    for (int i = 0; i < VETOR; i++) {
        soma += vetor[i];
    }
    return (float)soma / VETOR;
}

int main() { //Função principal; 
   
  cabecalho(); 
  int vetor[VETOR];

    
    printf("Usuário, por favor, digite os %d elementos do vetor:\n\n", VETOR);
    for (int i = 0; i < VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = Maior(vetor);
    int menor = Menor(vetor);

    float percentualPares = PercentualPares(vetor);
    float media = calcularMedia(vetor);

    printf("\nO maior valor: %d\n", maior);
    printf("\nO menor valor: %d\n", menor);
    printf("\nPercentual de números pares: %.2f%%\n", percentualPares);
    printf("\nMédia dos elementos do vetor: %.2f\n", media);

    return 0;
}