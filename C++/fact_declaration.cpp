/* Write a C++ program to find factorial of a given number using declaration. */

#include<iostream>

using namespace std;

int main ()
{
    long int fact(int);
    long int x;
    int n;

    cout<<"Enter any number"<<endl;
    cin>>n;
    x = fact(n);
    cout<<"Value="<<n<<"\nFactorial="<<x;
}
long int fact(int n)
{
    long int value = 1;

    if(n==1)
    return(value);
    else
    {
        for(int i=1; i<=n; i++)

        value=value*i;
        return(value);
    }
    return 0;
}