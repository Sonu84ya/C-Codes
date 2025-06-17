#include<iostream>
#include<math.h>
using namespace std;

int  sum(int a, int b){  //a,b -> Parameters
    return a+b;
}

// Finding nCr coefficent of binomial expression 2nd trem i.e a=n and b=r


// Base form of coeffuicent of the expression  
int fact(int n){
    int sum = 1;
     while (n!=0){
         sum *= n;
         n--; 
     }
     return  sum;  
}

int nCr(int n , int r){
    
    int fact1,fact2,fact3;

    fact1 = fact(n);
    fact2 = fact(r);
    fact3 = fact(n-r);

int coeff = fact1/(fact2*fact3);
   
   return coeff;

}

int nCr2(int n ,int r,int a ,int b){
   
     int f1,f2,f3;
     f1 = fact(n);
     f2 = fact(r);
     f3 = fact(n-r);
     int diff = n-r; 
     int coff;
     if(a>0){
          coff = f1/(f2*f3)*pow(a,diff);
     }
     else if(b>0){
          coff = f1/(f2*f3)*pow(b,diff);
     }
     return coff;
}

int main(){
//    int n,r;
//    cout<<"Enter degree of expression: ";
//    cin>>n;
//    cout<<"Enter index number of term: ";
//    cin>>r;
//    r= r-1;
   cout<<"Coefficent of "<<3 <<" trem: "<<nCr2(5,4,0,3);
   return 0;
}