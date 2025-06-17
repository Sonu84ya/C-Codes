// Program to store data through stack

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
#define max_size 5;


 void  push(int n1,int n2){  
     int arr[100][100];
     cout<<"Enter your matrix elements: ";
     for(int i=n1-1;i>=0;i--){
       for(int j=n2-1;j>=0;j--){
          cin>>arr[i][j];
       }
     }
     cout<<"Your matrix is "<<endl<<endl;
     for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
// for finding the elements between rows and column  

  cout<<endl<<
  "The middle elements of the matrix is "<<endl<<endl;
   for(int i=1;i<n1-1;i++)
   {
    for(int j=1;j<n2-1;j++)
       {
       
           cout<<arr[i][j]<<" ";
        
      }
    cout<<endl;
   }
  

// For finding  the single elements of the square matrix ;
cout<<endl<<"The single middle elements of the matrix is ";
if(n1&&n2%2!=0){
   int temp=n1/2;
  cout<<arr[temp][temp]<<ends; 
};
   cout<<endl<<endl;
}




void pop(){
  cout<<"hello world";
}

void display(){

}
int main(){
   int num,n1,n2;
   cout<<"Select your choice\n 1. Insert item\n 2. Delete item\n 3. Seen item\n 4. Exist program\n";
   while(1){
      cout<<"Enter your choice: ";
      cin>>num;
   switch(num){
      case 1:
      cout<<"Enter the order of your matrix: ";
             cin>>n1>>n2;
             push(n1,n2);
      break; 
      case 2:pop();
      break;
      int s;
      case 3:;display();
      break;
      case 4:return 0;
      break;
      default:cout<<"Sorry Invalid choice";
   }
   }
}