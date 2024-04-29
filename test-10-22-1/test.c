#include <stdio.h>
int main()
{
    int a,b;
    printf
    ("牛至冲冲冲\n一次回车长大1cm\n输入你的初始牛至长度\n");
    scanf("%d",&a);
    while ((b=getchar()) != 114514)
    {
        
        printf("你的牛至%dcm\n",a);
        a++;
        if (a>=50)
        {
            printf("\n你牛至爆了\n");
            break;
        }
    }
    return 0;
}