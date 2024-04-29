#include <stdio.h>
#include <math.h>
int main(void)
{

    double a, b, c,x1,x2,data;
    printf ("a,b,c\n");//a=1,b=2,c=1的时候x1=x2=-1
    scanf ("%lf,%lf,%lf",&a,&b,&c);
    data=b*b-4*a*c;
    if (a==0)
    {
        printf("这个不是二次方程");
    }
    else
    {
        if(data<0)
        {
            printf("这个二次方程无解");
        }
        else
        {
            x1=(-b+sqrt(data))/(2*a);
            x2=(-b-sqrt(data))/(2*a);
            printf("x1=%f,x2=%f\n",x1,x2);
            printf("x1=%.3f,x2=%.3f\n",x1,x2);//.3表示保留3位小数
            printf("x1=%20f,x2=%20f\n",x1,x2);//前面加整数表示如果数据宽度小于这个数向右边靠齐,缺少的用空格补充
            printf("x1=%020f,x2=%020f\n",x1,x2);//再加个0表示缺少的字符用0补充
        }
    }
    return 0;
}
//p39   3.4
//输入，的时候记得是英文模式，否则错误