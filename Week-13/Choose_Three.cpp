#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,add=0;
    cin>>t;
    for(int m=1;m<=t;m++){
        cin>>n>>sum;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        for(int j=0;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                   add=arr[j]+arr[k]+arr[l];
                   if(add==sum){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                   }
                }
                if(flag) break;
            }
            if(flag) break;
            
        }
        if(flag==0) cout<<"NO"<<endl;
     


     }
    
    return 0;
}