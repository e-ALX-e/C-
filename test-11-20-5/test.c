#include <stdio.h>
int main()
{
    int  score;
    char ret;
    printf("请输入你的分数\n");
    scanf("%d",&score);
    if(score>=0&&score<=100)
    {
        score /=10;
        switch (score)
        {
        case 10:
        case 9:
            ret = 'A';
            break;
        case 8:
            ret = 'B';
            break;
        case 7:
            ret = 'C';
            break;
        case 6:
            ret = 'D';
            break;
        default:
            ret ='E';
            break;
        }
        printf("你的评级是%c",ret);
    }
    else 
    {
        printf("输入错误");

    }
    return 0;
}
//分数转换成评级