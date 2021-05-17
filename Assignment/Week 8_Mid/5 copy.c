#include <stdio.h>
int calc_tax(int);
int main()
{
    int salary, tax;
    printf("Enter your annual salary(unit:1,000won)>> ");
    scanf("%d", &salary);
    if (salary <= 0)
        return 0;
    tax = calc_tax(salary);
    printf("your tax is %d thousand won", tax);
    return 0;
}
int calc_tax(x)
{
    int salary = x, tax = 0, gap;
    gap = 12000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.066;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.066;
        return tax;
    }
    gap = 34000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.165;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.165;
        return tax;
    }
    gap = 42000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.264;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.264;
        return tax;
    }
    gap = 62000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.385;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.385;
        return tax;
    }
    gap = 150000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.418;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.418;
        return tax;
    }
    gap = 200000;
    if ((salary - gap) > 0)
    {
        tax += gap * 0.44;
        salary -= gap;
    }
    else
    {
        tax += salary * 0.44;
        return tax;
    }
    tax += salary * 0.462;
    return tax;
}