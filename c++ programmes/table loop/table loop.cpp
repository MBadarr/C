#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int n,c;
	while(true){
	cout<<"\nEnter a number for table:";
	cin>>n;
	for(c=1;c<=20;c++)
	cout<<n<<"*"<<c<<"="<<n*c<<endl;
}
	return 0;
}
