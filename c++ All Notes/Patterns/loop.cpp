// Looping example 

#include<iostream>
using namespace std;

main(){
    // Example of while loop

    // int pass=4567;
    // int mypass;

    // cout<<"Enter your password: ";
    // cin>>mypass;

    // while(mypass>0){
    //     if(mypass!=pass){
    //     cout<<"Enter you password: ";
    //     cin>>mypass;
    //     }
    //     else{
    //         cout<<"Unlock!!!";
    //         break;
    //     }

    // }

    //  Example of for loop 
  
  // Program to print the table of any numbers

//  int num1,pro;

//  cout<<"Enter your number to find the table of it: ";
//  cin>>num1;

//  for(int i=1;i<=10;i++){
//     pro=num1*i;
//     cout<<num1<<"*"<<i<<"="<<pro<<endl;
//  }

// For finding the cube and square root of the number

// double num2,cub;

// cout<<"Enter your number: ";
// cin>>num2;

// cub=(int(num2*num2*num2));
// num2*=num2;

// cout<<"The cube of the number is "<<cub<<endl;
// cout<<"The square of the number is "<<num2;

// Example of do while loop

string signal;

cout<<"Enter your name: ";
cin>>signal;

do{
   signal="Green";
   cout<<"Go";
   break;
}while(signal=="Green");

}


