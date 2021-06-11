#include <stdio.h>
int main()
{

    int num;
    int i, j;
    int a[99999];
    int tmp;

    printf("Enter the number of intergers\n");
    scanf("%d", &num);

    // printf("%d \n",num);

    printf("Enter intergers\n");

    for (i = 0; i < num; i++)
        scanf("%d", &a[i]);

    // printf("%d",a[i]);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (j = 0; j < num; j++)
        printf("%d", a[j]);
}
