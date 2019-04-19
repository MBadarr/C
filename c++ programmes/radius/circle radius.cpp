#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	double radius;
	
	cout<<"enter the radius of circle=";
	
	cin>>radius;
	
	double area = 3.14 * radius * radius;
	
	cout<<"the area of circle is="<<area;
	
	return 0;
}
