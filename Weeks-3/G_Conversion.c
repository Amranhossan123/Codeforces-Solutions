#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    fgets(str,100001,stdin);
    int count=strlen(str);
    for(int i=0;i<count;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]==','){
            str[i]=' ';
        }
    }
    printf("%s",str);
    //printf("%s",str);
    return 0;
}