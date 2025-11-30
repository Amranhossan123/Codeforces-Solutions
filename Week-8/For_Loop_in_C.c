#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(m<9){
        for(int i=n;i<=m;i++){
            if (i==1){
                printf("one\n");
            }
           else  if (i==2)
            {
                printf("two\n");
        
            }
            else if(i==3){
                printf("three\n");
            }
            else if(i==4){
                printf("four\n");

            }
            else if(i==5){
                printf("five\n");

            }
            else if(i==6){
                printf("six\n");

            }
            else if(i==7){
                printf("seven\n");

            }
            else if(i==8){
                printf("eight\n");
            }
            else{
                printf("nine\n");
            }
        }
    }
    else if(m>9){
        for(int i=n;i<=9;i++){
            if (i==1){
                printf("one\n");
            }
           else  if (i==2)
            {
                printf("two\n");
        
            }
            else if(i==3){
                printf("three\n");
            }
            else if(i==4){
                printf("four\n");

            }
            else if(i==5){
                printf("five\n");

            }
            else if(i==6){
                printf("six\n");

            }
            else if(i==7){
                printf("seven\n");

            }
            else if(i==8){
                printf("eight\n");
            }
            else{
                printf("nine\n");
            }

        }
    }
    if(m>9){
        for(int i=10;i<=m;i++){
            if(i%2==0){
                printf("even\n");
            }
            else {
                printf("odd\n");
            }

        }
    }


    
    return 0;
}