#include <iostream>
using namespace std;

int main(){
        
        // Size of the data types checking 
    int a;
    float b;
    double c;
    char d;

    cout<<"size of int is "<<sizeof(a)<<endl;
    cout<<"size of float is "<<sizeof(b)<<endl;
    cout<<"size of double is "<<sizeof(c)<<endl;
       
       // Typecasting -> Means changing one data type value into anopther
       int num1=5.70;
       float num2;
       double num3;

       num2 =  (float)num1;
       num3 =  (double)num1; 
    
    // we use typecaste to change big datatype value into small data type like double-> int , string-> char;

    double num5 = 78.847;
    int num6 =  (int)num5,num7;
    num7 = num5; 

    cout<< num6<<endl;      
    
    cout<< (5/(float)3)<<endl;




    
    return 0;
}

