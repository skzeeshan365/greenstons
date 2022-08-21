//Multiplication table

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,i;
    cout<<"Enter a number : \n";
    cin>>a;
    cout<<"Enter terms in table : \n";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<"\n";
    }
    return 0;
}