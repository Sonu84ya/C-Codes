#include<iostream>
 
 using namespace std;
 


// Finding the prime number 

 void Operator(){

     int num,i=1,n=0;
     cout<<"Enter the value of a: ";
     cin>>num;

     for(i;i<=num;i++){
        if(num%i==0){
                   n++;
        }
      }
     if(n==2){
        cout<<"The given number is prime number\n";
     }
     else {
     
        cout<<"The given number is not prime number\n";
     
     }
 // Finding the factorial of the given numebr 

    int fact,j=1;
    fact=1;
    
    for(j=1;j<=num;j++){
      fact=fact*j;
    }
    cout<<"The factorial of the given number is "<<fact;

 
 }

int Nprime(int i_num, int f_num){
   int count,copy_count;
      if(i_num > f_num ){
         count = f_num;
        while(count<i_num){
         if(count == 2){
            copy_count = count;
         }
           if( count % 2 != 0 ){
            if(count != 1){
            cout<<count<<" ";
            }
            count++;
           }
         else{
            count++;
         }
        }
      }
      else{
         count = i_num;
         while( count < f_num ){
            if(count == 2){
               copy_count = count;
            }
            if( count % 2 != 0 || copy_count % 2 == 0){
               cout<< count << " ";
               count++;
            }   
            else{
               count++;
            }
         } 

      }
} 

 int main(){
    int num1,num2;

    cout<<"Enter your numbers: ";
    cin>>num1>>num2;

    Nprime(num1,num2);
 }
