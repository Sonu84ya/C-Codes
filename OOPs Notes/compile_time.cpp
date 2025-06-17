#include<iostream>
using namespace std;

/* Compile time Plymorphism
   This all operations is performed within a class  
     (1.) Function overloading    
     (2.) Constructor overloading 
     (3.) Operatror overloading    
*/ 

// Constructor overloading 
/*
     Constructor overloading means determing useful constructor among more than one  constructor in a class    
*/
class Tata{
    string name ; 
    public:
     Tata(){
        cout<<"Non-Parameterized Constructor";
     }                 
     Tata(string name){
        this -> name;
         cout<<"Parameterized Constructor";  
     }

   /*
    Here according to parameter compilar automatically determined  that which constructor is calling here during compilation 
   */
};

// Function overloading 
/*
    Determining useful function among more than one functions having same name in a 
    class . 
*/

class student{
  private :
    string name,clas,roll,pass;
    public:
    void stu(string n){
         name = n;
         cout<<"Your name: "<<name;
    }
    void stu(long int pass){
        this -> pass= pass;
        cout<<"Your pass: "<<pass;
    }      
};



int main(){
 
//   t1.display(); 
}

