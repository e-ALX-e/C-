#include <stdio.h>
#include "game.h"

void UI(int i)
{
    printf("*********************************\n");
    if (i==1)
    {
        printf("*********   游戏结束   **********\n");
        printf("**  1.继续游戏     2.结束游戏  **\n");
    }
    else if (i==2)
    {
        printf("*********   井字棋   **********\n");
        printf("**  1.开始游戏     2.离开游戏  **\n");
    }
    else if (i==3)
    {
        printf("*********   井字棋   **********\n");
        printf("**         游戏结束          **\n");  
    }
    
    printf("*********************************\n");
}

void BENTI(char arr[HANG][LIE],int a,int b)//建立棋盘，游戏本体
{
    int i,j,k;
    printf ("|");
    for ( i = 0; i < a; i++)
    {
        printf("---|");
    }
     printf ("\n|");
    for ( i = 0; i < a; i++)
    {

        for ( j = 0; j < b; j++)
        {
            printf (" %c |",arr[i][j]);
        }
            printf ("\n|");
        for ( j = 0; j < b; j++)
        {
            printf ("---|");
        }
        printf ("\n");
        if (i<b-1)
        {
            printf ("|");
        } 
    }
}




void CHUSHIHUA(char arr[HANG][LIE],int a,int b)//初始化数组
{
    int i = 0;
    int j = 0;
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            arr[i][j]=' ';
        }
        
    }
    
}
void KAISHI(char arr[HANG][LIE],int a,int b)//输入和输出
{
    int x,y,ok,wj,huihe=0,jieguo=0;
    for (wj=1,ok=1; ok==1 ;)
    {
        if (wj==1)
        {
            printf("1号玩家，请输入你要下的区域，格式：“x y”\n:>");
            scanf("%d%d",&x,&y);
            x--;
            y--;
            
            if (x<a&&y<b)
            {
                if (arr[x][y]==' ')
                {
                    arr[x][y]='*';//修改玩家1的符号，修改符号后记得修改判断胜利的符号
                    wj=2;
                    huihe++;
                }
                else
                {
                    printf("该坐标被占\n");
                }
                
                
            }
            
            
        }
        else
        {
            printf("2号玩家，请输入你要下的区域，格式：“x y”\n:>");
            scanf("%d%d",&x,&y);
            x--;
            y--;
            
            if (x<a&&y<b)
            {
                if (arr[x][y]==' ')
                {
                    arr[x][y]='#';//修改玩家2的符号，修改符号后记得修改判断胜利的符号
                    wj=1;
                    huihe++;
                }
                else
                {
                    printf("该坐标被占\n");
                }
                
                
            }
        }
        BENTI(arr,a,b);
        
        
        jieguo=panduan(arr,HANG,LIE);
        if (jieguo==1)
        {
            ok=0;
            printf("玩家1胜利");
        }
        if (jieguo==2)
        {
            ok=0;
            printf("玩家2胜利");
        }
        

        if (huihe>=HANG*LIE&&ok==1)//限制回合数
        {
            jieguo=3;
        }

        if (jieguo==3)
        {
            ok=0;
            printf("平局");
        }
        
    }
}

int panduan(char arr[HANG][LIE],int a,int b)//判断输赢 三字棋
{
    int i,j;
    for ( i = 0; i < a; i++)
    {
        if (arr[i][1]==arr[i][2]&&arr[i][0]==arr[i][1]&&arr[i][0]!=' ')
        {
            if (arr[i][1]=='*')
            {
                return 1;
            }
            else
            {
                return 2;
            }
            
        }
    }
    for ( i = 0; i < b; i++)
    {
        if (arr[1][i]==arr[2][i]&&arr[0][i]==arr[1][i]&&arr[0][i]!=' ')
        {
            if (arr[1][i]=='*')
            {
                return 1;
            }
            else
            {
                return 2;
            }
            
        }
    }
    if (arr[1][1]==arr[2][2]&&arr[2][2]==arr[0][0]&&arr[1][1]!=' ')
    {
        if (arr[1][i]=='*')
            {
                return 1;
            }
            else
            {
                return 2;
            }
    }
    if (arr[2][0]==arr[1][1]&&arr[0][2]==arr[1][1]&&arr[1][1]!=' ')
    {
        if (arr[1][i]=='*')
            {
                return 1;
            }
            else
            {
                return 2;
            }
    }
    
    
    return 4;
    
    
}


