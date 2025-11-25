#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[100001];
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int cout=0,cous=0,couc=0,coud=0;
        cout=strlen(s);
        for(int j=0;j<cout;j++){
            if(s[j]>='a' && s[j]<='z'){
                cous++;
            }
            else if(s[j]>='A' && s[j]<='Z'){
                couc++;
            }
            else if(s[j]>='0' && s[j]<='9'){
                coud++;
            }

        }
        printf("%d %d %d\n",couc,cous,coud);


    }
    

    return 0;
}