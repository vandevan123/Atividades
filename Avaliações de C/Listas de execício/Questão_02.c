#include <stdio.h>

int *encontraMaiorEndereco(int *ptr1, int *ptr2) {
    if (ptr1 > ptr2) {
        return ptr1;
    } else {
        return ptr2;
    }
}

int main() {
    int var1, var2;
    
    var1 = 10;
    var2 = 20;

    int *enderecoVar1 = &var1;
    int *enderecoVar2 = &var2;
    
    int *maiorEndereco = encontraMaiorEndereco(enderecoVar1, enderecoVar2);
    
    printf("Endereço da variável 1: %p\n", enderecoVar1);
    printf("Endereço de variável 2: %p\n", enderecoVar2);
    printf("Maior endereço é: %p\n", maiorEndereco);
    
    return 0;
}
