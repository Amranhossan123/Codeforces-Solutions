#include<stdio.h>
int digit(int n){
    int sum=0;
    sum=(n/1000)+(n%10);
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int result=digit(n);
    printf("%d",result);
    return 0;
}