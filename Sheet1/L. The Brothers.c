#include<stdio.h>
#include<string.h>
int main()
{
    int d;
    char f1[100],s1[100],f2[100],s2[100];
    scanf("%s ",f1);
    scanf("%s ",s1);
    scanf("%s ",f2);
    scanf("%s",s2);
    d=strcmp(s1,s2);
    if(d==0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");
    return 0;
}
 
