/*
   The process of hiding unnecessary information and showing only necessary / importrance information to user interface is class abstractions 

   Abstraction is done by using access secifiers : public , protected , private

   One more way to use abstraction is that by using (Virtual) Keyword with class
   
   If we make any class abstract then its not possible to create object of it but we 
   can use it as a templete of other class means we can inherite metods and poroperties of it in other classes

   It is similar function overriding 

   Example of abstract is below:  

*/

#include<iostream>
using namespace std;
 
 class vehicle{
  private:
    string blue_book,licence;
  public: 
    long int v_number; 
 
  virtual void setLicence()=0; 
  /*
      Pure-Virtual Function.Means Every chind class which inherited this class must have this function set licence.
  */      
};

class bike: public vehicle{

  public:
  
  void setLicence(){
    cout<<"Bike Data";
  }
};


int main(){
    bike b1;
    b1.setLicence();

    return 0; 
}


