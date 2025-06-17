// Example of pointer 

#include<iostream>
using namespace std;

void name(int *a,int *b){
       double pro;
        *a=(*a)+50;
        *b=(*b)+30;
        pro=(*a)*(*b);

       cout<<"Inside function the value of pro is "<<pro<<endl;

       cout<<"The value of a inside function is "<<*a<<endl;
       cout<<"The value of b is function is "<<*b<<endl;

}
main(){ 
    int a,b,value;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;
    
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    name(&a,&b);
     
    cout<<"The modified value of a is "<<a<<endl;
    cout<<"The modified value of b is "<<b<<endl;

}