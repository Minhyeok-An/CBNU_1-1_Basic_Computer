#include <stdio.h>
#include <stdlib.h>
struct XY
{
    int x;
    int y;
    struct XY *next;
} * newrec, *cur, *pre, *first;
int main()
{
    int n, i;
    scanf("%d", &n);
    first = NULL;
    for (i = 0; i < n; i++)
    {
        newrec = malloc(sizeof(struct XY));
        scanf("%d%d", &newrec->x, &newrec->y);
        if (first == NULL)
        {
            newrec->next = NULL;
            first = newrec;
        }
        else
        {
            cur = first;
            while (cur != NULL && (cur->x <= newrec->x))
            {
                if (cur->x == newrec->x)
                {
                    while (cur != NULL && (cur->y < newrec->y))
                    {
                        pre = cur;
                        cur = cur->next;
                    }
                    break;
                }
                pre = cur;
                cur = cur->next;
            }
            if (cur == first)
                first = newrec;
            else
                pre->next = newrec;
            newrec->next = cur;
        }
    }
    cur = first;
    for (i = 0; i < n; i++)
    {
        printf("%d %d\n", cur->x, cur->y);
        free(cur);
        cur = cur->next;
    }
}