
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	
	int a,b,c;
    cout<<"Enter value of a = ";
    cin>>a;
    cout<<"Enter value of b = ";
    cin>>b;
    c=a;
    a=b;
    b=c;
   
    cout<<"\nresult value of a="<<a;
    cout<<"\nresult value of b="<<b;
    
    
    return 0;
    
}

	
	
	
