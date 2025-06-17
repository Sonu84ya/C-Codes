#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

    // Typecasting of the data means the process of converting a variable from one data type to another

    int a=20;
    double b=23.2345;
    char c=a;
    // Implicit typecasting
    double a2=a;
    int b2=b;

    cout<<"The a to double is "<< a2<<endl;
    cout<<"The b to int is "<< b2<<endl;

    // Explict typecasting 
    double a3=(double)a;  
    int    b3=(int)b;

    cout<<"By Explicite of a to double is "<<a3<<endl;
    cout<<"By Explicite of b to int is  "<<b3<<endl;

    // To find the type of datatype

    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    
}