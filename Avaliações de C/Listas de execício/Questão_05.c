#include <stdio.h>

int main() {
  
    int numeros[6]; 
    int *ptr; 

    printf("Digite seis números:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Valores e endereços de memória dos números:\n");
    ptr = numeros; 

    for (int i = 0; i < 6; i++) {
        printf("Número %d: %d, Endereço de memória: %p\n", i + 1, *ptr, ptr);
        ptr++; 
    }

    return 0;
}
