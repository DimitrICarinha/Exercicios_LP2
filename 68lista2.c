#include <stdio.h>

int main()
{
    int total_mercadorias;
    float valor_mercadoria, soma_total = 0, media;

    printf("Digite o total de mercadorias: ");
    scanf("%d", &total_mercadorias);

    for(int i = 0; i < total_mercadorias; i++)
    {
        printf("Digite o valor da mercadoria %d: ", i + 1);
        scanf("%f", &valor_mercadoria);
        soma_total = soma_total + valor_mercadoria;
    }
    media = soma_total / total_mercadorias;

    printf("O valor em estoque e de: %2.f\n", soma_total);
    printf("A media e: %2.f\n", media); 
}   
