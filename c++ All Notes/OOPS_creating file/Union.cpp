// Union

/*Union is the method of defining variables of two or more data-type
 in the heighest memory location of the data-type.
 Among that data-type 

 ***OR*** 

 It is method of defining two or more variables of the different 
 data-type in the same memory location */

#include<iostream>
using namespace std;

// syntax is union  union-name

union da{
     int age;
     char  name[20];
     double gpa;
};

main(){
     union da d;
     cout<<"Enter your name: ";
     gets(d.name);
    //  cout<<"Your name is ",puts(d.name);
     cout<<"Enter your age: ";
     cin>>d.age;
    //  cout<<"Your age is "<<d.age;
     cout<<"Enter your gpa: ";
     cin>>d.gpa;
    //  cout<<"Your gpa is "<<d.gpa;

     cout<<"Name= "<<puts(d.name)<<endl<<"Age= "<<d.age<<endl<<"Gpa= "<<d.gpa<<endl;
}  

