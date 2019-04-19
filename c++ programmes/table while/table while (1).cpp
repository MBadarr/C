#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int n,c;
	c=1;
	cout<<"Enter A Number:";
	cin>>n;
	while(c<=10)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
		c=c+1;
	}
	return 0;
}
