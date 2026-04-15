#include <stdio.h>

int main()
{
    int total_mercadorias = 0, resposta = 1;
    float valor_mercadoria, soma_total = 0, media;

    while(resposta != 0)
    {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor_mercadoria);

        soma_total = soma_total + valor_mercadoria;
        total_mercadorias ++;
        
        printf("Deseja colocar mais mercadorias? (sim = 1, nao = 0): ");
        scanf("%d", &resposta);
    }
    
    if (total_mercadorias > 0) {
        media = soma_total / total_mercadorias;
        
        printf("Quantidade de itens: %d\n", total_mercadorias);
        printf("O valor total em estoque e: %.2f\n", soma_total);
        printf("A media de valor por mercadoria e: %.2f\n", media);
    } 
    
    else 
    {
        printf("Nenhuma mercadoria foi cadastrada.\n");
    }

    return 0;
}   

//terminado os exercicios de 44 a 69.
