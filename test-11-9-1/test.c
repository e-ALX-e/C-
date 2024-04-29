#include <stdio.h>
int main ()
{
    int add;

    int i ,q ,w ;
    int a[10];
    for (i = 0; i <10; i++)
    {
        q=1;
        for (w=i+1; w>=1; w--)
        {
            q*=w;
        }
        a[i]=q;
    }
    q=0;
    //计算1！+2！+3！=1+2+6
    add=3;
    for ( i = 0; i < add; i++)
    {
        q+=a[i];
    }


    printf("%d",q);
    
    return 0 ;
}