#include <iostream> //including I/o stream
using namespace std;

main() //main function
{
	char a[10];
	char b[10];
	cout<<"Enter two words : ";
	cin>>a>>b; //the two words which are to be checked
	int i,sum1=0,sum2=0; //variable declaration
	for(i=0;a[i]!='\0';i++) 
	{
		sum1=sum1+a[i];
	}
	for(i=0;b[i]!='\0';i++)
	{
		sum2=sum2+b[i];
	}
	if(sum1==sum2) //if both are anagrams
	{
		cout<<"The given pair is an anagram";
	}
	else //if both are not anagrams
	{
		cout<<"The given pair is not an anagram";
	}
}
