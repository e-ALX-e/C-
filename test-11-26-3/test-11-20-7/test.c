#include <stdio.h>
int main()
{
    int i,a,c;
    printf("输入一个a\n");
    scanf("%d",&a);
    c=0;
    for (i=1;i<=a;i++)
    {
        c+=i;
    }
    printf("%d",c);
    return 0;
}
//计算前n的和