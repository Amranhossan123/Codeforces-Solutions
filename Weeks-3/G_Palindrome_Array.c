#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(int j=0;j<n;j++){
        arr1[j]=arr[n-1-j];
    }
    int count=1;
    for(int k=0;k<n;k++){
        if(arr[k]!=arr1[k]){
            count=0;
            break;
        }
    }
    if(count){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}