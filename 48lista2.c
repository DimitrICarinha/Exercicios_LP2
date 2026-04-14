#include <stdio.h>

int main()
{
    int n1, n2;
    float media;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%d", &n1);
    while(n1 < 0 || n1 > 10)
    {
        printf("Digite a nota da primeira avaliacao novamente: ");
        scanf("%d", &n1);
    }
    printf("Digite a nota da segunda avaliacao: ");
    scanf("%d", &n2);
    while(n2 < 0 || n2 > 10)
    {
        printf("Digite a nota da segunda avaliacao novamente: ");
        scanf("%d", &n2);
    }
    media = n1 + n2 / 2;

    printf("A media foi de: %2.f", media);
}