#include <iostream> //including I/O stream
#include<string> //including string header file
using namespace std;

main() //main function
{
	int i; //variable declaration
	char s[20];
	cout<<"Enter a string\n";
	gets(s); //taking the string as input from the user
	for(i=0;s[i]!='\0';i++) //converting the string into lowercase
    {
	    if(s[i]>=65 && s[i]<=92)
	    {
		s[i]=s[i]+32;
	    }
    }
    cout<<"String in Lowercase : "<<s; //printing the new string
}
