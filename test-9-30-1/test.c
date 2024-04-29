//肝帝抽卡模拟器
//小保底30抽
//原石越多越容易歪
#include <stdio.h>
int main ()
{
    int a;//原石
    int b;//是否抽卡
    int c;//比较数
    int p;//保底
    int pp=0;//大保底
    printf("请输入你的初始原石\n");
    scanf ("%d",&a);
    c=a;
    while (a<=c+160)
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
        if (b==1 & a>=160)//单抽
        {
            if (p<=20)
            {
                a-=160;
                p+=1;
                printf ("原石-160，你还有%d个原石\n无锋剑+1\n",a);
            }
            else
            {
                if (p>=30)
                {
                    a-=160;
                    p-=p;
                    pp-=pp;
                    printf ("原石-160，你还有%d个原石\n绫华+1\n",a);
                }
                else
                {
                    a-=160;
                    p+=1;
                    printf ("原石-160，你还有%d个原石\n黑缨枪+1\n",a);
                    
                }            
            }        
        }
        else//十连
        {
            if (a <=3200)
            {
                if (a>=1600)
                {
                    if (p<=30)
                    {
                        a-=1600;
                        p+=10;
                        printf ("原石-1600，你还有%d个原石\n祭礼剑+1\n",a);
                    }
                    else
                    {
                        a-=1600;
                        p+=10;
                        pp-=pp;
                        printf ("原石-1600，你还有%d个原石\n绫华+1\n",a);
                    }       
                }   
                else
                {
                printf("没原石还抽卡？");
                return 0;

                }
            }
            else
            {
                if (a>=1600 & p>=30 )
                {
                    if (pp<1)
                    {
                        a-=1600;
                        p-=p;
                        pp+=1;
                        printf ("原石-1600，你还有%d个原石\n七七+1\n",a);
                    }
                    else
                    {
                        a-=1600;
                        p-=p;
                        pp-=pp;
                        printf ("原石-1600，你还有%d个原石\n绫华+1\n",a);
                    }
                }
                else
                {
                a-=1600;
                p+=10;
                printf ("原石-1600，你还有%d个原石\n钟剑+1\n",a);
                

                }
            }                  
        } 
    }
    printf("\n你已经没原石了\n");
    return 0;
    
}