#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

// Class dont have onmemory space means it not occupy space . It is just a templete 
// For creating objects
 
int fun(){

    class detail{    
        private:
        int age;
        string name;  
        string clas;
        
        public: 
       void show(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"Enter your class: ";
            cin>>clas;
            cout<<"Your name is "<<name<<endl;
            cout<<"Your age is "<<age<<endl;
            cout<<"You are read in class "<<clas<<endl;
        }
         
    };
         detail tree;
          tree.show();

}

main() {
   fun();    

}