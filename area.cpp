#include<iostream>;
using namespace std;
void circle();
void square();
void rectangle();

main()
{
	int c,d;
	do
	{	
		cout<<"Menu :\n1. Circle\n2. Square\n3. Rectangle\n4. Quit\nPick your choice : ";
		cin>>c;
		switch(c)
		{
			case 1: circle();
			break;
			case 2: square();
			break;
			case 3: rectangle();
			break;
			case 4: exit(0);
			break;
			default: cout<<"Invalid Choice.";				
		}
		cout<<"\nPress 1 to continue and any other number to quit : ";
		cin>>d;
	}while(d==1);
}

void circle()
{
	float r;
	cout<<"\nEnter radius : ";
	cin>>r;
	float area=3.14*r*r;
	cout<<"Area of circle is "<<area;
}

void square()
{
	float a;
	cout<<"\nEnter side length : ";
	cin>>a;
	float area=a*a;
	cout<<"Area of square is "<<area;
}

void rectangle()
{
	float l,b;
	cout<<"\nEnter length and breadth : ";
	cin>>l>>b;
	float area=l*b;
	cout<<"Area of rectangle is "<<area;
}
