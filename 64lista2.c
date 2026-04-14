#include <stdio.h>

int main()
{
    int n[10];
    int soma = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if(n[i] < 40) 
        {
            printf("%d ", n[i]); 
            soma = soma + n[i];
        }
    }

    printf("\nA soma dos numeros menores que 40 e: %d\n", soma);

    return 0;
}

//testezinho
