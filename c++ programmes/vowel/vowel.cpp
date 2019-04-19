#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	char alphabet;
	cout<<"Enter the Alphabet:";
	cin>>alphabet;	
	if(alphabet== 'a' || alphabet=='A' ||alphabet=='E'||  alphabet== 'e' || alphabet=='I' || alphabet== 'i' ||alphabet=='O' || alphabet== 'o' ||alphabet=='U'|| alphabet== 'u')
	cout<<"The alphabet is vowel";
	else
	{
	cout<<"The alphabet is consonant";
	}
	return 0;
}

