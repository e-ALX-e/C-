// #include <stdio.h>
// int main ()
// {
//     int arr[3][3]={};
//     int l;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&l);
//             arr[i][j]=l;
//         }
//     }

//     //段落2
//     int a,b;
//     for ( int i = 0; i < 3; i++)
//     {
//         scanf("%d%d",&a,&b);
//         printf("%d",arr[a-1][b-1]);
//     }
    
    
//     // for(int i=0;i<3;i++)
//     // {
//     //     for(int j=0;j<3;j++)
//     //     {
//     //         printf("%d",arr[i][j]) ;
//     //     }
//     //     printf("\n");
//     // }
//     return 0;
// }



#include <stdio.h>
typedef struct arrms
{
    int dbg[100];
}gushi;



int main()
{
    gushi ac[20];
    char ads;
    int jishu;
    scanf("%d",&jishu);
    ads=getchar();//吃掉\n
    for (int i = 0; i < jishu; i++)
    {
        ads=getchar();
        int k=0;
        for (int j = 0;ads!='.'; j++)
        {
            ac[i].dbg[j]=ads;
            ads=getchar();
            k++;
        }
        ads=getchar();//吃掉\n
        ac[i].dbg[k+1]='.';

    }

    
    //输出
    for(int j=0;j<jishu;j++)
    {
        for (int i = 0;i<100; i++)
        {
            if (ac[j].dbg[i]!='.')
            {
                putchar(ac[j].dbg[i]);
            }
            else
            {
                break;
            }
            
        }
        printf(".\n");
    }
        
    return 0;
}