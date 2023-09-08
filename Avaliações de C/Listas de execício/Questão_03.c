#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        printf("Erro! Divisão por zero.\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int Valor1, Valor2;
    int *Ponteiro1, *Ponteiro2;

    Valor1 = 0;
    Valor2 = 0;
    
    Ponteiro1 = &Valor1;
    Ponteiro2 = &Valor2;
    
    printf("Usuário, por favor, digite o primeiro número: ");
    scanf("%d", Ponteiro1);
    
    printf("Agora, digite o segundo número: ");
    scanf("%d", Ponteiro2);

    int soma = somar(*Ponteiro1, *Ponteiro2);
    int subtracao = subtrair(*Ponteiro1, *Ponteiro2);
    int multiplicacao = multiplicar(*Ponteiro1, *Ponteiro2);
    float divisao = dividir(*Ponteiro1, *Ponteiro2);

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}
