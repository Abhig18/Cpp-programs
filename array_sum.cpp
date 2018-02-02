#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	int i,n,sum=0; //variable declaration
	cout<<"Enter array size : ";
	cin>>n; //taking array size from the user
	int a[n];
	cout<<"Enter "<<n<<" integers\n"; 
	for(i=0;i<n;i++) //taking n integers and adding them
	{
		
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Sum of the given integers is : "<<sum; //displaying the calculated sum
}
