// 

#include <iostream>
#include <conio.h>
using namespace std;


// CREATING CALCULATOR
class operand{

public: 

int b,a; 
int sum;
int sub;
operand(){
      
}
//  operand(int a, int b){

//       this -> a= a;
//       this -> b= b;
//      cout<< "a= "<<a <<endl <<"b= " <<b <<endl<<endl;
//  }
void display(){
   cout<< "The value of sum is : "<< sum;
}

operand operator+(operand  o3){    // This is example of copy constructor
      
        this -> a=  a;
        this -> b= o3.b;
        cout<< "a= "<<a <<endl << "b= "<<b<<endl;
       operand marks; 
       marks.sum=a+b;
       
       return marks;
}

// operand :: operand operator-(operand o1){
//        operand temp;
       
//       temp.sum= a- o1.b;
//       return temp ;


// }

};

int main(){
operand o, p;
o.a = 9;
p.b = 90;


operand o4 = o + p ;
o4.display();
};
