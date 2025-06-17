#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main(){
  // creating file 

  // ofstream obj;

  // obj.open("Student_data.txt");

  // obj<<"Hello Your file is created successfully";
  // cout<<"your file is created successfully";
  // obj.close();

  ifstream obj;

  obj.open("Student_data.txt");
  char c;
  c = obj.get(); 

   
 while(!obj.eof()){
      cout<<c;
      c = obj.get();
 } 
 
obj.close();



}