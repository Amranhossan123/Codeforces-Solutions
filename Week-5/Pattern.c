#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1;
    int star=1;
    int star2=(n*2)-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            if(i%2!=0){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        space--;
        star+=2;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }

        for(int k=1;k<=star2;k++){
            if(n%2==0){
                if(i%2==0){
                    printf("-");
                } else{
                    printf("#");
                }
            }else{
                if(i%2==0){
                    printf("#");
                } else{
                    printf("-");
                }
            }

        }
        printf("\n");
        star2-=2;
    }


    return 0;
    
}
