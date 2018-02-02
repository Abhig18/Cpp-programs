#include <iostream> //including I/O stream
using namespace std;

main() //main function
{
	int days,y,w,d; //variable declaration
	cout<<"Enter the number of days : ";
	cin>>days; //taking the number of days from the user
	y=days/365;
	w=(days%365)/7;
	d=days-((y*365)+(w*7));
	cout<<"Years : "<<y<<"\tWeeks : "<<w<<"\tDays : "<<d; //printing the years, weeks and the days
}
