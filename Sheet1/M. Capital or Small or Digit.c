#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a')&&(a<='z'))
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
   else if((a>='A')&&(a<='Z'))
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }
    return 0;
}
