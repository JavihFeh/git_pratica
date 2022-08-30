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
    
}
