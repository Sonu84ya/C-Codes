// Structure in C++

#include<iostream>
#include<string.h>
using namespace std;

struct details{
   
    double salary; //8 bytes
    int age; // 4 bytes
    string name;  // 24 bytes
};

class employee{
  public:   
   string name ;
   string org_name;
   string dept;
   int room_no;
   string phone_no;
   long salary ;
   
 public:    
  int getIn(){
   
   cout<<"Enter name: ";
   cin>>name;

   cout<<"Enter Orgnization name: ";
   cin>>org_name;

   cout<<"Enter dept name: ";
   cin>>dept;
    
   cout<<"Enter salary: ";
   cin>>salary;

  }

  int getOut(){
     cout<<"Name = "<<name<<endl;
     cout<<"Orgnization name = "<<org_name<<endl;
     cout<<"Department = "<<dept<<endl;
     cout<<"Salary = "<<salary<<endl;
  }


};





struct employee1{
  public: 
   string name ;
   string org_name;
   string dept;
   int room_no;
   string phone_no;
   long salary ;

   // methods 
  public:

  int insertIn(){
cout<<"Enter name: ";
     cin>>name;
     cout<<"Organization name: ";
     cin>>org_name;
     cout<<"Enter Department: ";
     cin>>dept;
     cout<<"Enter employeer salary: ";
     cin>>salary;
  }

  int getOut(){
      cout<<"Name = "<<name<<endl;
      cout<<"Orginazation name = "<<org_name<<endl;
      cout<<"Dept = "<<dept<<endl;
      cout<<"Salary = "<<salary<<endl;
  }
   
};



 main(){
    
    // struct details d;{
    // cout<<"Enter your name: ";
    // getline(cin,d.name);
    // cout<<"your name is "<<d.name<<endl;

    // cout<<"Enter your salary: ";
    // cin>>d.salary;
    // cout<<"Your salary is Rs"<<d.salary<<endl;

    // cout<<"Enter your age: ";
    // cin>>d.age;
    // cout<<"Your age is "<<d.age<<"years"<<endl;
    // }
     
     struct employee1 e;

    e.insertIn();
     e.getOut();

     
    employee obj;

    obj.getIn();
    obj.getOut();
   
 }
     