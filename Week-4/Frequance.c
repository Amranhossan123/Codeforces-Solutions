#include<stdio.h>
void show(int arr[]){
    for(int i=0;i<5;i++){
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
    return 0;
}