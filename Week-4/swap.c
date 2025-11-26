#include<stdio.h>
void show(int* ptr1,int* ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d %d",*ptr1,*ptr2);
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    show(&a,&b);
    return 0;
}