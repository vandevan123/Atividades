#include <stdio.h>

void cabecalho() {
  printf("\tInstituto Federal da bahia\n");
  printf("\tAvaliação prática\n");
  printf("\tDisciplina: Estrutura de Dados\n");
  printf("\tNome do aluno: Hiarles de Souza Queiroz e Vandevan Silva dos Passos\n"); 
  printf("\tTurma: 732\n");
  printf("\tQuestão: 03.\n\n\n"); 
}

int main() {

    cabecalho();
    float preco_compra, preco_venda, lucro;
    int count_lucro_10_20 = 0, count_lucro_20 = 0, count_lucro_lt_10 = 0;
    
    for(int i=1; i<=13; i++) {
        printf("Digite o preco de compra da mercadoria %d: ", i);
        scanf("%f", &preco_compra);
        printf("Digite o preço de venda da mercadoria %d: ", i);
        scanf("%f", &preco_venda);
        
        lucro = (preco_venda/preco_compra)*100;
        
        if(lucro < 10) {
            count_lucro_lt_10++;
        } else if (lucro <= 20) {
            count_lucro_10_20++;
        } else {
            count_lucro_20++;
        }
    }
    
    printf("\nQuantidade de mercadorias com lucro inferior a 10%%: %d", count_lucro_lt_10);
    printf("\nQuantidade de mercadorias com lucro entre 10%% e 20%%: %d", count_lucro_10_20);
    printf("\nQuantidade de mercadorias com lucro superior a 20%%: %d", count_lucro_20);
    
    return 0;
}