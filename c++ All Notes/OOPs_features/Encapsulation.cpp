#include<iostream>
#include<conio.h>

using namespace std;

// Encaplsulation practice Example class
// It prevent unauthorized accessibility of data variables of the class 

class Encap{
    private:
    int a;

    void show1(){

       cout<<"This function is from private section";

    }
    public:
    string name;

    void show(){
        a=56;
        cout<<"The value of a is "<<a<<endl;
        show1();
        cout<<endl;
    } 
};

// int main(){

//    Encap obj;

//    obj.name="Hariyadav";
//    obj.show();

//     cout<<obj.name;

// }


// Polimorphism examples

                                /* Compile-Time Polymorphism*/ 

void setvalue(int age){                       // function over heading
         cout<<age<<endl;     
}

void setvalue(string name){
  cout<<name<<endl;
}
void setvalue(double clas){
  cout<<clas<<clas;
}



                                /*Run-Time polymorphism*/



class x{
 
 public:

 virtual void disp(){
    cout<<"This is x class";
 }


};


class y:public x{
 public:
void disp(){

      cout<<"This the y class";
}

};

int main(){
//   setvalue(45);
//   setvalue("Sonu_chaurasiya");
//   setvalue(10.0000);
 

 x  * var;

   y obj;

   var=&obj;
//    obj.x::disp();

   var->disp();
}