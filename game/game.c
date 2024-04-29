#include <stdio.h>
#include "game.h"

void UI(int i)
{
    printf("*********************************\n");
    if (i==1)
    {
        printf("*********   ��Ϸ����   **********\n");
        printf("**  1.������Ϸ     2.������Ϸ  **\n");
    }
    else if (i==2)
    {
        printf("*********   ������   **********\n");
        printf("**  1.��ʼ��Ϸ     2.�뿪��Ϸ  **\n");
    }
    else if (i==3)
    {
        printf("*********   ������   **********\n");
        printf("**         ��Ϸ����          **\n");  
    }
    
    printf("*********************************\n");
}

void BENTI(char arr[HANG][LIE],int a,int b)//�������̣���Ϸ����
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




void CHUSHIHUA(char arr[HANG][LIE],int a,int b)//��ʼ������
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
void KAISHI(char arr[HANG][LIE],int a,int b)//��������
{
    int x,y,ok,wj,huihe=0,jieguo=0;
    for (wj=1,ok=1; ok==1 ;)
    {
        if (wj==1)
        {
            printf("1����ң���������Ҫ�µ����򣬸�ʽ����x y��\n:>");
            scanf("%d%d",&x,&y);
            x--;
            y--;
            
            if (x<a&&y<b)
            {
                if (arr[x][y]==' ')
                {
                    arr[x][y]='*';//�޸����1�ķ��ţ��޸ķ��ź�ǵ��޸��ж�ʤ���ķ���
                    wj=2;
                    huihe++;
                }
                else
                {
                    printf("�����걻ռ\n");
                }
                
                
            }
            
            
        }
        else
        {
            printf("2����ң���������Ҫ�µ����򣬸�ʽ����x y��\n:>");
            scanf("%d%d",&x,&y);
            x--;
            y--;
            
            if (x<a&&y<b)
            {
                if (arr[x][y]==' ')
                {
                    arr[x][y]='#';//�޸����2�ķ��ţ��޸ķ��ź�ǵ��޸��ж�ʤ���ķ���
                    wj=1;
                    huihe++;
                }
                else
                {
                    printf("�����걻ռ\n");
                }
                
                
            }
        }
        BENTI(arr,a,b);
        
        
        jieguo=panduan(arr,HANG,LIE);
        if (jieguo==1)
        {
            ok=0;
            printf("���1ʤ��");
        }
        if (jieguo==2)
        {
            ok=0;
            printf("���2ʤ��");
        }
        

        if (huihe>=HANG*LIE&&ok==1)//���ƻغ���
        {
            jieguo=3;
        }

        if (jieguo==3)
        {
            ok=0;
            printf("ƽ��");
        }
        
    }
}

int panduan(char arr[HANG][LIE],int a,int b)//�ж���Ӯ ������
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


