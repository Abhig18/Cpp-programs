#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	int i,n,l,s; //variable declaration
	cout<<"Enter size of array : ";
	cin>>n; //taking size o farray from the user
	int arr[n];
	cout<<"Enter "<<n<<" integers\n"; //taking n integers from the user
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	l=arr[0]; //variable for the largest integer
	s=arr[0]; //variable for the smallest integer
	for(i=0;i<n;i++) //Loop to find the smallest and the largest integer in the array
	{
		if(l<arr[i])
		{
			l=arr[i];
		}
		if(s>arr[i])
		{
			s=arr[i];
		}
	}
	cout<<"Smallest integer in the array is "<<s<<"\nLargest integer in the array is "<<l; //To print the largest and the smallest integers
}
