#include<iostream> //including I/O stream
using namespace std;
main() //main function
{
	int choice,d,i=-1,flag;
	long long int num[100]; //array to store contact number
	string name[100]; //array to store names
	string del, search;
	do
	{	//Menu:
		cout<<"Menu :\n1. Add a new contact\n2. Delete a contact\n3. Search for a contact\n4. Display the entire contact list\n5. Exit\nEnter your choice : ";		
		d=0;
		cin>>choice; //taking choice from user
		cout<<"--------------------------------------------------------------\n";
		switch(choice) 
		{
			case 1: //if user wishes to add a new contact
				char ch[20];
				++i;
				cout<<"Enter the name : ";
				cin>>ch;				
				name[i]=ch;
				cout<<"Enter the contact number : ";
				cin>>num[i];				
				break;
			case 2: //if user wishes to delete a contact
				del="";
				if(i==-1)
					cout<<"There are no contacts available to delete";
				else
				{				
					flag=0;
					cout<<"Enter the contact to delete : \n";
					cin>>ch;
					del=ch;
					for(int j=0;j<=i;j++)
					{
						if(del==name[j])
						{
							flag=1;
							name[j]=name[i];
							num[j]=num[i];
							break;
						}
					}				
					name[i]="";
					num[i]=0;
					i--;
					if(flag==1)
						cout<<"\nContact deleted successfully!";
					else
						cout<<"\nNo such contact found.";
				}
				break;
			case 3: //if user wishes to search for a contact
				search="";
				if(i==-1)
					cout<<"No contact available to search";
				else
				{				
					cout<<"Enter the contact to search : \n";
					cin>>ch;
					search=ch;
					for(int j=0;j<=i;j++)
					{
						if(search==name[j])
						{
							cout<<"Name : "<<name[j]<<"\tContact number : "<<num[j];
							break;
						}
					}
				}
				break;
			case 4: //if user wishes to display the full contact list
				if(i==-1)
					cout<<"Contact list is empty";
				else
				{	
					cout<<"The complete contact list :";
					for(int j=0;j<=i;j++)
					{
						cout<<"\nName : "<<name[j]<<"\tContact number : "<<num[j];
					}
				}
				break;
			case 5: //if user wishes to quit the program
				exit(0);
				break;
			default: //if user enters an invalid choice
				cout<<choice<<" is an invalid choice";
		}				
		cout<<"\nEnter 1 to continue and any other number to exit : ";
		cin>>d; //whether the user wants to continue or not
	}while(d==1);	
}
