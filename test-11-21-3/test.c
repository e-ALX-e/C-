#include <stdio.h>
int main()
{
    int h,f,tz,j;
    h=98;
    f=386;
    for ( tz=0;tz<=h;tz++)
    {
        j=h-tz;
        if (f==tz*4+j*2)
        {
            printf("鸡有%d只，兔子有%d只\n",j,tz);
        }
        
    }
    
    return 0;
}
//p141 鸡兔同笼问题
//6.15