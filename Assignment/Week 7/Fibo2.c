// //Fibo1
// #include <stdio.h>
// int Fibo(int);
// int main()
// { int n, i;
// scanf("%d", &n);
// for (i = 1; i <= n; i++) printf(" %d", Fibo(i)); return 0;
// }
// int Fibo(x)
// {
// if (x == 0)
// return 0;
// else if (x == 1)
// return 1;
// else
// return Fibo(x - 2) + Fibo(x - 1);
// }

//Fibo2
#include <stdio.h>
int main()
{
int a = 1, b = 0, c, n, i;
scanf("%d", &n);
for (i = 0; i < n; i++)
{
c = a + b;
a = b;
b = c;
}
return 0;
}
