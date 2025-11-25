#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],s1[101];
    scanf("%s %s",&s,&s1);
    int arr[26]={0};
    int arr2[26]={0};
    int m,n;
    m=strlen(s);
    n=strlen(s1);
    for(int i=0;i<m;i++){
        int val=s[i]-'a';
        arr[val]++;
    }
    for(int j=0;j<n;j++){
        int val1=s1[j]-'a';
        arr2[val1]++;
    }
    int possible=1;
    for(int k=0;k<26;k++){
        if(arr[k]>arr2[k]){
            possible=0;
            break;
        }
    }
    if(possible==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}