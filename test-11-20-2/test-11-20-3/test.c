#include <stdio.h>
#include <math.h>
int main ()
{
    float ret ,m1,m2;
    int year;
    printf ("请输入你要存的钱和年限\n");
    scanf ("%f%*c%d",&m1,&year);
    switch (year)
    {
    case 1:
        ret=0.0225;
        break;
    case 2:
        ret=0.0243;
        break;
    case 3:
        ret=0.0270;
        break;
    case 5:
        ret=0.0288;
        break;
    case 8:
        ret=0.0300;
        break;
    
    default:
        break;
    }
    m2=pow((1+ret),year)*m1;
    printf("%d年后你有%f元",year,m2);
    return 0;

}
//银行存钱，p95