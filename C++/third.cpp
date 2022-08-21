//Multiplication table

#include<iostream>
#include<conio.h>

int main()
{
    int a,b,i;
    cout<<"Enter a number";
    cin>>a;
    cout<<"Enter terms in table";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<"\n";
    }
}