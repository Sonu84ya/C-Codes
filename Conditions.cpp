#include<iostream>
using namespace std;

int main(){
//     int n;
//     // Program to check single number
//     cout<<"Enter the character ";
//     cin>>n;
//     int isprime = true;
//     for(int i=2 ; i<n ; i++){
//         if(n%i==0){
//            isprime = false;
//            break;
//         }
//     }
// if(isprime == true){
//     cout<<"Prime number";
// }
// else{
//     cout<<"Not prime number";
// }

// Programs to check prime numbers in intervals

  int initial_i,final_i;
  cout<<"Enter itnitial_i: ";
  cin>>initial_i;
  cout<<"Enter final _i: ";
  cin>>final_i;
  int interval;
  interval = final_i-initial_i; 
  
  for(int i=1;i<=interval ;i++){
   int  isprime = true;
    for(int j=2; j<initial_i ; j++){
        if(initial_i%j==0){
            isprime = false;
        }
    }
    if(isprime == true){
        cout<<initial_i<<" ";
    }
    initial_i++;
  }
  



// Code to print all ASCII values with their Numericle value;

// char ch ;
// cin>>ch;

// if( ch>='a' && ch <= 'z'){
//     int val=ch;
//     cout<<"LowerCaseCharacter  "<<val<<endl; 
// }
// else{
//     int val = ch;
//     cout<<"UpperCaseCharacter  "<<val<<endl;
// }

// cout<<"All ASCII lowercase values with their corresponding characters: "<<endl;
// for(int i='a' ; i<='z' ; i++){
//     char j= (char)i;
//     cout<<i<<" -> "<<j<<endl;
// }

// cout<<endl<<"All ASCII uppercase values with their corresponding characters: "<<endl;
// for(int i='A' ; i <= 'Z' ; i++){
//     char j= (char)i;
//     cout<<i<<" -> "<<j<<endl;
// }

// cout<<endl;
// Big use of typecast
// cout<<endl<<"All lowercase alphabets: "<<endl;
// for(int i='a'; i<'z' ; i++){
//     char j= (char)i;
//     cout<<j<<" ";
// }


return 0;
}

