#include <stdio.h>
void revSort(int, int[]);
int main()
{
    int i, n, tmp, ar[99999];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    revSort(n, ar);
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
void revSort(int N, int in[])
{
    int i, j, tmp;
    for(i=1;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            if(in[j]<in[j+1])
            {
                tmp = in[j];
                in[j]=in[j+1];
                in[j+1]=tmp;
            }
        }
    }
}