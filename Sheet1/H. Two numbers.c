#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double c,x,y,z;
    scanf("%d%d",&a,&b);
    c=(double) a/b;
    x= floor (c);
    y= ceil (c);
    z= round (c);
    printf("floor %d / %d = %.0lf\n",a,b,x);
    printf("ceil %d / %d = %.0lf\n",a,b,y);
    printf("round %d / %d = %.0lf\n",a,b,z);
    return 0;
}
