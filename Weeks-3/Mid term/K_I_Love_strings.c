#include<stdio.h>
#include<string.h>
int main()
{   
    int tc;
    scanf("%d",&tc);
    for(int k=0;k<tc;k++){
        char s1[51],s2[51];
        scanf("%s %s",&s1,&s2);
        int lens1=strlen(s1);
        int lens2=strlen(s2);
        int i=0,j=0;
        while(i<lens1 && j<lens2){
            printf("%c%c",s1[i],s2[j]);
            i++;
            j++;
        }
        while (i<lens1)
        {
            printf("%c",s1[i]);
            i++;
        }
        while(j<lens2){
            printf("%c",s2[j]);
            j++;
        }
        printf("\n");
    }

    
    return 0;
}