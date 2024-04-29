#include <stdio.h>
int main()
{
    int m,w,c,i=0;
    for(c=1;c<30;c++)
    {
        for ( w=0;w<=30-c;w++)
        {
            m=30-w-c;
            if (50==(c+2*w+3*m))
            {
                i++;
                printf("%d、有小孩%d人，男人%d人，女人%d人\n",i,c,m,w);
            }
            
        }
        
    }
    return 0;
}
//p141 男人女人小孩问题
//6.14