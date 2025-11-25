#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x+1],y;
    for(int i=1;i<=x;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    if(arr[y]==0){
        arr[y]=1;
    }
else if(arr[y]==1){
       arr[y]==0;
}
    for(int j=1;j<=x;j++){
        printf("%d ",arr[j]);
        
    }

    
    return 0;
}