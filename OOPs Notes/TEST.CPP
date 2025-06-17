#include<iostream>
using namespace std;
 
class Shape{
 
   protected:
       double x,y; 

   public: 
       Shape(){
        x = 0;
        y = 0;
       }
     void getData(){
          cout<<"Enter x = ";
          cin>>x;
          cout<<"Enter y = ";
          cin>>y; 
     }
    virtual void displayArea(){
      cout<<"Display your area of figures"<<endl;
    };    
};

class Tri: public Shape{
     void displayArea(){
        cout<<"Area of triangle: "<<(0.1*x*y)<<" cubic.cm"<<endl;
     } 
};

class Rec: public Shape{
    public:
      void displayArea(){
         cout<<"Area of rectangle is "<<(x*y)<< " sq. cm"<<endl;
    }
};





int main(){
   Rec r1;
   r1.getData();
   r1.displayArea();
}