#include<stdio.h>
void space_print(int space){
    for(int i=0;i<space;i++){
        printf(" ");
    }
}
void star_print(int star){
    for(int i=0;i<star;i++){
        printf("*");
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1;
    int star=1;
    for(int i=0;i<n;i++){
        space_print(space);
        star_print(star);
        printf("\n");
        space--;
        star+=2;
    }
    int space1=1;
    int star1=(n-1)*2-1;
    for(int j=0;j<n;j++){
        space_print(space1);
        star_print(star1);
        printf("\n");
        space1++;
        star1-=2;

    }

    return 0;
}