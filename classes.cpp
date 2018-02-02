#include<iostream>
using namespace std;
class student{
	private:
		int regno;
		int marks[5];
		char name[20];
		char grade;
		public:
			accept();
			grading();
			show();
}; 
student::accept()
{
	cout<<"Enter the following details:\n1. Registration number: ";
	cin>>regno;
	cout<<"2. Name of the student: ";
	cin>>name;
	cout<<"3. Marks in 5 subjects: ";
	int i;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}	
	cout<<"--------------------------------------------------------------\n";
}
student::grading()
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	float avg=sum/5;
	if(avg>90)
	{
		grade='A';
	}
	else if(avg>80)
	{
		grade='B';		
	}
	else if(avg>70)
	{
		grade='C';
	}
	else if(avg>60)
	{
		grade='D';
	}
	else if(avg>50)
	{
		grade='E';
	}
	else
	{
		grade='F';
	}	
}
student::show()
{
	cout<<"Registration number :\t"<<regno<<"\nName :\t"<<name<<"\nGrade :\t"<<grade;
	cout<<"\n---------------------------------------------------------------\n";
}
main()
{
	student obj;
	obj.accept();
	obj.grading();
	obj.show();
}
