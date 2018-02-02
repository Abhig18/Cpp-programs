#include <iostream> //including I/O stream
using namespace std; //to temporarily store the program

//function prototypes:
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);

main()//main function
{
	int a,b,c,d; //variable declaration
	do
	{	
		cout<<"Enter two numbers :\n"; //asking for two numbers
		cin>>a>>b;
		cout<<"Menu :\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nPick an option : "; //giving option to the user
		cin>>c; //taking choice from user		
		switch(c) //switch case to perform the desired operation
		{
			case 1: cout<<"Addition is "<<add(a,b);
			break;
			case 2: cout<<"Subtraction is "<<subtract(a,b);
			break;
			case 3: cout<<"Multiplication is "<<multiply(a,b);
			break;
			case 4: cout<<"Division is "<<divide(a,b);
			break;
			case 5: exit(0);
			break;
			default: cout<<"Invalid Choice";		
		}
		cout<<"\nEnter 1 to continue and 0 to exit : ";
		cin>>d;
	}while(d==1);
}

int add(int a,int b) //function to add
{
	return a+b;
}

int subtract(int a,int b) //function to subtract
{
	return a-b;
}

int multiply(int a,int b) //function to multiply
{
	return a*b;
}

int divide(int a,int b) //function to divide
{
	return a/b;
}
