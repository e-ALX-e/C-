#include <stdio.h>

int min(int a,int b)
{
    return (a>b ? b : a);
}

int main ()
{
    int n,i,x1,x2,c;
    printf ("请输入你要输入的数的数量n\n");
    scanf ("%d",&n);
    printf ("请输入%d个数，用空格隔开\n",n);
    scanf("%d",&x2);
    for ( i = 0; i < n-1; i++)
    {
        scanf("%d%c",&x1,&c);
        x2=min(x1,x2);
    }
    
    printf("%d",x2);
    return 0;
}