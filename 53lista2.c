#include <stdio.h>

int main()
{
    int i, N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i = i + 1)
        printf("%d\n", i);

    return 0;
}