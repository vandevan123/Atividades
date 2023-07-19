#include <stdio.h>

void cabecalho(){
  printf("Instituto Federal da Bahia;\n");
  printf("Avaliação Prática;\n");
  printf("Disciplina: Estrutura de Dados;\n");
  printf("Professor: Djalma A. Lima FH;\n");
  printf("Dupla: Samara Brandão e Vandevan Silva dos Passos;\n");
  printf("Turma: 732;\n");
  printf("Questão: 1.\n\n");
}
  int divisivel(int n1){
    if(n1%3==0 && n1%7==0){
      printf("O número digitado %d é divisível por 3 e 7 ", n1);
      return n1;
    }else{
      printf("O número não é divisível por 3 e 7 ");
    }
  
  }

int main() {
cabecalho();
  int num1;
  printf("Digite um número: ");
  scanf("%d", &num1);

  int resultado = divisivel(num1);

  
  return 0;
}