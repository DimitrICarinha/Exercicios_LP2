#include <stdio.h>

int main()
{
    float n1, n2, divisao;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero (diferente de zero): ");
    scanf("%f", &n2);

    while (n2 == 0) {
        printf("VALOR INVALIDO. Digite um numero diferente de 0!\n");
        printf("Digite o segundo numero (diferente de zero): ");
        scanf("%f", &n2);
    }


    divisao = n1 / n2;

    printf("A divisao dos dois numeros é de %.2f", divisao);

}