#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,position=1,sum=0,odd=0;
    scanf("%lld",&n);
    while(n!=0){
        int x=n%10;
        if(position%2==0){
            sum=sum+x;
        }else{
            odd=odd+x;
        }
        n=n/10;
        position++;
    }
    long long int div=abs(sum-odd);
    if(div%11==0){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}