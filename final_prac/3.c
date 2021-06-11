#include<stdio.h>
void XtoD();
int main()
{
    XtoD();
    return 0;


}
void XtoD(){
    int in, share, remain, i=0;
    char Xbit[]="0123456789ABCDEF", out[99999];
    scanf("%d", &in);
    share = in;
    while(share!=0){
        remain = share % 16;
        out[i] = Xbit[remain];
        share /= 16;
        i++;
    }
    for(int j=0;j<i;j++)
    printf("%c", out[i-j-1]);
}