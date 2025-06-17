// String practice in c++ 

#include<iostream>
#include<string.h>
using namespace std;

main(){

    // First method to input string
    // char n[20];
    // cout<<"Enter your string:";
    // gets(n);
    // cout<<"The string n is: ";
    // puts(n);
    // Another method to input string 

    // string Myroll;
    // cout<<"Enter your roll number: ";
    // getline(cin,Myroll);
    // cout<<"your roll number is "<<Myroll;

    // Examples of the string inbuilt function link strlen,strcat,strcmp ,strrev,strcpy,getline,push-back and pop-back.

   // Strcpy 
    char str1[30],str2[20]="RadhaShyam";
    strcpy(str1,str2); // str2 is copyed in str1
    cout<<"The required str1 is "<<str1;

  // strrev

   char str[20]="Chaurasiya"; 

   cout<<"The reverse of the string is "<<strrev(str)<<endl;

 // strlen or size()

 string name="Sonu Chaurasiya";
 int len=name.length(); // length is stored in len
 int len2=name.size();

 cout<<"The size of the len2 is "<<len2<<endl; 
 cout<<"The length of the name is "<<len<<endl;  

// strcat

char name1[]="Sonu",name2[]="Pratik",result;
strcat(name1,name2); // Concated Value will stored in name1
cout<<"The required concated string is "<<name1<<endl;

// strcmp

char n1[]="Hari",n2[]="Ram";
 int value=strcmp(n1,n2);
 if(value==0){
 cout<<"Both string is same"<<endl;
 }
else{
 cout<<"Both string is different from each other"<<endl;
}

// Replacing the string to other string

string s1="Sonu Chaurasiya";
s1.replace(5,10,"Dome"); /* It means the replacing should start from
 5 index and replace whatever value in the index 5 to index 15 and 
 other is left not replacing */ 
cout<<"The requird string is "<<s1<<endl;

// Append

string naam1="Sonu",naam2="Chaurasiya";

 naam1.append(naam2);
 cout<<"The required appended value of the string is "<<naam1;

 
}