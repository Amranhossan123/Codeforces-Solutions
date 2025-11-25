#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={'a','b','c','d','d'};
    int len=strlen(str);
    for(int i=0;i<len;i++){
      printf("%c",str[i]);
    }
    return 0;
}