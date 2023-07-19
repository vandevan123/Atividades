#include <stdio.h>

#define VETOR 11

void cabecalho() {
  printf("\tInstituto Federal da bahia\n");
  printf("\tAvaliação prática\n");
  printf("\tDisciplina: Estrutura de Dados\n");
  printf("\tNome do aluno: Hiarles de Souza Queiroz e Vandevan Silva dos Passos\n"); 
  printf("\tTurma: 732\n");
  printf("\tQuestão: 01.\n\n\n"); 
}

float calcularLucro(float compra, float venda) {
    return (venda / compra) * 100.0;
}

int main() {
  cabecalho(); 
  
    float precosCompra[VETOR];
    float precosVenda[VETOR];
    int lucroAbaixo10 = 0;
    int lucroEntre10e20 = 0;
    int lucroAcima20 = 0;

   
    printf("Usuário, por favor, digite os preços de compra e venda das mercadorias:\n");
    for (int i = 0; i < VETOR; i++) {
        printf("Mercadoria %d:\n", i + 1);
        printf("Preço de compra: ");
        scanf("%f", &precosCompra[i]);
        printf("Preço de venda: ");
        scanf("%f", &precosVenda[i]);
    }
  
    for (int i = 0; i < VETOR; i++) {
        float lucro = calcularLucro(precosCompra[i], precosVenda[i]);
        if (lucro < 10) {
            lucroAbaixo10++;
        } else if (lucro < 20) {
            lucroEntre10e20++;
        } else {
            lucroAcima20++;
        }
    }

    printf("\nResultados:\n");
    printf("Lucro < 10%%: %d mercadorias\n", lucroAbaixo10);
    printf("10%% <= Lucro < 20%%: %d mercadorias\n", lucroEntre10e20);
    printf("Lucro > 20%%: %d mercadorias\n", lucroAcima20);

    return 0;
}
