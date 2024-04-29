
#include <stdio.h>
int main()
{
    int m,w,i=0;
    float c;
    for(c=1;c<100;c++)
    {
        for ( w=0;w<=(100-c);w++)
        {
            m=100-w-c;
            if (100==(c/3+3*w+5*m))
            {
                i++;
                printf("%d、有小鸡%.0f只，公鸡%d只，母鸡%d只\n",i,c,m,w);
            }
            
        }
        
    }
    return 0;
}
//p141 公鸡母鸡小鸡
//6.16