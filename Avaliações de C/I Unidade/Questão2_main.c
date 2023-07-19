#include <stdio.h>
void cabecalho(){
  printf("Instituto Federal da Bahia;\n");
  printf("Avaliação Prática;\n");
  printf("Disciplina: Estrutura de Dados;\n");
  printf("Professor: Djalma A. Lima FH;\n");
  printf("Dupla: Samara Brandão e Vandevan Silva dos Passos;\n");
  printf("Turma: 732;\n");
  printf("Questão: 2.\n");
}
float calcularVenda(n1){
  float novoValor = 0;
  if(n1<20){
    novoValor = (n1*0.45)+n1;
    return novoValor;
  }else{
     novoValor = (n1*0.30)+n1;
    return novoValor;
  }
}

int main(void) {
  cabecalho();
  int valor;
  printf("Informe o valor do produto: \n");
  scanf("%d", &valor);

  float valor1 = calcularVenda(valor);
  printf("%.2f R$ é o valor da venda.", valor1);
  
  return 0;
}