//二到三个数求和

#include <stdio.h>

int Add(int x ,int y)//自定义的求和函数
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a;
    int b;
    int c;
    int e;
    int f;
    printf("请输入你要加的第一个数字\n");
    scanf("%d",&a);
    printf("请输入你要加的第二个数字\n");
    scanf("%d",&b);
    printf("你是否还要加数字（是1/否0）\n");
    scanf("%d",&c);
    if (c=1)
    {
        printf("请输入你要加的第三个数\n");
        scanf("%d",&e);
    }
    else
    {
        e = 0;
    }
    
    f = Add(Add(a,b),e);
    printf("他们的和是%d",f);
    
    return 0;
    
}