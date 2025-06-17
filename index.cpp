#include<iostream>
using namespace std ;

class Employee{

   private:
       string name;
       double salary; 

   public:
      
      Employee(string name , double salary){
           this -> name = name;
           this -> salary = salary ;    
      }

      string getName(){
        return name;        
      }

      double getSalary(){
        return salary;
      }

      void addMoney(double salary){
        this ->salary = this->salary+salary;        
      }

      void Withdarw(double amount){
           salary = salary - amount;
           cout<<"\nWithdraw amount = Rs."<<amount;
           cout<<"\nRemaining amount = Rs."<<salary; 
      }
       
};



int main(){

    Employee e("Mohan Shah",8000);

    // cout<<"Name: "<<e.getName();
    // cout<<"\nSalary: "<<e.getSalary();

    // e.addMoney(5000);
    // e.Withdarw(500);

    // cout<<"\nUpdated salary: "<<e.getSalary();

     e.Withdarw(800);
     cout<<e.getSalary();

    return 0;
}
