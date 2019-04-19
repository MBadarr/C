#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks:";
	cin>>marks;
	
	
	if(marks<100 & marks>=90)
	{
		cout<<"you are 1st in class";
	}
	else if(marks<90 & marks>=75)
	{
		cout<<"you are 2nd in class";
	}
	
	else if(marks<75 & marks>=60)
	{
		cout<<"you are 3rd in class";
	}
	
	else
	{
		cout<<"your position depends on your numbers";
	}
	
	return 0;
}
