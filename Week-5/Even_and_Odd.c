#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }
        else if(arr[j]%2!=0){
            odd++;
        }
    }
    printf("%d %d",even,odd);
}

int main()
{
    odd_even();
    return 0;
}