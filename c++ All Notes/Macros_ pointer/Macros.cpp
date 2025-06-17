#include<iostream>
using namespace std;

//Example of using macros it is global when we use PI any where in the program then 3.14 is placed instead of PI  
#define PI 3.14  
#define Square(r) ((r)*(r))

int main(){
	// Area of circle
	int r;
	cout<<"Enter the radius of the circle: ";
	cin>>r;
	
	double area=PI*Square(r);
	cout<<"The area of the square is "<<area<<endl;
	// Total surface area of sphare;
 
    int ra; 
	cout<<"Enter the radius of sphare: ";
    cin>>ra;

	double ar=4*(PI*Square(ra));

	cout<<"Total surface area of the sphare is "<<ar;
}
