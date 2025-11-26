#include<stdio.h>
void show(int n){
    if(n>0){
        for(int i=n;i>=-n;i--){
            printf("%d ",i);
        }
    }
    else if(n<0){
        for(int i=n;i<=n;i++){
            
        }
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    return 0;
}