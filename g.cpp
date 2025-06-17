#include<iostream>

using namespace std;

class Greater{

    int num1,num2,num3;
    string sonu;      
    public:
    void setNum(){
    cout<<"Enter num1: ";cin>>num1;
    cout<<"Enter num2: ";cin>>num2;
    cout<<"Enter num3: ";cin>>num3;
    }


    void gNum(){
        if(num1>num2 && num2>num3){
            cout<<"Num1 Is Greater Number";
        }
        else if(num2>num3){
            cout<<"Num2 Is Greater Number";
        }
        else{
            cout<<"Num3 Is Greater Number";
        }
    } 


};

class Customer_detail{
    
    char name[30];
    int rollno;
    char address[50];
    char email[50];
    public:
   void setitem();
   void getitem();
};

void Customer_detail::setitem(){
         
        cout<<"Name: ";cin>>name;
        cout<<"Roll Number: ";cin>>rollno;
        cout<<"Address: ";cin>>address;
        cout<<"Email: ";cin>>email;
    }
 void Customer_detail::getitem(){
        cout<<endl<<endl<<"user name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Email: "<<email<<endl;
    } 

class operation{
    int n,num,sum;
    int array[];
    public: 
    // operation(){
    //    cout<<"Enter number of num: ";
    //    cin>>num;
    // }

    void inputNnum(){
        cout<<"Enter the number of num: ";
        cin>>num;
        for(int i=0 ; i<num ; i++){
             cin>>array[i];
        }
    }

    void sumNnum(){
        cout<<"Num: "<<num<<endl;
        for(int i=0 ; i<num; i++){
           cout<< array[i]<<" ";
        }
        cout<<endl;
        sum =0;
        for(int i=0 ; i<num ; i++){
            sum += array[i];
        }
        cout<<"Sum of array number is "<<sum;
    }
};

class info{

};

class Area{
    int length,width,height;
    int area1,area2; 
    public:
    // Area(int length,int width,int height){
    //        this-> length = length;
    //        this-> width = width;
    //        this-> height = height;
    // } 
    // Area(int lenght,int width){
    //      this-> height = lenght;
    //      this-> width = width;
    // }

    int Area_of_rec(){
        area1 = length*width;
        cout<<"Area of rec: "<<area1;
    }
    int Volume_of_sphare(){
        area2 = length*width*height;
        return area2;
    }

    void revNum(){
        int num,rev,rem;
         cout<<"Enter the number: ";
         cin>>num;
         rev = 0;
         while(num != 0){
             rem = num % 10;
             rev = rev*10+rem;
             num = num/10; 
        }
        cout<<"Reverse Number Is "<<rev;
    }
      
};

class matrix{
int arr1[2][2],arr2[2][2],smatrix[2][2];
public: 

int arr[2][2];

void craete_22_matrix()
{
    cout<<"Enter Matrix Elements: "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
             cin>>arr[i][j];
        }
    }
}


void show_22_matrix(){
    cout<<endl<<endl<<"Output"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
             cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}



// Matrix one

// void mat1(){ 
//     cout<<endl<<endl;
//     cout<<"Enter matrix1 element: "<<endl;
//  for(int i=0 ; i<2 ; i++){
//     for(int j=0 ; j<2 ; j++){
//         cin>>arr1[i][j];
//     }
//  }
// }

// void show_mat(){
//     cout<<endl<<endl;
//      cout<<endl<<endl<<"Matrix One"<<endl;
//     for(int i=0 ; i<2 ; i++){
//       for(int j=0 ; j<2 ; j++){
//         cout<<arr1[i][j]<<" ";
//       }
//       cout<<"\n";
//     }
// }

// // Matrix two

//  void mat2(){
//    cout<<endl<<endl<<"Enter matrix2 elements: "<<endl;
//   for(int  i=0 ; i<2 ; i++){
//      for(int j=0 ; j<2 ; j++){
//         cin>>arr2[i][j];
//      }
//   } 
//  }       
//  void mat2_show()
//  {
//      cout<<endl<<endl<<"Matrix Two"<<endl;
//      for(int  i=0 ; i<2 ; i++)
//   {
//        for(int j=0 ; j<2 ; j++)
//       {
//          cout<<arr2[i][j]<<" ";
//       }
//          cout<<"\n";
//   }
// }

// mat1



// Sum matrix



void sumMatrix(){
    cout<<endl<<endl;
    cout<<"Processing-----!";
   for(int i=0 ; i<2 ; i++){
    for(int j=0 ; j<2 ; j++){
       smatrix[i][j]= arr1[i][j] + arr2[i][j];
    }
   }
}

void show_s_matrix(){
    cout<<endl<<endl;
    cout<<"Output"<<endl;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<smatrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
  
};




int main(){
//    Customer_detail c1;
//   c1.setitem();
//   c1.getitem();
matrix o1;
// o1.mat1();
// o1.mat2();
// o1.show_mat();
// o1.mat2_show();
o1.sumMatrix();
o1.show_s_matrix();

}