#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int temp=*a;
     *a=*a + (*b);
     *b=abs(temp-(*b));

}

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}