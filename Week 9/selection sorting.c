#include <stdio.h>
int selectionSort(int[], int);
int main()
{
    int in[99999], n, i, cnt;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &in[i]);
    cnt = selectionSort(in, n);
    for (i = 0; i < n; i++)
        printf(" %d", in[i]);
    printf("\n%d", cnt);
    return 0;
}
int selectionSort(int ar[], int size)
{
    int i, j, min, tmp, cnt = 0;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            cnt++;
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
    return cnt;
}