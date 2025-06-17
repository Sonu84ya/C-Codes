// Fifth statement is (....Switch statement....). Example:-

#include<iostream>
using namespace std;

int main(){
int num1,num2;
char sign;

cout << "Enter your calculation below like num1 + num2 and so on claculation\n";
// cout<<"Enter the first numebr: ";
cin>>num1;

// cout<<"Enter the operator: ";
cin>>sign;

// cout<<"Enter the secoand number: ";
cin>>num2;
 
 

switch(sign){
    case '+':cout<<"="<<num1+num2;
    break;
    case '-':cout<<"="<<num1-num2;
    break;
    case '*':cout<<"="<<num1*num2;
    break;
    case '/':cout<<"="<<num1/num2;
    break;
    case '%':cout<<"="<<num1%num2;
    break;
    default:"Invalid chooice";
}
}

