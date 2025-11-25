#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int fre[26]={0};
    int len=strlen(s);
    for(int i=0;i<len;i++){
        int val=s[i]-97;
        fre[val]=fre[val]+1;
    }
    for(int j=0;j<26;j++){
        if(fre[j]>0){
            printf("%c : %d\n",j+97,fre[j]);
        }
    }
    
    return 0;
}