#include<stdio.h>
int  min1(int a,int b,int c){
       //minimum value print;
    int min=a;
    if(a<b && a<c){
        min=a;
    }
    else if(b<c){
        min=b;
    }
    else {
        min=c;
    }
    return min;


}
int max1(int a,int b,int c){
        //maximum value print;
       int  max=a;
        if(a>b && a>c){
            max=a;
        }
        else if(b>c){
            max=b;
        }
        else {
            max=c;
        }
        return max;

}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min=min1(a,b,c);
    int max=max1(a,b,c);
    int mid=a;
   if(min==a && max==b){
    mid=c;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   } 
   else if(min==a && max==c){
    mid=b;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   }
   else if(min==b && max==a){
    mid=c;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   }
   else if(min==b && max==c){
    mid=a;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   }
   else if(min==c && max==b){
    mid=a;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   }
   else if(min==c && max==a){
    mid=b;
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n",max);
   }
   printf("\n%d\n",a);
   printf("%d\n",b);
   printf("%d\n",c);




    return 0;
}