// Call By Address and Call By reference practice

#include<iostream>
using namespace std;

// Call by Address

string nam(string *name){
    cout<<"Your name is "<<*name;
}



main(){
    // Example of call By address 
    string name;

    cout<<"Enter your name: ";
    getline(cin,name);
    
    nam(&name);

// Call by reference examples. its syntax is &variable=value variable/empty veriable 
     int a=8;
     int &b1=a;
     int &b2=a;
     b2=6;
     cout<<"The address of b is "<<b2;
      cout<<"The value of a is "<<a;    
}


