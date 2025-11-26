#include<stdio.h>
void show(int n){
    for(int i=1;i<n;i++){
        printf("%d ",i);
    }
    printf("%d",n);

 }

int main()
{
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}