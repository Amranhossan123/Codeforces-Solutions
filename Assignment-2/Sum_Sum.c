#include<stdio.h>
int main()
{
    int n,sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>0){
            sum=sum+arr[j];
        }
        else{
            sum1=(sum1+ arr[j]);
        }

    }
    printf("%d %d",sum,sum1);

    return 0;
}