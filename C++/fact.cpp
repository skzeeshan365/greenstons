//Write a C++ Program to find factorial of a number

#include<iostream>
#include<conio.h>

using namespace std;
long int fact(int);

int main()
{
	long int x;
	int y;
	cout<<"Enter the number \n";
	cin>>y;
	x = fact(y);
	cout<<"The factorial of "<<y<<" is "<<x;
	return 0;
}
long int fact(int z)
{
	long int f=1;
	if(z==1)
		return(f);
	else
	{
		for(int i=1;i<=z;i++)
		{
			f = f*i;
		}
		return(f);
	}
}