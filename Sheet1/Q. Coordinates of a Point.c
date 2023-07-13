#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if((a>0)&&(b>0))
    {
        printf("Q1\n");
    }
    if((a<0)&&(b>0))
    {
        printf("Q2\n");
    }
    if((a<0)&&(b<0))
    {
        printf("Q3\n");
    }
    if((a>0)&&(b<0))
    {
        printf("Q4\n");
    }
    if((a==0)&&(b==0))
    {
        printf("Origem\n");
    }
    if((b==0)&&((a>0)||(a<0)))

    {
        printf("Eixo X\n");
    }
    if((a==0)&&((b>0)||(b<0)))

    {
        printf("Eixo Y\n");
    }
    return 0;
}
