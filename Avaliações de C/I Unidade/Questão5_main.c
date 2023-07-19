#include <stdio.h>

void cabecalho(){
  printf("Instituto Federal da Bahia;\n");
  printf("Avaliação Prática;\n");
  printf("Disciplina: Estrutura de Dados;\n");
  printf("Professor: Djalma A. Lima FH;\n");
  printf("Dupla: Samara Brandão e Vandevan Silva dos Passos;\n");
  printf("Turma: 732;\n");
  printf("Questão: 5.\n\n");
}
float desconto_inss(float nSalario){
  float novoSalario;

  if(nSalario<=600){
    printf("Isento.");
    printf("\nSalário igual a: %2.f", nSalario);
    return nSalario;
  }
  if(nSalario>600 && nSalario<=1200){
    novoSalario = nSalario-(nSalario*0.20);
    printf("\nNovo salário igual a: %.2f R$", novoSalario);
    return novoSalario;
  }
   if(nSalario>1200 && nSalario<=2000){
    novoSalario = nSalario-(nSalario*0.25);
    printf("\nNovo salário igual a: %.2f R$", novoSalario);
    return novoSalario;
  }
  if(nSalario>2000){
    novoSalario = nSalario-(nSalario*0.30);
    printf("\nNovo salário igual a: %.2f R$", novoSalario);
    return novoSalario;
  }
  
}

int main() {

  float salario;
  printf("Informe o seu salário: ");
  scanf("%f", &salario);

  float desconto = desconto_inss(salario);

  
  return 0;
}