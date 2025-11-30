#include<stdio.h>
#include<string.h>
int main()
{
    char sen[101],ch,s[101];
    scanf("%c",&ch);
    scanf("%s",s);
    getchar();
    fgets(sen,101,stdin);
    printf("%c\n",ch);
    printf("%s\n",s);
    
    printf("%s\n",sen);
    return 0;
}