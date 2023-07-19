#include <stdio.h>
void cabecalho(){
  printf("Instituto Federal da Bahia;\n");
  printf("Avaliação Prática;\n");
  printf("Disciplina: Estrutura de Dados;\n");
  printf("Professor: Djalma A. Lima FH;\n");
  printf("Dupla: Samara Brandão e Vandevan Silva dos Passos;\n");
  printf("Turma: 732;\n");
  printf("Questão: 4.\n\n");
}
float verificarPrestacao(float salarioBruto, float Vprestacao){

  float verificar = salarioBruto*0.38;
  if(Vprestacao<=verificar){
    printf("Prestação concedida.");
    return verificar;
  }else{
    printf("Prestação não concedida.");
    return verificar;
  }
}

int main(void) {
  cabecalho();
  float salario;
  float prestacao;

  printf("Informe o valor do seu salário: ");
  scanf("%f", &salario);

  printf("Informe o valor da prestação: ");
  scanf("%f", &prestacao);

  float check = verificarPrestacao(salario,prestacao);
  
  return 0;
}