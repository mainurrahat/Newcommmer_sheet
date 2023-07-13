#include<stdio.h>
#include<limits.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    int min=INT_MAX;
    int max=INT_MIN;
    // printf("%d\n",INT_MAX);
    // printf("%d\n",INT_MIN);
    if(A<min)
    {
        min=A;
    }
    if(B<min)
    {
        min=B;
    }
    if(C<min)
    {
        min=C;
    }
    if(A>max)
    {
        max=A;
    }
    if(B>max)
    {
        max=B;
    }
    if(C>max)
    {
        max=C;
    }
    printf("%d %d",min,max);
    return 0;
}
