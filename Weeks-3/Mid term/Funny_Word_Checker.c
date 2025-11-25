#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],s1[101];
    scanf("%s",&s);
    if(s[0]==s[strlen(s)-1]){
      printf("Yes");
  }
  else{
      printf("No");
  }
  //   int n=strlen(s);
  //   char ch; 
  //   for(int i=0;i<n;i++)      {
  //     s1[i]=s[i];

  //   }
  //   for(int i=0;i<n;i++){
  //       ch =s[0];
  //       s[0]=s[n-1];
  //       s[n-1]=ch;

  //   }
  // if(strcmp(s,s1)==0){
  //   printf("Yes");
  // }else{
  //   printf("No");
  // }
    return 0;
}