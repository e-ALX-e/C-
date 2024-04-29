#include <stdio.h>
#include <stdlib.h>
int main ()
{
    printf("请输入你要玩的关卡\n");
    unsigned int c;
    int a ,guess,i,ret2,ret1,gtt;
    ret1=scanf("%u",&c);
    if (ret1!=1)
    {
        printf("输入非法字符");
        return 0;
    }
    srand(c);
    a=rand()%100+1;
    for ( i = 0;1; i++)
    {
        printf("请在0~100中间猜一个数字\n");
        ret2=scanf("%d",&guess);
        if (ret2!=1)
        {
            printf("\n输入非法字符,请重新输入\n\n");
            do
            {
                gtt=getchar();
            } while (getchar()!='\n');            
            continue;
        }
        
        if (guess<a)
        {
            printf("你猜小了\n");
        }
        else if (guess>a)
        {
            printf("你猜大了\n");
        }
        else
        {
            printf("你猜对了\n");
            printf("你猜了%d次",i+1);
            break;
        }
        if (i+1==10)
        {
            printf("你猜了%d次，你没有机会了",i+1);
            break;
        }
        
    }
    return 0;
}
//猜数字游戏