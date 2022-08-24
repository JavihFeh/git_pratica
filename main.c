#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
  srand(time(NULL))
  int i, vet[1000];
  for(i=0; i < 1000; i++)
      vet[i] = rand();
  
  
  quick_sort(vet, 0, 1000 - 1);
  
  
  printf("nnValores ordenadosn");
  for(i = 0; i < 1000; i++)
  {
    printf("O pivot é %d", vet[500])
    printf("%dn", vet[i]);
  }
  system("pause");
  return 0;
}
}

void quick_sort(int a[], int esq, int dir) {
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < dir) {
            i++;
        }
        while(a[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        quick_sort(a, esq, j);
    }
    if(i < dir) {
        quick_sort(a, i, dir);
    }
}
