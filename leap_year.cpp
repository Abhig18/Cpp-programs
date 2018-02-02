#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	int year; //year which is to be checked
	cout<<"Enter the year : ";
	cin>>year; //taking the year from the user
	if(year%4==0) //if the year is a leap year
	{
		cout<<year<<" is a leap year";
	}
	else //if the year is not a leap year
	{
		cout<<year<<" is not a leap year";
	}
}
