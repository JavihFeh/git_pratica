#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void bubble_sort(int v[], int n)
{

    int k, j, aux;

    for (k = n - 1; k > 0; k--)
    {

        for (j = 0; j < k; j++)
        {

            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\n\n\n========== Vetor organizado atraves do Bubble Sort ==========\n\n");

    for (int i = 0; i < n; i++)
    {

        if (i == n-1)
        {

            printf("%6d.\n\n\n", v[i]);
        }
        else
        {

            printf("%6d, ", v[i]);
        }
    }
}
