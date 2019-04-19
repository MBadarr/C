#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	cout<<"Table In Loop\n";
	int j;
	for(int i=2;i<=10;i++){
	for(int j=1;j<=10;j++){
	cout<<i<<"*"<<j<<"="<<i*j<<endl;	
	}	
	}
	
	return 0;
}
