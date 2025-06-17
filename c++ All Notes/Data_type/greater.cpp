#include<iostream>
using namespace std;

// Greater Among Three Numbers

int main(){
   int a,b,c;
      
   cout << "Enter the value of a: ",cin>>a;
   cout << "Enter the value of b: ",cin>>b;
   cout << "Enter the value of c: ",cin>>c;

   if(a>b && b>c){
    cout<<"The greater number is "<<a;
   }
   else if(b>c && b>a){
    cout<<"The greater number is "<<b;
   }
   else if(c>a && c>b){
    cout<<"The greater number is "<<c;
   }
   else if(c==b){
    cout << "The value of b and c is equal which is "<<b;
   }     
}