#include <stdio.h>

int main() 
{
    float n1, n2, n_opcional, media;
    int resposta;
    char continuar; // variável para guardar o 'S' ou 'N'

    do {

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &n1);
    while (n1 < 0 || n1 > 10) {
        printf("Nota invalida. Digite novamente a primeira nota (0 a 10): ");
        scanf("%f", &n1);
    }
    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &n2);
    while (n2 < 0 || n2 > 10) {
        printf("Nota invalida. Digite novamente a segunda nota (0 a 10): ");
        scanf("%f", &n2);
    }

    printf("Fez a prova optativa? (1 para sim/2 para nao): ");
    scanf("%d", &resposta);

    if (resposta == 1)
    {  
        printf("Digite a nota da prova optativa: ");
        scanf("%f", &n_opcional);
        while (n_opcional < 0 || n_opcional > 10) {
            printf("Nota invalida. Digite novamente a nota da prova optativa (0 a 10): ");
            scanf("%f", &n_opcional);
        }
        // substitui a menor nota
        if (n_opcional > n1 && n1 < n2)
            n1 = n_opcional;
        else if (n_opcional > n2)
            n2 = n_opcional;

           media = (n1 + n2) / 2;

        if (media >= 6)
            printf("Voce foi aprovado e a sua nota foi %2.f", media);
        else if (media < 3)
            printf("Voce foi reprovado e a sua nota foi de %2.f", media);
        else
            printf("Voce ficou de exame a sua nota foi de %2.f", media);
    }
    
    else if (resposta == 2)
    {
        media = (n1 + n2 - 1) / 2;

        if (media >= 6)
            printf("Voce foi aprovado e a sua nota foi %2.f", media);
        else if (media < 3)
            printf("Voce foi reprovado e a sua nota foi de %2.f", media);
        else
            printf("Voce ficou de exame a sua nota foi de %2.f", media);
    }
        printf("\nNOVO CALCULO (S/N)? ");
        scanf(" %c", &continuar); 

    } while (continuar == 'S' || continuar == 's');

    return 0;
}