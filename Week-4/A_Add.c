#include<stdio.h>
int result(int x,int y){
    int sum;
    sum=x+y;
    return sum;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int result1=result(x,y);
    printf("%d",result1);
    return 0;
}