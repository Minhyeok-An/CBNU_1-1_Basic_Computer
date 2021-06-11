#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ints {
	int n;
	struct ints* next;
}*first, *newrec, *pre, *cur;
int no1()
{
	int n, ar[9], tmp, i, j;
	printf("Enter the number of integers>> ");
	scanf("%d", &n);
	printf("Enter the integers>> ");
	for (i = 0; i < n; i++)
		scanf("%d", &ar[i]);
	for (i = n; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (ar[j] > ar[j + 1])
			{
				tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
	printf("After sorting:");
	for (i = 0; i < n; i++)
		printf(" %d", ar[i]);
	return 0;
}
int no2() {
	int n1, n2, n3, a, b, c;
	while (1)
	{
		printf("Enter three integers>>");
		scanf("%d%d%d", &n1, &n2, &n3);
		if (n1 == 0 || n2 == 0 || n3 == 0)
			return 0;
		if (n1 >= n2 && n1 >= n3)
		{
			if (n2 >= n3)
			{
				a = n1; b = n2; c = n3;
			}
			else {
				a = n1; b = n3; c = n2;
			}
		}
		else if (n2 >= n1 && n2 >= n3)
		{
			if (n1 >= n3)
			{
				a = n2; b = n1; c = n3;
			}
			else {
				a = n2; b = n3; c = n1;
			}
		}
		else if (n3 >= n1 && n3 >= n2)
		{
			if (n1 >= n2)
			{
				a = n3; b = n1; c = n2;
			}
			else {
				a = n3; b = n2; c = n1;
			}
		}
		else printf("ERROR\n\n");
		printf("Result >> ");
		if (a >= (b + c))
			printf("wrong\n\n");
		else
		{
			if ((a * a) > (b * b + c * c))
				printf("obtuse\n\n");
			if ((a * a) == (b * b + c * c))
				printf("right\n\n");

			if ((a * a) < (b * b + c * c))
				printf("acute\n\n");
		}
	}
}
int no3()
{
	int n, i, facn, tmp, digit;
	while (1) {
		printf("Enter an integer>> ");
		scanf("%d", &n);
		if (n == 0)
			return 0;
		facn = 1;
		digit = 0;
		for (i = 1; i <= n; i++)
			facn *= i;
		tmp = facn;
		while (tmp != 0)
		{
			tmp /= 10;
			digit++;
		}
		printf(" The value of %d! is %d\n", n, facn);
		printf(" The number of digits is %d\n", digit);
	}
}
int no4() {
	int bf, bt, dec, i, j, tmp, digit;
	char in[20], out[20], ref[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	while (1)
	{
		printf("Enter base_from, number, base_to>> ");
		scanf("%d", &bf);
		if (bf == 0) return 0;
		scanf("%s", in);
		scanf("%d", &bt);
		if (bt == 0) return 0;
		if (bf > 36 || bt > 36 || bf < 0 || bt < 0) {
			printf("base error\n");
			return 0;
		}
		dec = 0;
		for (i = 0; in[i] != '\0'; i++)
		{
			dec *= bf;
			for (j = 0; j < bf; j++)
			{
				if (in[i] == ref[j])
				{
					tmp = j;
					if (j >= bf)
					{
						printf("Error occured\n");
						break;
					}
				}
			}
			dec += tmp;
		}
		digit = 0;
		for (i = 0; dec != 0; i++)
		{
			digit++;
			tmp = dec % bt;
			dec /= bt;
			out[i] = ref[tmp];
		}
		printf(" ");
		for (i = digit - 1; i >= 0; i--)
			printf("%c", out[i]);
		printf("\n");
	}
}
int no5() {
	int tmp, flag;
	while (1) {
		flag = 1;
		first = NULL;
		printf("Enter integers>> ");
		while (1)
		{
			scanf("%d", &tmp);
			if (tmp < 0)
			{
				if (flag == 1)
					return 0;
				else break;
			}
			flag = 0;
			newrec = malloc(sizeof(struct ints));
			newrec->n = tmp;
			if (first == NULL)
			{
				newrec->next = NULL;
				first = newrec;
			}
			else {
				cur = first;
				while (cur != NULL && (newrec->n > cur->n))
				{
					pre = cur;
					cur = cur->next;
				}
				if (cur == first)
					first = newrec;
				else
					pre->next = newrec;
				newrec->next = cur;
			}
			cur = first;
			while (cur != NULL) {
				printf("%d(%p) ", cur->n, cur);
				cur = cur->next;
			}
			printf("\n");
		}
		cur = first;
		while (cur != NULL)
		{
			pre = cur;
			cur = cur->next;
			free(pre);
		}
		printf("\n");
	}
}
int main() {
	no5();
	return 0;
}
