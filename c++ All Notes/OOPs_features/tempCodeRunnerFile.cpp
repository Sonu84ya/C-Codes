#include<iostream>
#include<conio.h>
using namespace std ;

int  main(){
    int num,rem,num2,palin=0;
    cout<<"Enter your number: ";
    do{
    if(num<=99){
        cout<<"Again enter the number: ";
    }  
        cin>>num;
    }while(num<99);

    num2=num;
    while(num>0){
    rem=num%10;
    palin=palin*10+rem;
    num=num/10;
    }
    if(num2==palin){
        cout<<"Given number is plaindrome";
    }
    else{
        cout<<"Given number is not palindrome";
    }
    getch();
    }