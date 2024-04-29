#include <stdio.h>

int max (int a,int b)
{
    return a>b ? a : b;
}

int main ()
{
    int aa =11;
    int ab =13;
    int aaa = max (aa,ab);
    printf ("%d",aaa); 
    return 0 ;
}