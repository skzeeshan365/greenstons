#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[100];
	int i,j,n;
	cout<<"Enter how many numbers you want to enter : \n";
	cin>>n;
	cout<<"Enter " << n <<" numbers : \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n The numbers you entered are : \n";
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<"\n\n The numbers in ascending order are : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
		getch();
		return 0;
}