#include<stdio.h>
int main()
{
    int n, ar[99999], i,j,tmp;
    printf("Enter the number of integers>> ");
    scanf("%d", &n);
    printf("Enter integers>> ");
    for(i=0;i<n;i++){
        scanf("%d", &ar[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                tmp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
    printf("After sorting: ");
    for(i=0;i<n;i++){
    printf(" %d", ar[i]);
    }
}