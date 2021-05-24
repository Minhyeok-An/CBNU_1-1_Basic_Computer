#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NameRec
{
    char name[20];
    struct NameRec *next;
} * first, *newrec, *pre, *cur, *next;

int main()
{
    int i, n, flag;
    char indata[20];
    printf("입력할 사람은 몇명입니까?\n");
    scanf("%d", &n);
    printf("%d 명의 이름을 입력하시오(영어의 경우 첫 글자는 대문자, 나머지는 소문자)\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", indata);
        newrec = malloc(sizeof(struct NameRec));
        strcpy(newrec->name, indata);
        if (first == NULL)
        {
            newrec->next = NULL;
            first = newrec;
        }
        else
        {
            cur = first;
            while ((cur != NULL) && strcmp(newrec->name, cur->name) > 0)
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
    }
    printf("\n");
    cur = first;
    while (cur != NULL)
    {
        printf("%s\n", cur->name);
        cur = cur->next;
    }
    printf("\n검색할 사람의 이름을 입력하시오\n");
    scanf("%s", indata);

    pre = NULL;
    cur = first;
    next = cur->next;
    printf("\n");
    while (1)
    {
        if (cur == NULL)
        {
            printf("명단에 없습니다");
            return 0;
        }
        else if (strcmp(cur->name, indata) == 0)
        {
            if (pre == NULL)
            {
                printf("(NULL), %s, %s", cur->name, next->name);
                return 0;
            }
            else if (next == NULL)
            {
                printf("%s, %s, (NULL)", pre->name, cur->name);
                return 0;
            }
            else
            {
                printf("%s, %s, %s", pre->name, cur->name, next->name);
                return 0;
            }
        }
        else
        {
            pre = cur;
            cur = next;
            next = next->next;
        }
    }
}