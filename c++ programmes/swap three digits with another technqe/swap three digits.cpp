#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int a;
	int b;
	int c;
	cout<<"enter the value of a=";
	cin>>a;
	cout<<"enter the value of b=";
	cin>>b;
	cout<<"enter the value of c=";
	cin>>c;
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	cout<<"\nthe swap value of a="<<a;
	cout<<"\nthe swap value of b="<<b;
	cout<<"\nthe swap value of c="<<c;
		
	return 0;
}
