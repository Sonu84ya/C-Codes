#include<iostream>
using namespace std;

class conversion{
   
  private: int num;

  public:

  int pow= 1,ans= 0,rem;

// Decimal to binary
int desc_bin(int num1){
     
    while(num>0){
       rem = num%2;
       ans += rem*pow; // Binary Storage
       num /=2;
       pow *= 10;
    }
    return ans;    
}

// Binary to Decimal Conversion
int bin_desc(int num1){
      int pow_n=1, ans= 0;   
      int desc_num,count =0;
      while(num1!=0){
             rem = num1%10;
             ans += rem*pow_n;
             pow_n *= 2;
             num1 /= 10;  
             count++;
      }
      cout<<"count = "<<count <<endl;
      return ans;  
}

};
int main(){
   conversion bin_desc;

   int desc= bin_desc.bin_desc(1111);


   cout<<"Decimal Number is "<<bin_desc.bin_desc(10000)<<endl;
   cout<<"Decimal Number is "<<desc<<endl;
  
}