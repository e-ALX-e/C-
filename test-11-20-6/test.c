#include<stdio.h>
int main ()
{
    float IBM ,h ,w;
    printf("请输入你的身高（m）和体重（kg）\n");
    scanf("%f%*c%f",&h,&w);
    IBM=w/h/h;
    printf("IBM=%f\n",IBM);
    if (IBM<18)
    {
        printf("你的体重是低体重");
    }
    else if (IBM>=18&&IBM<=25)
    {
        printf("你的体重是正常体重");
    }
    else if (IBM>25&&IBM<=27)
    {
        printf("你的体重是超重体重");
    }
    else
    {
        printf("你的体重是肥胖体重");
    }
    return 0;
}
//IBM计算