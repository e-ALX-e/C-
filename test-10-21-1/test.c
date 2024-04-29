#include <stdio.h>
int main()//判断一个数是奇数还是偶数，运用了----%
{
    int a;
    printf("输入一个需要判断的数字\n");
    scanf ("%d\n",&a);
    int b;
    b=a%2;
    if (b==1)
        printf("它是奇数");
    else
        printf("它是偶数");
    return 0;
}


// int main()//输出小于100的奇数
// {
//     int a = 1;
//     while (a<100)
//     {
//         printf("%d\n",a);
//         a += 2;
//     }
//      return 0;
// }



// int main()//输出小于100的偶数
// {
//     int a = 0;
//     while (a<=100)
//     {
//         printf("%d\n",a);
//         a += 2;
//     }
//      return 0;
// }
