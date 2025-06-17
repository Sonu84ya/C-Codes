#include<iostream>
using namespace std;

int b=56; // Global veriable

// For exaple of static variable 

int fun(){
    static int age=0;
    age++;
    return age;
}


main(){
    // Exaple of Local variable
    int a;
    cout<<"Enter the value a: "; 
    cin>>a;
    cout<<"The value of a is "<<a<<endl;
    
    // Example of a static variable

    fun(); cout<< endl;  // result=1
    fun(); cout<< endl;  // result=2
    fun(); cout<< endl;  // result=3
    
    // Example of global variable
    cout<<"The value of b is "<<b;
    
 }