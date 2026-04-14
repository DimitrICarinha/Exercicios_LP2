#include <stdio.h>

int main()
{
    int n, tabuada;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
        while(n < 1 || n > 10)
        {
            printf("Digite um valor valido de N (1 a 10): ");
            scanf("%d", n);
        }
    
    for(int i = 1; i <= 10; i = i + 1)
    {
        tabuada = i * n;
        printf("%d\n", tabuada);
    }

    return 0;
}