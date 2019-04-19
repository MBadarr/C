#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int num1,num2;
	char a;

	cout<<"enter the number:";
	cin>>num1;
	cout<<"enter the number:";
	cin>>num2;
	
	cout<<"press + to add";
	cout<<"\npress - to subtract";
	cout<<"\npress * to multiply";
	cout<<"\npress / to division\n";
	cin>>a;	
	if(a=='+')
	cout<<"the sum="<<num1+num2;
    else if(a=='-')
	cout<<"the subtraction="<<num1-num2;
    else if(a=='*')
   	cout<<"the multiply="<<num1*num2;
    else if(a=='/') 
	cout<<"the divide="<<num1/num2;
	else
	{
	cout<<"\ninvalid operation";
	} 
	return 0;
}
