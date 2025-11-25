#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    scanf("%s",&str);
    int count=strlen(str);
    int sum=0;
    for(int i=0;i<count;i++){
        sum=sum+str[i]-48;
    }
    printf("%d",sum);
    return 0;
}