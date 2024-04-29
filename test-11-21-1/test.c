#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,x1,x2,x3;
    printf("水仙花数有：\n");
    for (x1=1;x1<10;x1++)
    {
        for ( x2 = 0; x2 < 10; x2++)
        {
            for ( x3 = 0; x3 < 10; x3++)
            {
                a=x1+x2*10+x3*100;
                if (a==pow(x1,3)+pow(x2,3)+pow(x3,3)&&a>=100)
                {
                    printf("%d\n",a);
                }
                
            }
            
        }
        
    }
    return 0;
}
//p141 水仙花数
//6.10