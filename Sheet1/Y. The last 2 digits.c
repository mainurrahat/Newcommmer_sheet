#include<stdio.h>
int main()
{
    long long a,b,c,d,mul,x,mul2,y;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    mul=a*b*c*d;
    x=mul%10;
    mul2=mul/10;
      y=mul2%10;
    printf("%lld%lld\n",y,x);
    return 0;
}
 
