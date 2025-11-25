#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        char c;
        scanf(" %c",&c);
        arr[i]=c-'0';
        sum=sum+arr[i];
    }
    printf("%d",sum);
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    
    
    return 0;
}