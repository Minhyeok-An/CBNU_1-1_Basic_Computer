#include <stdio.h>
int bubbleSort(int[], int);
int binarySearch(int[], int, int);
int cnt = 0;
int main()
{
    int in[99999], n, i, cnt;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &in[i]);
    cnt = bubbleSort(in, n);
    for (i = 0; i < n; i++)
        printf(" %d", in[i]);
    printf("\n%d", cnt);
    return 0;
}
int bubbleSort(int ar[], int size)
{
    int i, j, flag, tmp, cnt = 0;
    j = size;
    flag = 1;
    while (flag)
    {
        j--;
        flag = 0;
        for (i = 0; i < j; i++)
        {
            cnt++;
            if (ar[i] > ar[i + 1])
            {
                tmp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = tmp;
                flag = 1;
            }
        }
    }
    return cnt;
}