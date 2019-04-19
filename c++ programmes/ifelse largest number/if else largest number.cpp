#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
     
     int a,b,c;
     cout<<"Enter the first number:";
     cin>>a;
     cout<<"Enter the second number:";
     cin>>b;
     cout<<"Enter the third number:";
     cin>>c;
     
     if(a>b & a>c)
	 {
     	
    cout<<a<<"is the largest number";
	 }
    else if(b>a & b>c)
	{
    	cout<<b<<"is the largest number";
    } 
     else if (c>a & c>b)
	{
     	cout<<c<<"is the largest number";
     	
	}
     else
	{
     	cout<<"All the numbers are same";
	}
     

     
	return 0;
}
