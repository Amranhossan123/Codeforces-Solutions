#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cou2=0,cou3=0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            cou2++;
        }
        else if(arr[j]%3==0){
            cou3++;
        }
    }
    printf("%d %d",cou2,cou3);
    return 0;
}