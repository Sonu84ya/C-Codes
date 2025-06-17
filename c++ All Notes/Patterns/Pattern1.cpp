#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int a,i,j;
    cout<<"Enter the value of a: ";  
    cin>>a;
    int k;
    int l;
    for(i=1;i<=a;i++){
        for(k=5-i;k>=i;k--){
            cout<<" ";
        }
        for(l=1;l<=i;l++){
            cout<<"*";
        }
        // for(j=i;j<=i*2;j++){
        //     cout<<"*";
        // }
     cout<<endl;
    }
}