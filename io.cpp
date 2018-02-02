#include<iostream>
using namespace std;
int add(int a,int b);
main()
{
	int x,y;
	cout<<"Enter two numbers :\n";
	cin>>x;
	cin>>y;
	cout<<"Addition of "<<x<<" and "<<y<<" is "<<add(x,y);
}
int add(int a,int b)
{
	return a+b;
}
