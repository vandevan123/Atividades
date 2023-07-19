#include <stdio.h>
void cabecalho(){
  printf("Instituto Federal da Bahia;\n");
  printf("Avaliação Prática;\n");
  printf("Disciplina: Estrutura de Dados;\n");
  printf("Professor: Djalma A. Lima FH;\n");
  printf("Dupla: Samara Brandão e Vandevan Silva dos Passos;\n");
  printf("Turma: 732;\n");
  printf("Questão: 3.\n\n");
}
float calculo_corrida(float km, int tipo){
  float litro =0;
  if(tipo==1){
    litro += km/1.80;
    return litro;
  }  
  if(tipo==2){
    litro += km/2.30;
    return litro;
  }
}

int main(void) {
  cabecalho();
  float distancia;
  printf("Informe a distância percorrida: \n");
  scanf("%f", &distancia);

  int bandeira;
  printf("Informe o tipo da bandeira da corrida: \n");
  scanf("%d", &bandeira);

  float litro_pcorrida =  calculo_corrida(distancia, bandeira);

  printf("\n%.2f", litro_pcorrida);
  return 0;
}