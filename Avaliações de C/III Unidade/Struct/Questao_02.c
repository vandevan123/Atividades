#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATOS 10

int cabecalho() {
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho.\n");
  printf("\tAluno(a): Vandevan Passos e Nicholas Rafael.\n");
  printf("\tQuestão 04.\n\n\n"); 

  return 0;
}

struct CandidatoEleitoral {
    char nome[10];
    char cpf[12];
    char partido[10];
};

struct Partido {
    char nome[10];
    int quantidadeCandidatos;
};

struct CandidatoEleitoral candidatos[MAX_CANDIDATOS];
struct Partido partidos[2]; 

int numCandidatos = 0;

void cadastrarCandidato() {
    if (numCandidatos < MAX_CANDIDATOS) {
        struct CandidatoEleitoral candidato;
        printf("Digite o nome do candidato: ");
        scanf("%s", candidato.nome);
        printf("Digite o CPF do candidato: ");
        scanf("%s", candidato.cpf);
        printf("Digite o partido do candidato (PT/DEM): ");
        scanf("%s", candidato.partido);

        if (strcmp(candidato.partido, "PT") == 0) {
            partidos[0].quantidadeCandidatos++;
        } else if (strcmp(candidato.partido, "DEM") == 0) {
            partidos[1].quantidadeCandidatos++;
        }

        candidatos[numCandidatos] = candidato;
        numCandidatos++;

        printf("Candidato cadastrado com sucesso!\n");
    } else {
        printf("Limite de candidatos atingido.\n");
    }
}

void cadastrarPartido() {
    char nome[10];
    printf("Digite o nome do partido (PT/DEM): ");
    scanf("%s", nome);

    if (strcmp(nome, "PT") == 0) {
        strcpy(partidos[0].nome, nome);
    } else if (strcmp(nome, "DEM") == 0) {
        strcpy(partidos[1].nome, nome);
    } else {
        printf("Partido inválido.\n");
    }
}

void procurarCandidatoPorCPF() {
    char cpf[12];
    printf("Digite o CPF do candidato que deseja encontrar: ");
    scanf("%s", cpf);

    for (int i = 0; i < numCandidatos; i++) {
        if (strcmp(candidatos[i].cpf, cpf) == 0) {
            printf("Candidato encontrado:\n");
            printf("Nome: %s\n", candidatos[i].nome);
            printf("CPF: %s\n", candidatos[i].cpf);
            printf("Partido: %s\n", candidatos[i].partido);
            return;
        }
    }
    printf("Candidato não encontrado.\n");
}

void imprimirMediaCandidatosPartidos() {
    for (int i = 0; i < 2; i++) {
        if (partidos[i].quantidadeCandidatos > 0) {
            printf("Partido: %s\n", partidos[i].nome);
            printf("Média de candidatos: %.2f\n", (float)partidos[i].quantidadeCandidatos);
        }
    }
}

int main() {

  cabecalho();
  
    int opcao;

    while (1) {
        printf("\nTela de Menu:\n");
        printf("1. Cadastrar Candidato\n");
        printf("2. Cadastrar Partido (PT/DEM)\n");
        printf("3. Procurar Candidato pelo CPF\n");
        printf("4. Imprimir Média de Candidatos dos Partidos\n");
        printf("5. Sair do Programa\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCandidato();
                break;
            case 2:
                cadastrarPartido();
                break;
            case 3:
                procurarCandidatoPorCPF();
                break;
            case 4:
                imprimirMediaCandidatosPartidos();
                break;
            case 5:
                printf("Saida do programa realizada com sucesso.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
    return 0;
}