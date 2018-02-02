#include <iostream>
using namespace std;
struct bike{
	int lno;
	char name[30];
	float km;
};

main()
{
	bike b;
	cout<<"Enter the following details : \n1. License Number :\t";
	cin>>b.lno;
	cout<<"\n2. Driver's name :\t";
	cin>>b.name;
	cout<<"\n3. Distance travelled(in km): \t";
	cin>>b.km;
	cout<<"\n-----------------------------------------------------------------\n";
	cout<<"\nYou entered :";
	cout<<"\n1. License Number :\t"<<b.lno;
	cout<<"\n2. Driver's name :\t"<<b.name;
	cout<<"\n3. Distance travelled(in km): \t"<<b.km;
}
