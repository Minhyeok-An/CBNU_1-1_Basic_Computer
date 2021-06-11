// #include<stdio.h>
// int main()
// {
//     int ar[99999], n,i,j,tmp;
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++);
//         {
//             if(ar[j]>ar[j+1])
//             {
//                 tmp = ar[j];
//                 ar[j]=ar[j+1];
//                 ar[j+1]=tmp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",ar[i]);
//     }
// }

#include <stdio.h>
int main()
{

    int a[9999];
    int num;
    int i, j;
    int tmp;

    printf("Enter the number of integers>>\n");
    scanf("%d", &num);

    printf("Enter integers>>\n");
    for (i = 0; i < num; i++)
        scanf("%d", &a[i]);

    for (i = num-1; i >0; i--)
    {
        for (j = 0; j <i; j++) ////////
        {
            if (a[j] > a[j + 1])
            {

                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    //printf("After sorting:");
    for (i = 0; i < num; i++)
    printf("%d ", a[i]);
}
