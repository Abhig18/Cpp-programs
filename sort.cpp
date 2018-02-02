#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	int i,n,j,temp; //variable declaration
	cout<<"Enter array size : ";
	cin>>n; //taking array size from the user
	int arr[n];
	cout<<"Enter "<<n<<" integers\n"; //taking n integers from the user
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++) //loop to sort the array
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nThe sorted array :\n";
	for(i=0;i<n;i++) //loop to print the sorted array
	{
		cout<<arr[i]<<"\t";
	}
}
	
