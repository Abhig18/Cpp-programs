#include <iostream> //including I/O stream
using namespace std;

class swap{ //class swap
	private : //private members
		int a,b;
		
	public : //public members
		accept();
		swapping();
		display();
};

swap::accept() //function to accept the two numbers from the user
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
}

swap::swapping() //function to swap the two numbers
{
	a=a+b;
	b=a-b;
	a=a-b;
}

swap::display() //function to display the swapped numbers
{
	cout<<"After swapping : "<<a<<"\t"<<b;
}

main() //main function
{
	class swap ob;
	//calling all the functions :
	ob.accept(); 
	ob.swapping();
	ob.display();
}
