#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

 class Student{
   public: 
   long fee;

   public:
     // properties
     string name;
     int s_id;
     string school_name;
   
   Student(){
     
   }

   Student(string name, int s_id , string school_name,long fee){
      this -> name = name ;
      this -> s_id = s_id ;
      this -> school_name =  school_name;
      this -> fee = fee;
   }

   // Member function or methods
    
  void studentInfo(){
   cout << "name:  "<< name <<endl;
   cout << "s_id: " << s_id <<endl;
   cout << "school_name: "<< school_name << endl;
   cout << "student_fee: "<< fee <<endl; 
  }
 } ;

class Coll_student: public Student{
   private:
   long c_fee;
   public:
   Coll_student(string name, int s_id ,string col_name,long c_fee ){
           this -> name = name;
           this -> c_fee = c_fee;
           this -> school_name = col_name;
           this -> s_id = s_id; 
   } 

  

  void getColInfo(){
      cout<<"name " << name << endl;
      cout<<"s_id: " << s_id << endl;
      cout<<"school_name: " << school_name << endl;
      cout<<"Colledge fee: " << c_fee << endl;
   } 
  
};



class A{
  // Properties
  public: 
   string name;
   int rollno;
   string address;

   A(){

   } 

   A(string name,int rollno,string address) {
       this -> name = name;
       this -> rollno = rollno;
       this -> address = address;
    }

    // Methods / Memember fucnction 

   void getInfo(){
      cout<<"This is object information of class A"<<endl;
      cout << "name: " << name << endl;
      cout << "rollno: " << rollno <<endl;
      cout << "address: " << address <<endl <<endl;
   }  
};

class Cp: protected A{

   public:
   long salary;
   string dept;
   string company_name;
   
   Cp(){

   }
   Cp(string name,string company_name,string dept,string address,long salary){
         this-> name = name;
         this-> company_name = company_name;
         this-> dept = dept;
         this-> address = address;
         this-> salary = salary;
   }

 void getInfo(){
  cout<< "name= "<< name<< endl;
  cout<< "company_name= "<< company_name<< endl;
  cout<< "dept= "<< dept<< endl;
  cout<< "address= "<< address<< endl;
  cout<<"salary = "<< salary <<endl;
 } 

};

class Mp: public A{
  
 public:
   long salary;
   string dept;
   string company_name;
  Mp(string name,string company_name,string address,string dept,long salary){
         this-> name=name;
         this-> company_name = company_name;
         this-> dept = dept;
         this-> address = address;
         this-> salary = salary;
  }

};





class Ta : protected Cp{

  public:
   Ta(string name, int rollno, string address,string dept,long salary){
     this-> name = name;
     this-> address = address;
     this-> rollno= rollno; 
     this-> dept= dept;
     this-> salary= salary;
   }

  void getInfo(){
   cout<<"This is object information of class C"<<endl;
   cout<<"name = "<< name <<endl;
   cout<<"rollno = "<< rollno <<endl;
   cout<<"address = "<< address <<endl;
   cout<<"dept = "<< dept <<endl;
   cout<<"salary = "<< salary <<endl; 
  } 

}; 

class x{
   
   public:
   string name;
   int roll;
   x(){
      
   }
};

class y{
   public:
   long salary;
   y(){

   }
};

class z:protected x,protected y{
      public:
     string pass;

     z(string pass,string name ,int roll,long salary){
         this-> pass=pass;
         this-> name=name;
         this-> roll=roll;
         this-> salary=salary;
     }
    void getInfo(){
         
     
      cout<< "pass= "<< pass<< endl;
      cout<< "name= "<< name<< endl;
      cout<< "roll= "<< roll<< endl;
      cout<< "salary= "<< salary<< endl;
     }
    };
int main(){
//   A s2("Sruvesh yadav",45,"Hetuda");
//   s2.getInfo();
  
//    Ta s1("Johan saha",67,"KTM","Computer Science",56000);

//    s1.getInfo();

   // cout<< "##For Techanicle Person"<< endl;
   // Cp c1("Saurav singh","Microsoft","Computer Science","Us California",100000);

   // c1.getInfo();
   // cout<<endl<<endl;
   // cout<< "**For Medical Person "<< endl;
   // Mp m1("Surindar chaurasiya","Dabur Nepal","Parwanipur","Medicle",50000);

   // m1.getInfo();
   


   z z1("saurav@345","Sruvesh yadav",45,7867);
   z1.getInfo();

 return 0;
}


