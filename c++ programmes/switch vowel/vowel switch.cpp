#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	char ch;
	cout<<"Enter an alphabet:";
	cin>>ch;
	
	switch(ch){
		case 'a':
		case 'A':
		cout<<"the alphabet is vowel";
	    break;
		
		case 'e':
		case 'E':
		cout<<"the alphabet is vowel";
	    break;
		
		case 'i':
		case 'I':
		cout<<"the alphabet is vowel";
	    break;
		
			case 'o':
			case 'O':
		cout<<"the alphabet is vowel";
	    break;
		
		case 'u':
		case 'U':
		cout<<"the alphabet is vowel";
	    break;
			
		default:
		cout<<"the alphabet is consonant";
		break;
	
		
		
	}
	
	
	return 0;
}
