#include <stdio.h>

int main() {
    float v[10];
    
    printf("Usuário, por favor, digite 10 números reais no teclado:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
    }
    
    printf("Endereços do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Usuário, o endereço do elemento %d: %p\n", i, &v[i]);
    }
    return 0;
}
