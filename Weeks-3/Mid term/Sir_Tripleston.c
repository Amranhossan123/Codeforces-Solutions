#include<stdio.h>
#include<string.h>
int main()
{
    char ch[78];
    int arr[26]={0};   
    scanf("%s",&ch);
    int n;
    n=strlen(ch);
    for(int i=0;i<n;i++){
        int val=ch[i]-'a';
        arr[val]=arr[val]+1;
    }
    for(int j=0;j<26;j++){
        if(arr[j]<3){
            printf("%c",j+97);
        }
    }
    return 0;
}