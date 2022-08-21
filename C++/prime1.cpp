#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = false;
    cout<<"Enter a number \n";
    cin>>n;

    for(int i=2; i<=n/2;i++)
    {
        if(n%i==0)
        {
            isPrime = false;
        } else
        {
            isPrime = true;
        }
    }
    if(isPrime == true)
    {
        cout<<"This is a prime number"<<endl;
    } else if(isPrime == false)
    {
        cout<<"This is not a prime number"<<endl;
    }
    return 0;
}