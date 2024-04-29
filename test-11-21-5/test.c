#include <stdio.h>
int main()
{
    int c,w,m,i=0;                 //c 10, m 5, w 1
    for(c=1;c<50;c++)
    {
        for ( w=0;w<=50-c;w++)
        {
            m=50-w-c;
            if (100==(10*c+1*w+5*m))
            {
                i++;
                printf("%d、10元%d张，5元%d张，1元%d张\n",i,c,m,w);
            }
            
        }
        
    }
    return 0;
}
//p141 换钱问题
//6.17