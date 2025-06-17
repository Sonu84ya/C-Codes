#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main(){

ofstream obj;
obj.open("Student_data.txt");

obj<<"Your Student data file is here";

obj.close();

ifstream file_out;

file_out.open("Student_data.txt");

string data,real_data;

if(getline(file_out,data)){
    cout<<data;
};

int arr(5);

char c;
for(int i=0 ; i < 5 ;i++){
      
}
// remove("Student_data.txt");
// cout<<"Your file is deleted successflly";
}
