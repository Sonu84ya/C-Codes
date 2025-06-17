// Conditional statement allow you to make desicion based on the result of the condition

#include<iostream>
using namespace std;

int sells(int num){
int i,cost,total=0;
for(i=1;i<=num;i++){
    
    cout<<"Enter your item cost: ";
    cin>>cost;

    total=cost+total;
}
 return total;
};

main(){
// First type of statement is if Example:-

int amt,vat;
cout<<"Enter your amount: ";
cin>>amt;
   if(amt>=200000){
   vat=0.13*amt;
   cout<<"Your vat amount is "<<vat;
}

// Secoand type of statement is (....if else....). Example:-

int time;
cout<<"Enter your time: ";
cin>>time;
if(time>=6){
 cout<<"You able to go school"<<endl;
}
else{
    cout<<"You not able to go school"<<endl;
}

// Third type of statement is (....if else if ladder....). Example

string name;
cout<<"Enter any of the name from my family : ";
cin>>name;
if(name=="sonu"){
    cout<<"You gassed right name this person can exist is my family"<<endl;
}
else if(name=="pratik"){
    cout<<"You gassed right name this person can exist is my family"<<endl;
}else{
    cout<<"You loose your game because you gassed wrong name"<<endl<<"This person cant exist in my family";

}


// Fourth type satement is (....nested if statement....). Example

int num,total;
cout<<"Enter your number of items: "<<endl;
cin>>num;
total=sells(num);

cout<<"The total sells of the "<<num<<" items is "<< total<<endl;

int dis,bill_amt;
if(total>=300){
    if(total>=500){
    cout<<"!Congratulation you got 10% discount"<<endl;
    dis=0.1*total;
    cout<<"Your discount amount is Rs"<<dis<<endl;
    bill_amt=total-dis;
    cout<<"Your bill amount is Rs"<<bill_amt;
    }
    else{

      cout<<"Thank you buying above Rs300"<<endl<<"You got one extra vest!!!"<<endl;  
    }
}
else{
   cout<<"Welcome in opening ceremoney";
}



}
