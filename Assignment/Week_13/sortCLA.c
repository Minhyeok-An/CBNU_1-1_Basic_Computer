#include <stdio.h>
#include <stdlib.h>
void InsertSort(int, int[]);

int main(int argc, char *argv[])
{
    FILE *in = NULL, *out = NULL;
    int ar[99999], i, n = 0;
    in = fopen(argv[1], "r");
    out = fopen(argv[2], "w");
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
    InsertSort(n, ar);
    for (i = 0; i < n; i++)
        fprintf(out, "%d ", ar[i]);

    fclose(in);
    fclose(out);
    return 0;
}

void InsertSort(int N, int a[])
{
    int i, j;
    int key;
    for (j = 1; j < N; j++)
    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}