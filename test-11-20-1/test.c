#include <stdio.h>
#define EPS 1e-6
int main ()
{
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("偶数");
    }
    else 
    {
        printf("奇数");
    }
    return 0;
}