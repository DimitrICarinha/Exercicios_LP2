#include <stdio.h>

int main()
{
    int n1, n2, soma;
    int i = 0;
    soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    while(n2 < n1)
    {
        printf("Erro. Digite o segundo numero novamente: ");
        scanf("%d", &n2);
    }
    while (i < n2)
    {
         for(i = n1; i <= n2; i++)
            soma = soma + i;
    }

    printf("A soma dos valores entre %d, e %d, foi: %d", n1, n2, soma);

    return 0;
}
