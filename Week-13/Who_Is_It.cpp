

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    char section;
    int marks;
};
int main()
{
   int t;
   cin>>t;
   for(int j=1;j<=t;j++){
    Student topper;
   for(int i=1;i<=3;i++){
        Student temp;
        cin>>temp.id>>temp.name>>temp.section>>temp.marks;
        if(i==1) {
            topper=temp;
        }else{
            if(topper.marks<temp.marks){
                topper=temp;
            }
            else if(topper.marks==temp.marks){
                if(topper.id>temp.id){
                    topper=temp;
                }
            }
        }

   }
   cout<<topper.id<<" "<<topper.name<<" "<<topper.section<<" "<<topper.marks<<endl;

    

   }
   

    return 0;
}