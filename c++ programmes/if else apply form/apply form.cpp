#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int age;
	int height;
	cout<<"enter the age =";
	cin>>age;
	cout<<"enter the height =";
	cin>>height;
	
	if (age>20 & height>5)
	{
	cout<<"You can apply";	
	}
	else
	{
	cout<<"You cannot apply";
	}	
	return 0;
}
