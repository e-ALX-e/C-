#include <stdio.h>
int main ()
{
    int x,y,i;
    y=1;
    for ( i = 1 ; i <=9; i++)
    {
        printf("%d  ",i); 
    }
    printf("\n");
    for ( i = 1 ; i <=9; i++)
    {
        printf("-  ");
    }
    printf("\n");
    for ( i = 1; i <=9; i++)
    {
        for ( x = 1; x <=9; x++)
        {
            if (x<y)
            {
                continue;
            }
            
            printf("%d ",x*y);
            if (x*y<10)
            {
                printf(" ");
            }
        }
        y++;
        printf("\n");
    }
    return 0;
}
//p141  九九乘法表
//6.18