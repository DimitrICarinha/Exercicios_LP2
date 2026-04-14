#include <stdio.h>

int main()
{
    int n[10];
    float media_final, media;
    media = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite N para a posicao %d: ", i);
        scanf("%d", &n[i]);    
        media = media + n[i];
    }

    media_final = media / 10;

    printf("A media final é de %2.f", media_final);

    return 0;
}