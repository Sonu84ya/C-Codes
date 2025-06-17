#include<iostream>
#include<conio.h>
using namespace std;

#define max_size 5

int array[max_size];
int top=0;

void create(int item){
  array[top++]=item;   
}

void pop(){
    int a=0;
array[a]=0;
a++;
}

void display(){
    cout<<"The value of the temp is "<<endl;
    cout<<"The elements of the stck is ";
 for(int i=1;i>=0;i--){
    cout<<array[i];
 }
cout<<endl<<endl;
}

int main(){

   int item,opt;
   while(1){
   cout<<"Select Option\n1. Create\n2. Delete\n3. Display elements\n4. Exist\nEnter your choice: ";
   cin>>opt;
   switch(opt){
    case 1: cout<<"Enter the elements have to be insert: ";
    cin>>item;
    create(item);   
    break;
    case 2:pop();
    break;
    case 3:display();
    break;
    case 4: return 0;
    default: cout<<"Invalid choice";

   }
   }
}