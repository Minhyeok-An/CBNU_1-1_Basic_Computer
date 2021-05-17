#include <stdio.h>
int binarySearch(int[], int, int);
int cnt = 0;
int main()
{
    int in[10] ={-51, -15, -12, -6, -3, 1, 2, 3, 54, 123}, n, key, i;
    scanf("%d", &key);
    printf("%d", binarySearch(in, n, key));
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