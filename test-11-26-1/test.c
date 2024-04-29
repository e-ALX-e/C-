#include <stdio.h>
#include <stdio.h>  

int main()
{
    int a,x1,i,y,t,ii;
    printf ("请输入你要拆开的数字\n");
    scanf ("%d",&a);
    for ( i = 0,y=0 ;; i++)
    {
        y=pow(10,i);
        t=a/y;
        if (t<=10&&t>0)
        {
            ii=i;
            break;
        }
    }
    for ( i = 0; i <=ii ; i++)
    {
        x1=a/y;
        a-=x1*y;
        y=y/10;
        printf("%d ",x1);
    }
    
    return 0;
}

//笔试第三题