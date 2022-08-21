//Write a Program to find the 5th power of the number 12.

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int n, p, r;
    cout<<"Enter the number \n";
    cin>>n;
    cout<<"Enter powers of the number \n";
    cin>>p;
    r = pow(n, p);
    cout<<"Result is "<<r;
}