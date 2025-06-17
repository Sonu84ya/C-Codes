#include<iostream>
using namespace std;


/* Run time polymorphism 
   This is done in inheritance 
    (1.) Virtual Functions -> This Method  of determing useful function from base/parent class and child class is called functions overriding    
*/


// Function Overriding 
class Mahindra{
      protected: 
        string pass;
      public: 
      void setPass(string s){
         pass = s;
         cout<<"Base class";   
     }      
};

class Tesla :public Mahindra{
   public: 
    Tesla(){

    } 
    void setPass(string s){
           pass = s ;
         cout<<"Child class";  
      } 
    void display(){
        cout<<"password: "<<pass;
    };
};

int main(){

   Mahindra m1;
   m1.setPass("sonu@321");

} 