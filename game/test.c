#include <stdio.h>
#include "game.h"

int main()
{
    int xz1=3;
    int jishu=0;
    char arr[HANG][LIE]={0};
    CHUSHIHUA(arr,HANG,LIE);
    UI(2);//开始游戏的ui
    printf (":>");
    do
    {
        scanf("%d",&xz1);
        if (xz1==1)
        {
            
            BENTI(arr,HANG,LIE); 
            KAISHI(arr,HANG,LIE);
        }
        else if (xz1==2)
        {
            UI(3);
        }
        else
        {
            printf ("请重新输入\n:>");
            jishu=1;
        }

    } while (jishu==1);
    int jijiji;
    scanf("%d",&jijiji);
    
    return 0;
}