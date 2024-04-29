//肝帝抽卡模拟器

#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;

    printf("请输入你的初始原石\n");
    scanf ("%d",&a);
    c=a;
    while (a<c+160)
    {
        a+=2;
        printf ("你打开了普通宝箱得到2原石，现在有%d原石\n",a);
        a+=2;
        printf ("你打开了普通宝箱得到2原石，现在有%d原石\n",a);
        a+=5;
        printf ("你打开了珍贵宝箱得到5原石，现在有%d原石\n",a);
        a+=2;
        printf ("你打开了普通宝箱得到2原石，现在有%d原石\n",a);
    }
    while (a>160)
    {
        printf("\n你已经可以抽卡了\n\n你是否要抽卡(单抽1/十连抽2)\n");
        scanf("%d",&b);
        if (b==1 & a>160)
        {
            a-=160;
            printf ("原石-160，你还有%d个原石\n无锋剑+1\n",a);
        }
        else
        {
            if (a>1600)
            {
                a-=1600;
            printf ("原石-1600，你还有%d个原石\n祭礼剑+1\n",a); 
            }
            
            else
            {
                printf("没原石还抽卡？");
                return 0;

            }
                    
        } 
    }
    printf("\n你已经没原石了\n");
    return 0;
    
}