#include <stdio.h>

void contagem_regressiva(int n) {
    printf("%d, ", n);
    
    if (n == 0)
        return;
    contagem_regressiva(n - 1);
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Contagem regressiva:\n");
    contagem_regressiva(n);
    printf("\n");
    
    return 0;
}
