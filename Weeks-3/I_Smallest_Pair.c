#include<stdio.h>
#include<limits.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr[n+1];
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[j]);
        }
        int min=INT_MAX,max=0;
        for(int j=1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                max=arr[j]+arr[k]+k-j;
                //min=arr[j]+arr[k]+k-j;
                if(max<min){
                    min=max;
                }
            }
        }
        printf("%d\n",min);
    }

    return 0;
}