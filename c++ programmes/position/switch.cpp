#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
	{
	int marks;
	cout<<"Enter your marks:";
	cin>>marks;
    
	switch(marks/10){

        case 9:
	    cout<<"\nYou are 1st in class";
	    break;
        case 8:
	    cout<<"\nYou are 2nd in class";
	    break; 
	    case 7:
	    case 6:
	    cout<<"\nYou are 3rd in class";
	    break;
	    default:
	    cout<<"Your position depends on your numbers";
}
	return 0;
}



