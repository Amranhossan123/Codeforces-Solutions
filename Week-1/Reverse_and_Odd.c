#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=n-1;j>=0;j--){
        if(j%2!=0){
            printf("%d ",arr[j]);
            }
    }

    return 0;
}