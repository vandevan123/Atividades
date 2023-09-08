#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int Valor1;
    int Valor2;
    int Valor3;
  
    int *Ponteiro1;
    int *Ponteiro2;
    int *Ponteiro3;

    Valor1 = 0;
    Valor2 = 0;
    Valor3 = 0;
    
    Ponteiro1 = &Valor1;
    Ponteiro2 = &Valor2;
    Ponteiro3 = &Valor3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", Ponteiro1);
    
    printf("Digite o segundo número: ");
    scanf("%d", Ponteiro2);

    printf("Digite o terceiro número: ");
    scanf("%d", Ponteiro3);

    if (*Ponteiro1 > *Ponteiro2) {
        trocar(Ponteiro1, Ponteiro2);
    }
    if (*Ponteiro1 > *Ponteiro3) {
        trocar(Ponteiro1, Ponteiro3);
    }
    if (*Ponteiro2 > *Ponteiro3) {
        trocar(Ponteiro2, Ponteiro3);
    }

    printf("Números em ordem crescente: %d, %d, %d\n", *Ponteiro1, *Ponteiro2, *Ponteiro3);
    printf("Endereço de memória do valor 1: %p\n", Ponteiro1);
    printf("Endereço de memória do valor 2: %p\n", Ponteiro2);
    printf("Endereço de memória do valor 3: %p\n", Ponteiro3);

    return 0;
}
