#include <stdio.h>

int main()
{
    int n, tabuada;
    
    n = 8;
    
    for(int i = 1; i <= 10; i = i + 1)
    {
        tabuada = i * n;
        printf("%d\n", tabuada);
    }
}