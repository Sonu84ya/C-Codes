#include<iostream>
using namespace std;

class Base {

    public:
       virtual void  show(){
        cout<<"Base class"<<endl;
       }

};
class Derv1:public Base{
  public:
     void show(){
        cout<<"Child class 1"<<endl;
     }
};
class Derv2:public Base{
  public:
     void show(){
        cout<<"Child class 2"<<endl;
     }   
};

int main(){

Base *ptr;

ptr = new Derv1;
ptr -> show();

ptr = new Derv2;
ptr -> show();
}