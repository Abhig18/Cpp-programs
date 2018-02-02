#include <iostream>
using namespace std;

int choice,a,l,b,ar;
int area(int a);
int area(int l,int b);

main()
{
	cout<<"1. Square\n2. Rectangle\n3. Quit\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter side of square : ";
			cin>>a;
			ar=area(a);
			break;
		case 2:
			cout<<"Enter length and breadth of rectangle : ";
			cin>>l>>b;
			ar=area(l,b);
			break;
		default:cout<<"Invalid choice";
	}
	cout<<"The area is "<<ar;
}

int area(int a)
{
	return a*a;
}

int area(int l,int b)
{
	return l*b;
}
