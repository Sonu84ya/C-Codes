#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

// class students{
    
//     private:
//     int age;
//     string name;
//     string father_name;
//     string clas;
//     char mother_name;
    
//      public:
//     void input(){
//         cout<<"Enter your name: ";
//         getline(cin,name);           
//         cout<<"Enter your age: ";
//         cin>>age;
//         cout<<"Enter your class: ";
//         cin>>clas;
//         cout<<"Enter your mother name: ";
        
//         cout<<("Enter your father name: ");
//         getline(cin,father_name);
//     }

//     void show(){
//         cout<<"Name = "<<name<<endl;
//         cout<<"Age = "<<age<<endl;
//         cout<<"Class = "<<clas<<endl;
//         cout<<"Father name = "<<father_name<<endl;
//         cout<<"Mother name = "<<mother_name;
//     }
// };


// main(){
//    students sonu;
//    sonu.input();
//    sonu.show();
// }

// Best example of the global class

class  data{
    protected:
    int age;
    string name;

    public: 
    void input(){
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"Enter your age: ";
        cin>>age;
    }

    void show(){
        cout<<endl<<"Name = "<<name<<endl<<"Age = "<<age;
    }

   
};

class data2:public data{
    public:
    void disp(){
        cout<<endl<<"Name = "<<name<<endl<<"Age = "<<age;
    }
};

int main(){
    
    data2 obj;
    // data2 obj;
    obj.input();
    obj.show();
    obj.disp();
}