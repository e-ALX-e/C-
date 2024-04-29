#include <stdio.h>
int main ()
{
    char a ;
    printf ("请输入单个英文字母\n");
    a=getchar();
    if(a>=65&&a<=90)
    {
        a=a+32;
        printf("%c",a);
    }
    else if (a>=97&&a<=122)
    {
        a=a-32;
        printf("%c",a);
    }
    else 
    {
        printf("ASCII=%d",a);
    }
    return 0;
}
//大小写互相转换