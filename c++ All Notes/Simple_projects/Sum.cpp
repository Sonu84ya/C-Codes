#include<iostream>
using namespace std;

// Using macros

#define sqr1(a) (a*a)
#define sqr2(b) (b*b)

// For finding the value of (a+b)^2
namespace dan{
int Square(int a, int b){
    int w_sqr;
    w_sqr=(sqr1(a))+(2*a*b)+(sqr2(b));
    cout<<"The value of (a+b)^2 is "<<w_sqr<<endl;
}
}

// Function to  find the sum of terms in the arithmetic series
namespace Am1{
double Arimen(double first_term,double last_term,double dif){
    double sum;
    
    sum=(((2*first_term)+((last_term-1))*dif))/2;
    
    return sum;
};
}

namespace Am2{
double Arimen(double first_term,double last_term,double t_terms){
    double sum;
    
    sum=((first_term+last_term)*t_terms)/2;
    
    return sum;
}};

main(){
     int choice;
     cout<<"Choose your given requiremets of arithmetic series"<<endl;
     cout<<"1. Total number of terms , first_term & common difference\n"<<endl;
     cout<<"2. Total number of terms , first_term & last term"<<endl;
     cout<<"Enter your choice: ";
     cin>>choice;
     
     switch(choice){
        int n,first_term,value,d;
        case 1:cout<<"Enter your first term: ";
        cin>>first_term;
        cout<<"Enter total number of terms: ";
        cin>>n;
        cout<<"Enter common difference: ";
        cin>>d;
        value=Am1::Arimen(first_term,n,d);
        cout<<"The sum of givn arithemetic means  is "<<value;
        break;
        int a,b,value2;
        case 2:cout<<"Enter total number of terms: ";
               cin>>n;
               cout<<"Enter the value of a: ";
               cin>>a;
               cout<<"Enter the value of b: ";
               cin>>b;
               value2=Am2::Arimen(a,b,n);
               cout<<"The required value is "<<value2;
        break;
        default: cout<<"Invalid choice";
        // value2=Arimen(a,b);
     } 
    //  int a,b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // If n,first_term is given then 
    // dan::Square(a,b);// we call namespace function by resolution operator i.e ::

}