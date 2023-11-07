#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATOS 10
#define MAX_NOME_LENGTH 50
#define MAX_CURSO_LENGTH 50


int cabecalho() {
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho.\n");
  printf("\tAluno(a): Vandevan Passos e Nicholas Rafael.\n");
  printf("\tQuestão 03.\n\n\n"); 

  return 0;
}

struct Candidato_Vestibular {
    char nome[MAX_NOME_LENGTH];
    int idade;
    char curso[MAX_CURSO_LENGTH];
};

struct Candidato_Vestibular candidatos[MAX_CANDIDATOS];
int numCandidatos = 0;

void cadastrarCandidato() {
    if (numCandidatos < MAX_CANDIDATOS) {
        struct Candidato_Vestibular candidato;
        printf("Digite o nome do candidato: ");
        scanf("%s", candidato.nome);
        printf("Digite a idade do candidato: ");
        scanf("%d", &candidato.idade);
        printf("Digite o curso do candidato: ");
        scanf("%s", candidato.curso);

        candidatos[numCandidatos] = candidato;
        numCandidatos++;

        printf("Candidato cadastrado com sucesso!\n");
    } else {
        printf("Limite de candidatos atingido.\n");
    }
}

void buscarCandidatoPorNome() {
    char nome[MAX_NOME_LENGTH];
    printf("Digite o nome do candidato que deseja encontrar: ");
    scanf("%s", nome);

    for (int i = 0; i < numCandidatos; i++) {
        if (strcmp(candidatos[i].nome, nome) == 0) {
            printf("Candidato encontrado:\n");
            printf("Nome: %s\n", candidatos[i].nome);
            printf("Idade: %d\n", candidatos[i].idade);
            printf("Curso: %s\n", candidatos[i].curso);
            return;
        }
    }
    printf("Candidato não encontrado.\n");
}

void imprimirQuantidadeCandidatosPorCurso() {
    char curso[MAX_CURSO_LENGTH];
    printf("Digite o nome do curso para verificar a quantidade de candidatos inscritos: ");
    scanf("%s", curso);

    int count = 0;
    for (int i = 0; i < numCandidatos; i++) {
        if (strcmp(candidatos[i].curso, curso) == 0) {
            count++;
        }
    }
    printf("Quantidade de candidatos inscritos no curso '%s': %d\n", curso, count);
}

void imprimirMediaCandidatos() {
    if (numCandidatos > 0) {
        printf("Média de candidatos cadastrados no vestibular: %.2f\n", (float)numCandidatos / MAX_CANDIDATOS);
    } else {
        printf("Nenhum candidato cadastrado.\n");
    }
}

int main() {

  cabecalho();
  
    int opcao;

    while (1) {
        printf("\nTela de Menu:\n");
        printf("1. Cadastrar Nome/Idade/Curso\n");
        printf("2. Buscar Candidato pelo Nome\n");
        printf("3. Imprimir a quantidade de candidatos inscritos por Curso\n");
        printf("4. Imprimir a média de candidatos cadastrados no Vestibular\n");
        printf("5. Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCandidato();
                break;
            case 2:
                buscarCandidatoPorNome();
                break;
            case 3:
                imprimirQuantidadeCandidatosPorCurso();
                break;
            case 4:
                imprimirMediaCandidatos();
                break;
            case 5:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    }

    return 0;
}
