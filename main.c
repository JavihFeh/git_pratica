#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Media-Mediana
void media_mediana(int v[]);

int main(){
  srand(time(NULL));

  int vet[1000];

  for(int i = 0; i < 1000; i++){
      vet[i] = rand() % 1000;
  }

  media_mediana(vet);
  return 0;
}

void media_mediana(int v[]){
  //media
  float soma = 0;
  for(int i = 0; i < 1000; i++){
    soma += v[i];
  }
  printf("A media dos valores do vetor e: %.2f", soma/1000);

  //mediana
  float mediana = 0;
  int aux = 0;
  for(int i = 0; i < 999; i++){
        for(int j = i + 1; j < 1000; j++){
        	
            if(v[i] > v[j]){
              aux = v[i];
              v[i] = v[j];
              v[j] = aux;
            }
        }
    }
  mediana = (v[1000/2-1]+v[1000/2])/2;
  printf("\nA mediana do vetor e: %.2f", mediana);
    
=======
// Maior-menor
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
=======
void bubble_sort(int v[]);

int main()
{
  srand(time(NULL));

  int i, vet[1000];

  for(i=0; i < 1000; i++){
      vet[i] = rand();
  }

  bubble_sort(vet);
  return 0;
}

void bubble_sort(int v[]){

    int k, j, aux;

    for (k = 1000 - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {

            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\n\n\n========== Vetor organizado atraves do Bubble Sort ==========\n\n");

    for(int i=0; i<1000; i++){

        if(i==999){

            printf("%6d.\n\n\n", v[i]);

        }else{

            printf("%6d, ", v[i]);
        }
    }

//main
}
