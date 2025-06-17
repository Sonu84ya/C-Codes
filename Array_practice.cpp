// Creating stack method to insert / add data in memory  

#include<iostream>
using namespace std;

#define a 7;

// ANOTHER METOD TO DEFINE THE SIZE OF THE ARRAY

#define max_len 8

int array[max_len];
int i=0;



int main(){
   cout << sizeof(array)<<endl;

  cout<<"input: ";
   for(int j=0; j < 13; j++){
      cin >> array[j];
   }
   cout<<"output: ";
   for(int i=0 ; i<13 ; i++){
      cout << array[i] << " "; 
   }
   // cout<<sizeof(array)/4 << " is the actual length " <<endl;
int ch=0;
int size = sizeof(array)/4;
while (1){ 
cout<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Display"<<endl<<"4. Exit" <<endl    <<"Enter your choice: "; 
cin>>ch;
cout << endl;
switch(ch){
    case 1: cout<< "Enter your array elements: ";
            // if()
    cout<<endl;
    break;
    case 2: cout<< "Delete your data: " ;
            
    break;
    case 3: cout<< "Your output: ";
            for(int i=0;i<5;i++){
            cout<<array[i]<<" ";
            }
             cout<<endl<<endl;
     break;
     case 4: return 0;
     break;
    default: cout<<"Invalid choice !---";          
}

}



return 0;
} 