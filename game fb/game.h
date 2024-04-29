#define HANG 3  //棋盘的行数
#define LIE 3 //棋盘的列数



void UI();//生成开始和结束界面
void BENTI(char arr[HANG][LIE],int a,int b);//游戏的本体
void KAISHI(char arr[HANG][LIE],int a,int b);//下棋的算法，输入和输出