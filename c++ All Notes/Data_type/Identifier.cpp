# include <iostream>
using namespace std;
void name(){ // name function is a identifier
cout<<"Sonu chauasiya"<<endl;
}
 main(){
   int a=45; // a variable is identifier
    
  //  cout<<"The value of a is"<<a<<endl;
  //  name();
  //  name(); 
// Comparing greater among three numbers

  int num1,num2,num3;
  cout<<"Enter the value of num1: ";
  cin>>num1;
  cout<<"Enter the value of num2: ";
  cin>>num2;
  cout<<"Enter the value of num3: ";
  cin>>num3;

  if(num1>num2 && num2>num3){
    cout<<"The greater number is num189 which is "<<num1;
  }
  
  else if(num2>num1 && num1>num3){
    cout<<"The greater number is num2 which is "<<num2;
  }
  else if(num3>num1 && num1>num2){
    cout<<"The greater number is num3 which is "<<num3;
  }
 }