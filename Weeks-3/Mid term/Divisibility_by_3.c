#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",&str);
    int m=strlen(str);
    for(int i=0;i<m;i++){
        sum=sum+(str[i]-'0');
    }
    // printf("%d",sum);
    if(sum%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}