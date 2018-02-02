#include <iostream> //including I/O stream
using namespace std;
 
 main() //main function
{
 	int n; //number which is to be checked
 	cout<<"Enter a number : ";
 	cin>>n; //taking number from the user
 	if(n%2==0) //if number is even
 	{
 		cout<<n<<" is an even number";
	}
	else //if number is odd
	{
	 	cout<<n<<" is an odd number";
	}
}
