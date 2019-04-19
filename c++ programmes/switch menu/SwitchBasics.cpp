#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
    cout<<"\t\t\n\n\t\t___________welcome to badar hotel___________";
    
    
	cout<<"\n\n\nPlease select your menu";
	
	cout<<"\n\n\n1 for select chicken dishes ";
	cout<<"\n2 for select Salad ";
	cout<<"\n3 for select Lemonade ";
	cout<<"\n4 for select Tea";
	cout<<"\n\nChoose your dish = ";
	int option2;
	int quantity;
	int option=0;
	cin>> option;
	switch(option){
		
		case 1: 
		cout<<"\n\nYou Order Chicken Dish";
		 cout<<"\n3 for Zinger Burger";
		 cout<<"\n4 for Zinger Shawarma";
		
		 cout<<"\nChoose your dish = ";
		 cin>>option2;
		
		 switch(option2){
		 	case 3:
		 		cout<<"Your Zinger will be ready soon";
		 		break;
		 	case 4 :
		 		cout<<"Your shawarma will be ready soon";
		 		break;
		 		default:
		 		cout<<"you order wrong";
		 		break;
	}
		 

		case 2: 
		cout<<"\n\nYou Order salad";
		 cout<<"\n5 for italian";
		 cout<<"\n6 for russian";
		 
		 cout<<"\nChoose your dish  = ";
		 cin>>option2;
		 switch(option2){
		 
		 	case 5:
		 		cout<<"Your italian will be ready soon";
		 		break;
		 	case 6:
		 		cout<<"Your russian will be ready soon";
		 		break;
		 	default:
		 		cout<<"You Order Wrong";
		 		break;
}

	case 3: 
		cout<<"\n\nYou Order lemonade";
		 cout<<"\n7 for very cold";
		 cout<<"\n8 for cold";
		 
		 cout<<"\nChoose your dish  = ";
		 cin>>option2;
		 switch(option2){
		 
		 	case 7:
		 		cout<<"Your very cold will be ready soon";
		 		break;
		 	case 8:
		 		cout<<"Your cold will be ready soon";
		 		break;
		    	default:
		 		cout<<"You Order Wrong";
		 		break;
}

	case 4: 
		cout<<"\n\nYou Order tea"; 
		 cout<<"\n9 for green tea";
		 cout<<"\n10 for tea without sugar";
		 
		 cout<<"\nChoose your dish = ";
		 cin>>option2;
		 switch(option2){
		 
		 	case 9:
		 		cout<<"Your green will be ready soon";
		 		break;
		 	case 10:
		 		cout<<"Your tea without sugar will be ready soon";
		 		break;
		 	default:
		 		cout<<"You Order Wrong";
		 		break;
}
default:
	cout<<"you enter wrong";
	break;
}
		
return 0;
	
}
