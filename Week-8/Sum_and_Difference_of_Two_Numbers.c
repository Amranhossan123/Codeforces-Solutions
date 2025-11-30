#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    int sum=0,sub=0;
    float sum1=0,sub1=0;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    sub=a-b;
    sum1=c+d;
    sub1=c-d;
    printf("%d %d\n",sum,sub);
    printf("%.1f %.1f\n",sum1,sub1);
    return 0;
}