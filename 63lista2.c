#include <stdio.h>

int main()
{
    int n[10];
    int soma;

    soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d:", i + 1);
        scanf("%d", &n[i]);
        soma = soma + n[i];
    }
    printf("A soma foi de %d", soma);

    return 0;
}