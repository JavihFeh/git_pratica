#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

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

}
