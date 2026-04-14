#include <stdio.h>

int main()
{
    float n1, n2, divisao;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    
    do { 
        printf("Digite o segundo numero (diferente de zero): ");
        scanf("%f", &n2);
        
        if (n2 == 0) {
            printf("VALOR INVALIDO. O segundo valor nao pode ser zero!\n");
        }

    } while (n2 == 0);

    divisao = n1 / n2;

    printf("A divisao dos dois numeros é de %.2f", divisao);

}