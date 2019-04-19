#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int a;
	int b;
	
	
	cout<<"enter the value of a =";
	cin>>a;
	cout<<"enter the value of b =";
	cin>>b;
	
	
	a=a+b;
	b=a-b;	
	a=a-b;
	
	cout<<"\nthe swap value of a="<<a;
	cout<<"\nthe swap value of b="<<b;
		
	return 0;
}
