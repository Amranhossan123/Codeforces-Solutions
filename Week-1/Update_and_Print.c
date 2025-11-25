#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    for(int j=0;j<n;j++){
        if(x==j){
            arr[j]=y;
        }
    }
    for(int k=n-1;k>=0;k--){
        printf("%d ",arr[k]);
    }
    return 0;
}