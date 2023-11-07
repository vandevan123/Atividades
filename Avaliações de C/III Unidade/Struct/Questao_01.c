#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 10

int cabecalho() {
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho.\n");
  printf("\tAluno(a): Vandevan Passos e Nicholas Rafael.\n");
  printf("\tQuestão 01.\n\n\n"); 

  return 0;
}

struct Funcionario {
    char nome[20];
    char sexo;
    char funcao[20];
    float salario;
};

struct Funcionario funcionarios[MAX_FUNCIONARIOS];
int numFuncionarios = 0;

void cadastrarAnalistaRedes() {
    if (numFuncionarios < MAX_FUNCIONARIOS) {
        struct Funcionario funcionario;
        printf("Digite o nome do funcionário: ");
        scanf("%s", funcionario.nome);
        printf("Digite o sexo do funcionário (M/F): ");
        scanf(" %c", &funcionario.sexo);
        printf("Digite o salário do funcionário: ");
        scanf("%f", &funcionario.salario);
        strcpy(funcionario.funcao, "Analista de Redes");

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
        printf("Digite o nome do funcionário: ");
        scanf("%s", funcionario.nome);
        printf("Digite o sexo do funcionário (M/F): ");
        scanf(" %c", &funcionario.sexo);
        printf("Digite o salário do funcionário: ");
        scanf("%f", &funcionario.salario);
        strcpy(funcionario.funcao, "Técnico de Redes");

        funcionarios[numFuncionarios] = funcionario;
        numFuncionarios++;

        printf("Funcionário cadastrado como Técnico de Redes com sucesso!\n");
    } else {
        printf("Limite de funcionários atingido.\n");
    }
}

void procurarFuncionarioPorNome() {
    char nome[20];
    printf("Digite o nome do funcionário que deseja encontrar: ");
    scanf("%s", nome);

    for (int i = 0; i < numFuncionarios; i++) {
        if (strcmp(funcionarios[i].nome, nome) == 0) {
            printf("Funcionário encontrado:\n");
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Sexo: %c\n", funcionarios[i].sexo);
            printf("Função: %s\n", funcionarios[i].funcao);
            printf("Salário: %.2f\n", funcionarios[i].salario);
            return;
        }
    }
    printf("Funcionário não encontrado.\n");
}

void imprimirMediaSalarial() {
    float somaSalarios = 0;
    for (int i = 0; i < numFuncionarios; i++) {
        somaSalarios += funcionarios[i].salario;
    }

    if (numFuncionarios > 0) {
        printf("Média salarial dos funcionários da empresa: %.2f\n", somaSalarios / numFuncionarios);
    } else {
        printf("Nenhum funcionário cadastrado.\n");
    }
}

int main() {
    int opcao;

    while (1) {
        printf("\nTela de Menu:\n");
        printf("1. Cadastrar Funcionário no Cargo Analista de Redes\n");
        printf("2. Cadastrar Funcionário no Cargo de Técnico de Redes\n");
        printf("3. Procurar Funcionário pelo Nome\n");
        printf("4. Imprimir a média salarial dos Funcionários da Empresa\n");
        printf("5. Sair do Programa\n");
        printf("Escolha uma opção: ");
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
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
