#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	
        string username,password;
        while(true){
		
	    cout<<"\nEnter Username:";
	    cin>>username;
	    cout<<"\nEnter Password:";
	    cin>>password;
		if(username=="badar" && password=="ab6513")
	{
		cout<<"\nLogin is accepted";
	}
		else
	{
		cout<<"\nLogin is not accept Plese try again";
	}
}
	return 0;
}
