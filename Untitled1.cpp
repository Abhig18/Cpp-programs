#include<iostream>
using namespace std;
main()
{
	char ch[10];
	string s;
	int n,choice,d;
	do{
	
		cout<<"1. Enter\t2. Display\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
				cout<<"Enter your name : ";
				cin>>ch;				
				s=ch;
				cout<<"Enter a number : ";
				cin>>n;
			break;
			case 2:
				cout<<"Name : "<<s;
				cout<<"\nNumber : "<<n;
			break;
			default:
				cout<<"Invalid choice";			
		}
		cout<<"Enter 1 to continue and any other number to exit : ";
		cin>>d;
	}while(d==1);
}
