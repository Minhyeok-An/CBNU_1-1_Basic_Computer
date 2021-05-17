#include <stdio.h>
void selectionSort(int[], int);
int binarySearch(int[], int, int);
int main()
{
    int in[99999], n, i, cnt, key;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &in[i]);
    selectionSort(in, n);
    for (i = 0; i < n; i++)
        printf(" %d", in[i]);
    printf("\n");
    scanf("%d", &key);
    printf("%d\n%d", binarySearch(in, n, key) + 1, cnt);
    return 0;
}
void selectionSort(int ar[], int size)
{
    int i, j, min, tmp;
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
    }
}
int binarySearch(int ar[], int size, int key)
{
    int left = 0, right = size - 1, midpt;
    while (left <= right)
    {
        midpt = (left + right) / 2;
        if (key == ar[midpt])
            return midpt;
        else if (key < ar[midpt])
            right = midpt + 1;
        else
            left = midpt - 1;
    }
    return -1;
}