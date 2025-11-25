#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],mindx=0;
    for(int j=0;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    //printf("%d",min);
    int max=arr[0],maxdx=0;
    for(int k=0;k<n;k++){
        if(max<arr[k]){
            max=arr[k];
            maxdx=k;
        }
    }
    int term;
    term=arr[mindx];
    arr[mindx]=arr[maxdx];
    arr[maxdx]=term;
    for(int l=0;l<n;l++){
        printf("%d ",arr[l]);
    }
    // printf("%d",max);
    return 0;
}