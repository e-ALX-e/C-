#include <stdio.h>
int main()
{
    int i=0,j=0,k=0,jj=0,kk=0,ii=0;
    char p;
    scanf ("%d%c",&j,&p);
    for(i=1,k=1;i<=j;k+=2)
    {
        i+=(2*k);
    }
    i-=(2*k);
    kk=k-2;
    for(jj=0;jj<((k+1)/2);jj++)
    {
        for(ii=0;ii<kk;ii++)
        {
            printf("%c",p);
        }
        kk-=2;
    }
    printf("%d",(j-i));
    return 0;
}