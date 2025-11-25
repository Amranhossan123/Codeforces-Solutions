#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int count=strlen(s);
    int con=0;
    for(int i=0;i<count;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u'){
            continue;
        }
        else{
            con++;
        }
    }
    printf("%d",con);
    return 0;
}