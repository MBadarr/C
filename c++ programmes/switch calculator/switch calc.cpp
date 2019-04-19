#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int num1,num2,result;
	char a;
	while(true){
	cout<<"\nEnter 1st number:";
	cin>>num1;
	cout<<"Enter 2nd number:";
	cin>>num2;
	
	cout<<"1.press + to add";
	cout<<"\n2.press - to subtract";
	cout<<"\n3.press * to multiply";
	cout<<"\n4.press / to division\n";
	cin>>a;
		
	switch(a){
        case '+': result=num1+num2;
    	cout<<"The sum is="<<result;
        break;
    	case '-': result=num1-num2;
    	cout<<"The minus is="<<result;
        break;
        case '*': result=num1*num2;
    	cout<<"The multiply is="<<result;
        break;
        case '/': result=num1/num2;
    	cout<< "The divide is="<<result;
        break;
        default:
       	cout<<"Invalid operation";
        break;
}
}
	return 0;
}
