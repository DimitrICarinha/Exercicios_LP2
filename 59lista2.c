
#include <stdio.h>

int main() {
    int n[10];
    int contador_negativos = 0;
    for(int i = 0; i < 10; i++) 
    {
        printf("Digite N para a posicao %d: ", i);
        scanf("%d", &n[i]); 
    }

    printf("\nNumeros negativos encontrados: ");

    for(int i = 0; i < 10; i++) 
    {
        if(n[i] < 0) {
            printf("%d ", n[i]); 
            contador_negativos++; 
        }
    }

    return 0;
}