#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 10

int cabecalho() {
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho.\n");
  printf("\tAluno(a): Vandevan Passos e Nicholas Rafael.\n");
  printf("\tQuestão 04.\n\n\n"); 

  return 0;
}

struct Funcionario {
  char nome[10];
  char cargo[10];
  float salario;
};

struct Funcionario funcionarios[MAX_FUNCIONARIOS];

int numFuncionarios = 0;

void cadastrarAnalistaRedes() {
  if (numFuncionarios < MAX_FUNCIONARIOS) {
    struct Funcionario funcionario;
    printf("Digite o nome do funcionário: ");
    scanf("%s", funcionario.nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);
    strcpy(funcionario.cargo, "Analista de Redes");

    funcionarios[numFuncionarios] = funcionario;
    numFuncionarios++;

    printf("Funcionário cadastrado como Analista de Redes com sucesso!\n");
  } else {
    printf("Limite de funcionários atingido.\n");
  }
}

void cadastrarTecnicoRedes() {
  if (numFuncionarios < MAX_FUNCIONARIOS) {
    struct Funcionario funcionario;
    printf("\nDigite o nome do funcionário: ");
    scanf("%s", funcionario.nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);
    strcpy(funcionario.cargo, "Técnico de Redes");

    funcionarios[numFuncionarios] = funcionario;
    numFuncionarios++;

    printf("\nFuncionário cadastrado com sucesso como Técnico de Redes com "
           "sucesso!\n");
  } else {
    printf("\nLimite de funcionários atingido.\n");
  }
}

void procurarFuncionarioPorNome() {
  char nome[50];
  printf("\nDigite o nome do funcionário que deseja encontrar: ");
  scanf("%s", nome);

  for (int i = 0; i < numFuncionarios; i++) {
    if (strcmp(funcionarios[i].nome, nome) == 0) {
      printf("\nFuncionário encontrado:\n");
      printf("Nome: %s\n", funcionarios[i].nome);
      printf("Cargo: %s\n", funcionarios[i].cargo);
      printf("Salário: %.2f\n", funcionarios[i].salario);
      return;
    }
  }
  printf("\nFuncionário não encontrado.\n");
}

void imprimirMediaSalarial() {
  float somaSalarios = 0;
  for (int i = 0; i < numFuncionarios; i++) {
    somaSalarios += funcionarios[i].salario;
  }

  if (numFuncionarios > 0) {
    printf("\nMédia salarial dos funcionários da empresa: %.2f\n",
           somaSalarios / numFuncionarios);
  } else {
    printf("\nNenhum funcionário cadastrado.\n");
  }
}

int main() {

  cabecalho();

  int opcao;

  while (1) {
    printf("\nTela de Menu:\n\n");
    printf("1. Cadastrar Funcionário no Cargo Analista de Redes\n");
    printf("2. Cadastrar Funcionário no Cargo de Técnico de Redes\n");
    printf("3. Procurar Funcionário pelo Nome\n");
    printf("4. Imprimir a média salarial dos Funcionários da Empresa\n");
    printf("5. Sair do Programa\n\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      cadastrarAnalistaRedes();
      break;
    case 2:
      cadastrarTecnicoRedes();
      break;
    case 3:
      procurarFuncionarioPorNome();
      break;
    case 4:
      imprimirMediaSalarial();
      break;
    case 5:
      printf("\nSaida do programa realizado com suceeso.\n");
      return 0;
    default:
      printf("\nOpção de escolha inválida. Por favor, tente novamente.\n");
    }
  }
  return 0;
}