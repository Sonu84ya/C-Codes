#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    int num ; 
    int arr_store[50];

    cout<<"Enter your number: ";
    cin >> num;


    if( num  < 16 ){

       cout << "your Haxadecimal Number is  "<<num; 

     } 
     else{
       int i=0;
       while( num > 0 ){
            
        if( num % 8 == 0 ){
            arr_store[i] = 0;
        }
        else{
            arr_store[i] = num%8;
        }
        num = num/8,i++; 
       }
    }
if(arr_store[0] > 0){
cout<<endl;
for(int j=0; j<sizeof(arr_store)/4 ; j++ ){
 
     cout<<arr_store[j]<<" ";
 
}
}

cout <<endl<< arr_store[4];
return 0;
} 