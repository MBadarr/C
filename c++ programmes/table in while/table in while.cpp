#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Table in While\n";
	int i=2,j;
	while(i<=10){
	j=1;
	while(j<=10){
	cout<<i<<"*"<<j<<"="<<i*j<<endl;
	j++;
	}
	i++;
	}
	return 0;
}
