// Jumping statements like goto,break,continue,and return

#include<iostream>
using namespace std;

int sum(){
    int a=5,b=6,c;
    c=a+b;
    return c;
}

main(){

    // For break statements. 

    int amt,vat;
    int i;

    for(i=1;i<=20;i++){
        if(i==13){
            break;  // break statement can  only terminate the any function like switch if else etc.
    }
        cout<<i<<" ";
}
    cout<<endl<<"Here your loop is terminated due to break statement"<<endl;

    // For continue statement 

    int j;

    for(j=1;j<=30;j++){
        if(j==20){
            continue; // continue statements igonere the value of the conditional statement execpt it all print
        }
        cout<<j<<" ";
    }
    cout<<"Here 20 is igonered due to continue statement"<<endl;

   // For goto statement
    int k;

    for(k=1;k<=20;k++){
        if(k>=5){
            goto cat;
        }
        cout<<k<<" ";
    }
    cout<<"we never hate our family in our life";
    cat:
    cout<<"Here program comes directly here by igonring all the code between goto variable due to the goto statement"<<endl;
   
   // For return statement

   sum();
}

