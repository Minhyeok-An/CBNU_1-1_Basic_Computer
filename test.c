#include <stdio.h>
void inOut(FILE *); //inOut 함수 원형 선언
void main()
{
    FILE *out;
    out = fopen("data.txt", "w");
    inOut(out); //inOut 함수 호출
    fclose(out);
}
void inOut(FILE *fname)
{ //inOut 함수 헤더
    int i;
    for (i = 0; i < 5; i++)
        fprintf(fname, "% d ", i);
}
