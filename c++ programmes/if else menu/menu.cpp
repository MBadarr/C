#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	
	cout<<"\t\t\n\n\t\t___________welcome to badar hotel___________";
	
	string chickendish;
	string vegetabledish;
	string drinks;
	string salad;
	int choice;
	cout<<"\n\n\nPlease select your menu";
	
	
	
	cout<<"\n\n1.chicken dishes";
	
	cout<<"\n2.vegetable dishes";
	
	cout<<"\n3.drinks";

	cout<<"\n4.salad";
	
	cout<<"\n\nwhich category you want to choose:";


     
    cin>>choice;
		
	if(choice==1){
	
	   cout<<"Chicken dishes";
	    
        cout<<"\n1.biryani";
        cout<<"\n2.shwarma";
        cout<<"\n3.karahi\n";
        cin>>choice;
        if(choice==1 || choice==2 || choice==3)
		
		
		cout<<"How Much Quantity You Want:";
		int quantity=0;
        cin>>quantity;
        cout<<"your order has been placed and your quantity is:"<<quantity;
}



if(choice==2){
	
	 cout<<"\nVegetable dishes";
	    
        cout<<"\n1.saag";
        cout<<"\n2.aaloo palak";
        cout<<"\n3.bhindi\n";
        cin>>choice;
        if(choice==1 || choice==2 || choice==3)
		
		cout<<"How Much Quantity You Want:";
		int quantity=0;
        cin>>quantity;
        cout<<"your order has been placed and your quantity is:"<<quantity;

}





if(choice==3){
	
	 cout<<"\nDrinks";
	    
        cout<<"\n1.cold drinks";
        cout<<"\n2.coffe";
        cout<<"\n3.juice\n";
        cin>>choice;
        if(choice==1 || choice==2 || choice==3)
		
		cout<<"How Much Quantity You Want:";
		int quantity=0;
        cin>>quantity;
        cout<<"your order has been placed and your quantity is:"<<quantity;

}



if(choice==4){
	
	 cout<<"Salad";
	    
        cout<<"\n1.italian";
        cout<<"\n2.russian";
        cout<<"\n3.pakistani\n";
        cin>>choice;
        if(choice==1 || choice==2 || choice==3)
		
		cout<<"How Much Quantity You Want:";
		int quantity=0;
        cin>>quantity;
        cout<<"your order has been placed and your quantity is:"<<quantity;

}




    return 0;
}
 
