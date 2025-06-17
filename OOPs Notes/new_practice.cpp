#include <iostream>
#include <conio.h>
#include <string.h> 
#include <stdexcept>
using namespace std;
class Bank{
     protected: 
    double balance; 
    string name; 
    long account_number;
    string address;
    string pass;
public:
    Bank(){

    }

    Bank(string name,double balance,long account_number,string address,string pass){
       
        this -> name = name;
        this -> balance = balance;
        this -> address = address;
        this -> account_number = account_number;  
        this -> pass = pass;
    }

    void show(){
        cout <<"Name= "<<name<<endl;
        cout <<"address= "<<address<<endl;
        cout <<"Account_number= "<<account_number<<endl;
        cout <<"Balance= "<<balance<<endl; 
    } 

};

class Transection : protected Bank{
  private : 
  int new_balance;
    
  public:
  double debit_amt,credit_amt;
  string pass;
    Transection(){

    }
    Transection(long debit_amt,long balance) : Bank( name, balance, account_number, address, pass){
         this -> debit_amt = debit_amt;
         this -> balance = balance;
    } 
    Transection(double credit_amt): Bank(name,balance,account_number,address,pass){
         this -> credit_amt = credit_amt; 
         this -> pass = pass;
         this -> balance = balance;
    }

    void show(){
        cout<< "Your balance is" << balance;
    }


  void Debit(){  // This is known for Withdraw
    try{
       if(balance>0){
       new_balance = balance - debit_amt;
       cout << "Your current amount is "<< new_balance<<endl; 
       }
       
       cout << "Insufficient Amount";
    }
    catch(exception e){
        cout<< e. what();
    };
  }


  void Credit(){ // This is known for Deposite
  string password = "sonu@321";
  cout << "Your current balance is "<< balance<<endl;
  if(pass==password){
     new_balance = balance + credit_amt;
     cout << "Your new balance: "<<new_balance<<endl;
  }
  }

};


int main(){
   Bank p1("Rahul yadav",1200,1234,"Birgunj-14","sonu@321");

   p1.show();

   Transection a1(500);
   a1.Credit();
   a1.show();
}