#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    int j;
    char a2;
    scanf("%d %c",&j,&a2);
    // printf("%d %c",i,a2);
    for(int i=n;i<j;i--){
        a[i]=a[n+1];
    }
    return 0;
}