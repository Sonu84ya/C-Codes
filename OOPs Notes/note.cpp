   // OOPs concept in c++
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Teacher {
 

      private:
       double salary;  
      // Attributes / properties
       public:           // <- This is called  access modifier 
       string name;
       string address;
       string dept;
       string subject;

    // This is  constructed non-parameterized constructor  
    //   Teacher(){
    //     cout <<"This is my own created constructor"<<endl;  
    //   }

     // This is parameterized constructor 
      Teacher(string name,string address,string deprt,string subject,int salary ){

           this->address=address;
           this->dept=deprt;
           this->salary=salary;
           this->subject=subject;
           this->name=name;          
            
        
      }

       // Exaple of copy constructor
       
      Teacher(Teacher &newObj){
         cout<<"This is ccreated copy constructor"<<endl;
         this->name=newObj.name;
         this->subject=newObj.subject;
         this->dept=newObj.dept;
         this->address=newObj.address;
         this->salary=newObj.salary; 
      }

       // Methods / Member_function() 

       void changDept(string newdeprt){
        dept = newdeprt;
       } 
      
       // Indirectly accessibility of private data member salary through setter and getter function 

        // Setter function
           
        void  setSalary(double s){
            salary = s ;
        };
        // Getter function 

        double getSalary(){     
            return salary;
        }; 

     int getInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Address = "<<address<<endl;
        cout<<"Subject = "<<subject<<endl;
        cout<<"Department = "<<dept<<endl;
     }   


};

int main(){

    Teacher t1("Raju","Birgunj","Computer science","Computer",7463);

    t1.getInfo();

    cout<<"Result of copy constructor "<<endl<<endl;     
    Teacher t2(t1);
     
    t2.getInfo();
   

    Teacher t3(t1);
     
     t3.getInfo();

} 




