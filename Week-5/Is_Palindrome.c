#include<stdio.h>
#include<string.h>
int  is_palindrome(char str[]){
   int n=strlen(str);
   int count=1;
   int i=n-1;
   int j=0;
   while (n!=0)
   {
    if(str[i]!=str[j]){
        count=0;
        break;
    }else{
        count=1;
    }
    n=n/10;
    i--;
    j++;
   
}
if(count==1){
    return 1;
}else{
    return 0;
}
   

}
    
int main()
{   
    char str[1001];
    scanf("%s",&str);
    int result=is_palindrome(str);
    if(result==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}