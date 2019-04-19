#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
    int a;
	int b;
	while (true){	
	cout<<"\n\nEnter 1st value = ";
	cin>>a;
	cout<<"\nEnter 2nd value = ";
	cin>>b;
    cout<<"\n\nFinal result is"; 
    int c = a+b;
	cout<<"\n\nvalue of addition is="<<c;
	c= a-b;
	cout<<"\n\nvalue of subtraction is="<<c;
	c= a*b;
	cout<<"\n\nvalue of multiply is="<<c;
	c= a/b;
	cout<<"\n\nvalue of divide is="<<c;
}
	return 0;
}







