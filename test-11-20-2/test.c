#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s,p;
    printf("请输入三边长\n");
    scanf("%f %*c %f %*c %f",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        p=a+b+c;
        p=p/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("这个三角形的面积是%f",s);
    }
    else
    {
        printf("不是三角形");

    }
    return 0;

}
//三角形求面积p95