#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    // printf("enter a digit\n");
    scanf("%f",&a);
    int x = ceil(a);
    if ( x == a)
    {
        printf("int %d\n",x);
    }
    else
    {
        printf("float %d %.3f\n",x-1,1-(x-a));
    }
    return 0;
}
