// All general concept of c++

#include<iostream>
using namespace std;


// This place is for global decleration

   namespace first{
    void add(){
         cout<<"Sonu chaurasiya\n";
    }
   }
   namespace secoand{
    void add(){
         cout<<"Pratik chaurasiya";
    }
}

int a=100;

int main(){
 
      // For calling the value which is insilzed in the global declaraton we use :: .

      int a=30;

      cout<<"The globlization value of a is "<<::a <<endl ;
      cout<<"The main value of the a is "<<a <<endl;
      first::add();
      secoand::add();
}

