#include <stdio.h>
int main()
{
    int i,a,c,ii,cc;
    printf("输入一个a\n");
    scanf("%d",&a);
    c=1;
    cc=0;
    for ( i = 1; i <= a; i++)
    {
        c*=i;
        printf("%d!=%d\n",i,c);
    }
    return 0;
}
//计算前n的阶乘