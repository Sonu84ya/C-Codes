#include<iostream>
#include<string.h>
using namespace std;


class student{

    public: 
     string name;
     double* cgpaPtr;

     student(string name,double cgpa){
        this -> name = name;
        cgpaPtr = new double;  // Creating memory in heap or dynamic memory alloctaion 
        *cgpaPtr = cgpa;
     }
    
     // Created copy constuctor 
      
     student (student &obj){
          this -> name = obj.name;
          cgpaPtr = new double ;
          * cgpaPtr = *(obj.cgpaPtr); 
     }  


     // Deconstructor for delecting dynamic memory allocation

     ~student(){
        delete cgpaPtr;  // problem of memory leak when we not free dynamic allocated memory occur
        cout<< endl <<"I delete every dynamic memory allocation" << endl;   
     } 

    double  getInfo(){
        cout<<"Name = "<< name <<endl;
        cout<<"Cgpa = "<< *cgpaPtr <<endl;
    }

};



// For Inheritance


class person{

public: 
    string name ;
    string address;
    int roll;
     
   person(){

     }
    person(string name,string address){
        this->  name = name;
        this-> address= address; 
    }

    ~person(){
       
       cout<<"Parent deconstructor"<<endl;

    }
   

};

class worker : public person{

  public: 
//   Calling parent constructor in clild constructor
  worker(string name,string address,int roll){
             this-> roll= roll;
  }

  ~worker(){
     cout<<"Child deconstructor"<<endl;
  }

 int  getInfo(){
    cout<<"name: " << name <<endl;
    cout<<"address: "<< address <<endl;
    cout<<"roll: "<<roll <<endl;
 } 

} ;

// Types of inheritance
//1. Single inheritance








int main(){
    //  student s1("Rahul yadav",8.34);
     // Shallow copy / here pointer concept not exist     
    // student s2(s1);

    // s2.getInfo();


 // For Inheritance 
 
  worker w1("Avinash sharma","Birgubj",456);
  
w1.getInfo();
}