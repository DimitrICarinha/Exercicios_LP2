#include <stdio.h>

int main()
{
    int n1 = 15, n2 = 100, soma;
    int i = 0;
    soma = 0;

    while (i < n2)
    {
         for(i = n1; i <= n2; i++)
            soma = soma + i;
    }

    printf("A soma dos valores entre %d, e %d, foi: %d", n1, n2, soma);

    return 0;
}