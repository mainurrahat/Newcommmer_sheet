#include<stdio.h>
int main()
{
    int a,y,m,d;
    scanf("%d",&a);
    y=a/365;
    a=a%365;
    m=a/30;
    a=a%30;
    d=a;
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    return 0;
}
