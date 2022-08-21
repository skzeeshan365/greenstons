//C++ program to print Fibonacci series

#include<iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1;

    if (n == 1)
    {
        cout<<a<<endl;
    }
    else if (n != 0)
    {
        cout<<a<<endl;
        cout<<b<<endl;

        for (int i = 2; i < n; i++)
        {
            int c = a + b;
            a = b;
            b = c;

            cout<<c<<endl;
        }
    } else
    {
        cout<<"Not available for input 0";
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter how many Fibonacci numbers you want to print: ";
    cin>>n;
    cout<<"Fibonacci numbers: \n";
    fib(n);
    return 0;
}