#include <iostream>
using namespace std;
int main() {
   unsigned int age;
   cout<<"Enter your Age: "<<endl;
   cin>>age;
   if(age < 12){
       cout<<"Child"<<endl;
   }
   else if(age >=12 && age <= 19){
       cout<<"Teen";
   }
   else if(age >=20 && age <= 64){
       cout<<"Adult";
   }
   else{
       cout<<"Senior"<<endl;
   }

    return 0;
}