#include<stdio.h>

int main()
{
    unsigned int n, i; //4294967295
    int tmp, min=2147483647, max=-2147483648, sum=0;
    float avg;
    scanf("%u", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
        if(tmp<=min)
        {
            min = tmp;
        }
        if (tmp>=max)
        {
            max = tmp;
        }
    }
    avg = (float)sum/n;
    printf(" sum : %d\n average : %f\n minimum : %d\n maximum : %d", sum, avg, min, max);
}