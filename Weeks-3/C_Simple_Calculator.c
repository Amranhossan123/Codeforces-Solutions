#include<stdio.h>
int main()
{
    long long int a,b;
    // char ch;
    // scanf("%c",&ch);
    scanf("%lld %lld",&a,&b);
    printf("%lld + %lld = %lld\n",a,b,a+b);
    printf("%lld * %lld = %lld\n",a,b,a*b);
    printf("%lld - %lld = %lld",a,b,a-b);
    //  if(ch=='*'){
    //     mul=a*b;
    //     printf("%lld * %lld = %lld\n",a,b,mul);
    // }
    //  if(ch=='-'){
    //     sub=a-b;
    //     printf("%lld - %lld = %lld",a,b,sub);
    // }
    return 0;
}