  #include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	string name,fathername,phno,address;
	cout<<"my name=";
	getline(cin,name);
	cout<<"my fathername=";
	getline(cin,fathername);
	cout<<"my phno=";
	getline(cin,phno);
	cout<<"my address=";
	getline(cin,address);
	
	
	cout<<"\n\n\nmy information is";
	
	
	cout<<"\n_______________";
	cout<<"\nname="<<name;
    cout<<"\n++++++++++++++";
	cout<<"\nfathername="<<fathername;
	cout<<"\n************";
	cout<<"\nphno="<<phno;
	cout<<"\n@@@@@@@@@@@@@@";
	cout<<"\naddress="<<address;
	
	
	
	return 0;
}
