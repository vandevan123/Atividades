#include <stdio.h>
#include <math.h>

#define VETOR 7

void cabecalho() {
  printf("\tInstituto Federal da bahia\n");
  printf("\tAvaliação prática\n");
  printf("\tDisciplina: Estrutura de Dados\n");
  printf("\tNome do aluno: Hiarles de Souza Queiroz e Vandevan Silva dos Passos\n"); 
  printf("\tTurma: 732\n");
  printf("\tQuestão: 04.\n\n\n"); 
}

int MediaArredondada(float nota1, float nota2) {
    float media = (nota1 + nota2) / 2;
    return (media);
}

char* Situacao(int media) {
    if (media >= 7) {
        return "Aprovado";
    } else {
        return "Reprovado";
    }
}

int main() {

  cabecalho(); 
  
    float notas1[VETOR];
    float notas2[VETOR];
    int medias[VETOR];

    printf("Usuário, por favor, digite as notas da primeira prova:\n\n");
    for (int i = 0; i < VETOR; i++) {
        printf("Aluno(a) %d: ", i + 1);
        scanf("%f", &notas1[i]);
    }
    printf("\nUsuário, por favor, digite as notas da segunda prova:\n\n");
    for (int i = 0; i < VETOR; i++) {
        printf("Aluno(a) %d: ", i + 1);
        scanf("%f", &notas2[i]);
    }
  
    for (int i = 0; i < VETOR; i++) {
        medias[i] = MediaArredondada(notas1[i], notas2[i]);
    }

    printf("\n\nAluno\tNota 1\tNota 2\tMédia\tSituação\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < VETOR; i++) {
        char* situacao = Situacao(medias[i]);
        printf("  %d   \t%.1f  \t%.1f   \t%d  \t%s\n", i + 1, notas1[i], notas2[i], medias[i], situacao);
    }

    return 0;
}