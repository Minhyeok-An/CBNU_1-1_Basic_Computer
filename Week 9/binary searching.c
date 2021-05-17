#include <stdio.h>
int binarySearch(int[], int, int);
int cnt = 0;
int main()
{
    int in[99999], n, key, i;
    scanf("%d%d", &n, &key);
    for (i = 0; i < n; i++)
        in[i] = i + 1;
    printf("%d\n%d", binarySearch(in, n, key), cnt);
    return 0;
}
int binarySearch(int ar[], int size, int key)
{
    int left = 0, right = size - 1, midpt;
    while (left <= right)
    {
        cnt++;
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