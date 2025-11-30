#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int and1=k,or1=k,xor1=k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int op_and=arr[i] | arr[j];
            if(op_and<k){
                
            }
        }
    }
    printf("%d",and1);
    return 0;
}