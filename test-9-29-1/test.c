//最简单的多文件代码

#include <stdio.h>
#include "max.h"//引用自己的头文件
extern  int Max(int,int);//与上面含义一致，只要有一种就行
int main()
{
    int a =1024;
    int b =2023;
    int c =Max(a,b);
    printf ("你好绫华\n%d",c);
    return 0;

}