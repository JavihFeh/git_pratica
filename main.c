#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {

    int i, vet[1000], maior, menor;

    srand(time(NULL));

    for(i = 0; i < 1000; i++)
        vet[i] = rand();
    
    for(i = 0; i < 1000; i++)
        printf("%d ", vet[i]);
    
    maior = vet[0];   
    for(i = 0; i < 1000; i++)
    {
        if (vet[i] > maior)
        {
            maior=vet[i];
        }
    }
    
    menor = vet[0];
    for(i = 0; i < 1000; i++)
    {
        if (vet[i] < menor)
        {
            menor=vet[i];
        }
    }
    
    printf("\n\n");
    printf("Maior valor: %d ", maior);
    
    printf("\n\n");
    printf("Menor valor: %d ", menor);
    

    return 0;
}
