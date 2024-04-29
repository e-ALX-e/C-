//简易计算机 书本p75思考题

#include <stdio.h>
#include<math.h>
#define EPS 1e-6
int main ()
{
    float a,c,op;
    char b;
    printf ("请输入你要计算的算式，格式a……b，例如a*b，支持 + - * / ^ 运算,*支持x和X\n");
    op=scanf ("%f %c %f",&a,&b,&c);
    switch (b)
    {
    case '*':
    case 'x':
    case 'X':
        printf("%f*%f=%f\n",a,c,a*c);
        break;
    case '+':
        printf("%f+%f=%f\n",a,c,a+c);
        break;
    case '-':
        printf("%f-%f=%f\n",a,c,a-c);
        break;
    case '/':
        if (fabs(c)<EPS)
        {
            printf ("被除数不能是0");
            break;
        }
        else
        {
            printf("%f/%f=%f\n",a,c,a/c);
            break;
        }
    case '^':
        printf("%f^%f=%f\n",a,c,pow(a,c));
        break;
    default:
        break;
    }
    return 0;
}
//简单计算器
