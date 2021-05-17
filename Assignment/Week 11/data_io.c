#include <stdio.h>
#include <stdlib.h>
void selectionSort(int[], int, FILE *);
int main()
{
    FILE *in = NULL, *out = NULL;
    int ar[99999], i, k, n = 0;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    if ((in == NULL) || (out == NULL))
    {
        printf("Failed to open the file.\n");
        exit(1);
    }
    while (fscanf(in, "%d", &i) != EOF)
    {
        ar[n] = i;
        n++;
    }

    selectionSort(ar, n, out);

    fclose(in);
    fclose(out);
    return 0;
}
void selectionSort(int ar[], int size, FILE *output)
{
    int i, j, k, min, tmp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (ar[j] < ar[min])
                min = j;
        }
        if (i != min)
        {
            tmp = ar[i];
            ar[i] = ar[min];
            ar[min] = tmp;
        }
        if (i == size - 2)
            fprintf(output, "final result:\n");
        for (k = 0; k < size; k++)
            fprintf(output, "%d ", ar[k]);
        fprintf(output, "\n");
    }
}