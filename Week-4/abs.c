#include<stdio.h>
int my_abs(int n){
    if(n>0){
        n=n;
    }
    else{
        n=-n;
    }
    return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    int show=my_abs(n);
    printf("%d\n",show);
    return 0;
}