#include <stdio.h>
void Bubble(int, int[]);
int main()
{
    int ar[99999], n, i;
    printf("Enter the number of integers>> ");
    scanf("%d", &n);
    printf("Enter integers>> ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    Bubble(n, ar);
    printf("After sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    return 0;
}
void Bubble(int N, int AR[])
{
    int i, j, tmp;
    for (i = N-1; i > 0 ; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (AR[j] > AR[j + 1])
            {
                tmp = AR[j];
                AR[j] = AR[j + 1];
                AR[j + 1] = tmp;
            }
        }
    }
}