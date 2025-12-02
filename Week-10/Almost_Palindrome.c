#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],s1[1001];
    scanf("%s",&s);
    strcpy(s1,s);
    int n=strlen(s);
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==s1[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}