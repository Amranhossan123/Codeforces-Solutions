#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int cou1=0,cou2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            cou1++;
        }
        else if(arr[i]==1){
            cou2++;
        }
    }
    printf("%d %d",cou1,cou2);
    return 0;
}