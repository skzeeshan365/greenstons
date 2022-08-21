//Write a Program to print the factorial of number 10.

#include<iostream>
#include<conio.h>

using namespace std;

long int fact(int);

int main()
{
    int n, f;
    cout<<"Enter the number to find its factorial : \n";
    cin>>n;

    f = fact(n);
    cout<<"The factorial of "<<n<<" is "<<f;
    return 0;    
}
long int fact(int f)
{
    int n=1;
    if(f==1)
    return(n);
    else
    {
    for(int i=1; i<=f; i++)
    {
        n = n*i;
    
    }
    return(n);
    }
}