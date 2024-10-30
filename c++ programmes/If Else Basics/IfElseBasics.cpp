#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	double MP=0,IP=0,HQ=0,num1=0,num2=0,result=0;
	char HafizStatus;
	cout<<"Please Tell Us your Matric Numbers: ";
	cin>>num1;
	cout<<"\nPlease Tell Us your Inter Numbers: ";
	cin>>num2;
	cout<<"\nAre You Hafiz e Quraan if yes then type y if no then type n and press enter key: ";
	cin>>HafizStatus;
	MP= ((num1/1100)*0.15)*100;
	IP= ((num2/1100)*0.80)*100;
	if (HafizStatus=='y'){
	HQ=5;
	}
	result = MP+IP+HQ;
	cout<<"Your Aggregate Is "<<result;
    if (result>=60){
	cout<<"\nYou Can Apply";
	}
	else{
	cout<<"\nYou Can Not Apply";
	}
	return 0;
}

