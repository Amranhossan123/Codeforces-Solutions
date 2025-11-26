#include<stdio.h>
void alpha(int n){
    for(int i=0;i<=n;i++){
        printf("%c",i+'a');
    }

}

int main()
{
    int m;
    int n=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        alpha(n);
        printf("\n");
        n++;
    }
    return 0;
}