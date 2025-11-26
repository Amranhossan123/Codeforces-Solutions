#include<stdio.h>
char small_to_captial(char x){
    if(x>='a' && x<='z'){
        x=x-32;
    }
    return x;
}

int main()
{
    char x;
    scanf("%c",&x);
    char y=small_to_captial(x);
    printf("%c",y);
    return 0;
}