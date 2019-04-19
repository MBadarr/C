#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int ftemp;
	
	cout<<"enter temperature in farenheit =";
	cin>>ftemp;
	
	int ctemp = (ftemp-32) * 5 / 9;
	
	cout<<"temperature in celsius is = " <<ctemp;
	
	
	
	return 0;
}
