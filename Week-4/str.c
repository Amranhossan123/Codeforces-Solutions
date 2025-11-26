#include<stdio.h>
void show(int arr[],int n){
    arr[n-1]=100;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}


int main()
{   
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    show(arr,n);
    
    return 0;
}