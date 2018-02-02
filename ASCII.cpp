#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	char ch; //character whose ASCII is needed
	cout<<"Enter the character whose ASCII value is required : ";
	cin>>ch; //taking the character from the user
	int ans=ch; //converting to ASCII value 
	cout<<"\nThe ASCII value of "<<ch<<" is "<<ans; //Printing the ASCII value
}
