#include <stdio.h>
//#define PI 3.14159    //写法1
int main (void)
{
    const double PI=3.14159;    //写法2
    double v, r ,s;
    printf ("r:");
    scanf ("%lf",&r);
    v=4/3.0*PI*r*r*r;//特别要注意，这里是3.0，不能是3
    s=4*PI*r*r;
    printf("v=%lf,s=%lf",v,s);
    return 0;

}
//p39   3.5