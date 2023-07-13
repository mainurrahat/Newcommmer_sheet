#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    a=a%10;
    b=b%10;
    c=a+b;
    printf("%lld\n",c);
    return 0;
}
