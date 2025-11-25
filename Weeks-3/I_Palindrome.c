#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],str1[1001];
    scanf("%s",&str);
    int count=strlen(str);
    for(int i=0;i<count;i++){
        str1[i]=str[count-1-i];
    }
    int pal=1;
    for(int j=0;j<count;j++){
        if(str[j]!=str1[j]){
            pal=0;
            break;
        }
    }
    
    if(pal==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}