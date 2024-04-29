//<<的用法
//计算出若干个2的整数次方的数

#include <stdio.h>

int main()
{
    long long a = 1;
    long long b;
    printf("你想知道不大于__的2的整数次方的数字\n");
    scanf("%d",&b);

    while (a<b)
    {
        long long b = a << 1;
        printf ("%d\n",b);
        a = b;
    }
    
    return 0;
}