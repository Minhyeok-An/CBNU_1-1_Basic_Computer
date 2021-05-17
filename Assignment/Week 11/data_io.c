#include <stdio.h>
void insertionSort(int [], int, FILE *);

int main()
{
    FILE *in, *out;
    int ar[99999], i, k, n = 0;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while (fscanf(in, "%d", &i) != EOF)
    {
        ar[n] = i;
        n++;
    }

    insertionSort(ar, n, out);

    fclose(in);
    fclose(out);
    return 0;
}
void insertionSort(int arr[], int size, FILE *output)
{
    int i, j,k, key;

    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for(k=0;k<size;k++) fprintf(output, "%d ", arr[k]);
        fprintf(output, "\n");
    }
}