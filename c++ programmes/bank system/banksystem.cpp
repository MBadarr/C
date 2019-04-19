#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
    while(true){
	string name;
	string accountno;
	long a=500000,b,c;
	int bank;
	char acc;
	int amount;
	int choice;
	
	cout<<"\t\t\t____________ BANK SYSTEM ______________ \t\t\t";
	
	  cout<<"\n\n\n\t\t\tPlease follow our instructions";
	  cout<<"\n\n\n1.Press 1 To Open new account";
	  cout<<"\n\n2.Press 2 To Transaction Money\n";
	  cout<<"\n3.press 3 to check balance\n\n";     
	  cin>>choice;
      if(choice==1){ 
	  cout<<"Amount should not be exceed 5 lakh\n";
	  cout<<"Enter your amount:";
	  cin>>amount;
	  if(amount<=500000){
	  cout<<"\nCongrats!You can open your account\n";
	  cout<<"Please register";
	  cout<<"\n\nEnter your name:";
	  cin>>name;
      cout<<"\n\nEnter your account no:";
	  cin>>accountno;
	  if(name=="b" && accountno=="6") {
	  cout<<"Account is open";
}
    else{
    cout<<"Please try later";	
	}
}
    else{
	cout<<"Please enter correct amount";
}
} 
	if(choice==2){
	cout<<"\n\nEnter your name:";
    cin>>name;
    cout<<"\n\nEnter your account no:";
	cin>>accountno;
	if(name=="badar" && accountno=="ab6513"){
	
	cout<<"\nlogin is accepted";		
	cout<<"\n\n\n1.Press 1 to deposit money:\n";
	cout<<"\n2.Press 2 to transfer money:\n";
	cout<<"\n3.Press 3 to withdrwal money:\n\n";
	cin>>bank;
	switch(bank)
	{
		case 1:
		cout<<"\n\nDeposit the money:";
		cin>>b;
		cout<<"\nYour actual amount is:"<<a;
		c=a+b;
		cout<<"\nYour current balance is:"<<c;
		break;
		
		case 2:
		cout<<"\n\nTransfer the money:";
		cin>>b;
		cout<<"\nYour actual amount is:"<<a;
		c=a-b;
		cout<<"\nYour current balance is:"<<c;
		break;
		
		case 3:
		cout<<"\n\nWithdraw the money:";
		cin>>b;
		cout<<"\nYour actual amount is:"<<a;
		c=a-b;
		cout<<"\nYour current balance is:"<<c;
		break;
			
		default:
		cout<<"you enter wrong";
		break;
		
		
}
 cout<<"\n\n\nYour current record has been updated:"<<c;
}
	else{	
	cout<<"Please try again";
}
}
if(choice==3){
cout<<"Your amount is:"<<a;
}
}
	return 0;
}
