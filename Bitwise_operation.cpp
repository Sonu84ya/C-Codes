#include<iostream>
using namespace std;

# define result ; 
// AND 
int And(int num1, int num2){
     return  num1 & num2;
}
// OR
int Or(int num1,int num2){
     return num1 | num2;
}
// XOR (EXCLUSIVE OR)
int Xor(int num1,int num2)
{
    return num1 ^ num2;
}
// LEFT SHIFT OPERATOR
int lso(int num1 , int num2){
    return num1 << num2; 
}
// RIGHT SHIFT OPERATOR
int rso(int num1 , int num2){
   return num1 >> num2;
} 



int main(){

cout<<"5 & 10: "<<And(5,10)<<endl;
cout<<"6 & 10: "<<And(6,10)<<endl; 
cout<<"6 | 10: "<<Or(6,10)<<endl;
cout<<"6 ^ 10: "<<Xor( 6,10)<<endl;
cout<<"10 << 2: "<<lso(10,2)<<endl;
cout<<"10 >> 1: "<<rso(10,1)<<endl;
}