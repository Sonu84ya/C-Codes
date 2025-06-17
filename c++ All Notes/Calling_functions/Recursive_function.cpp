// Recursive function

// A function that calls itself called recursive function. e.g:

#include<iostream>
using namespace std;

// For findiing factorial
int fact(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}

// For finding the product of the all the number between 1 to n number
int pro(int num2){
    if(num2==0){
        return 2;
    }
    else{
      return  2*pro(num2-1);
    }
}

// For finding the product of the all the number between 1 to n number
int pro2(int num){
     if(num==0){
        return 2;
     }
     else {
        return 2*pro2(num-1);
     }
}

// For findiing the sum of the number between 1 to n number
int sum(int num){
     if(num==0){
        return 0;
     }
     else{
        int prev_value= sum(num-1);

        return num+prev_value;
     }
}

// For finding n power of any numbers
int power(int n, int p){
    if(p==0){
        return 1;
    }
    else{
        int prev_power=power(n,p-1);
      return n*prev_power;
    }
}

main(){

// For findiing factorial
 int num;
 cout<<"Enter the number: ";
 cin>>num;
 int value=fact(num); // Calling of function
 cout<<"The value of the factorial is "<< value<<endl;

// For finding the product of the all the number between 1 to n number
int num2;
cout<<"Enter the value of num2: ";
cin>>num2;
int value2=pro(num2); // Calling of function
cout<<"The value of the pro is "<<value2<<endl;

// For finding the product of the all the number between 1 to n number
 int num3;
 cout<<"Enter your number: ";
 cin>> num3;
 int value3=pro2(num3); // Calling of function
 cout<<"The value of the pro2 function is "<<value3<<endl;

// For findiing the sum of the number between 1 to n number
int num4;
cout<<"Enter you fourth number: ";
cin>>num4;
int value4=sum(num4); // Calling of function
cout<<"The value of he sum is "<<value4<<endl;

// For finding n power of any numbers
int num5,pow,value5;
cout<<"Enter the number to find the power: ";
cin>>num5;
cout<<"Enter value of the power: ";
cin>>pow;
value5=power(num5,pow); /// Calling function
cout<<"The requird value of the num is "<<value5<<endl;
}