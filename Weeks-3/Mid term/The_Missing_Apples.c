#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    x=x-y;
    x=x+z;
    printf("%d",x);
    return 0;
}