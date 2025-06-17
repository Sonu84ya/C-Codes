#include<iostream>
#include<fstream>
using namespace std;

main(){
	// ***** Creating file through c++ in any folder *****
	
//	ofstream onfile;
//	
//	onfile.open("C:\\Users\\Sonu Chaurasiya\\Videos\\New folder\\first.cpp");
//  	
//  	int a,b,s;
//  	 onfile<<"Enter your first number: ";
//  
//  	 onfile<<"Enter your secoand number: ";
//  	 
//  	 onfile<<"your sum of first number and secoand number is "<<s;
//  	
//	  
//	onfile.close();	  
//	
	// ******Copying the text of one file into another*******
	
//    ifstream infile;
//	ofstream onfile;
//	char (str);
//	infile.open("C:\\Users\\Sonu Chaurasiya\\OneDrive\\Desktop\\new_file6.txt");
//	onfile.open("C:\\Users\\Sonu Chaurasiya\\OneDrive\\Desktop\\new_fil2.txt");
//    while(infile.get(str)){
//	  onfile.put(str);
//	}
//    cout<<"Your text is copied successfully!!!";
//	infile.close();

    // ***** For deleting the file from the any folder or desktop
    
    ofstream onfile;
    
    // if()){
    	cout<<"This file is already exist";
	// }else{		
    onfile.open("C:\\Users\\Sonu Chaurasiya\\OneDrive\\Desktop\\file.txt");
    onfile<<"Your new file Hello love you";
    cout<<"Your file is created successfuly";
    onfile.close();
    		
	// }
    
//   int value=remove("C:\\Users\\Sonu Chaurasiya\\OneDrive\\Desktop\\file.txt");
//   if(value==0){
//   	cout<<"Your file is deleted successfully";
//   }
//   else{
//   	cout<<"Your file is not deleted";
//   }
}
