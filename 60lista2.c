#include <stdio.h>

int main()
{
    int n[10];
    int contador_entre;
    for(int i = 0; i < 10; i++) 
    {
        printf("Digite N para a posicao %d: ", i);
        scanf("%d", &n[i]);      
    }
     for(int i = 0; i < 10; i++) {
        if(n[i] >= 10 && n[i] <= 20) 
        {
            printf("%d ", n[i]); 
            contador_entre++; 
        }
    }
}