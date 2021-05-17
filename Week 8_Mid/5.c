#include <stdio.h>
int main()
{
    int salary, tax, tmp, i, cnt;
    printf("Enter your annual salary(unit:1,000won)>> ");
    scanf("%d", &salary);
    if (salary <= 12000)
        tax = salary * 0.066;
    else if (salary <= 46000)
        tax = 12000 * 0.066 + (salary - 12000) * 0.165;
    else if (salary <= 88000)
        tax = 12000*0.066 +34000*0.165+ (salary-46000) * 0.264;
    else if (salary <= 150000)
        tax = 12000*0.066 +34000*0.165+ 42000*0.264+(salary-150000) * 0.385;
    else if (salary <= 300000)
        tax =12000*0.066 +34000*0.165+ 42000*0.264+ 62000*0.385+ (salary-300000) * 0.418;
    else if (salary <= 500000)
        tax =12000*0.066 +34000*0.165+ 42000*0.264+ 62000*0.385+150000*0.418+ (salary-500000) * 0.44;
    else
        tax =12000*0.066 +34000*0.165+ 42000*0.264+ 62000*0.385+150000*0.418+ 200000*0.44+ (salary-500000) * 0.462;

    tmp = tax;
    printf("your tax is ");
    printf("%d", tax);
    // while (1)
    // {
    //     if (tmp / i == 0)
    //         break;
    //     cnt++;
    //     tmp /= 1000;
    // }
    // printf(" thousand won");
    return 0;
}