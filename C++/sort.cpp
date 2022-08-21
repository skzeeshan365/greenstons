#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, a[100];
    cout<<"Enter how many numbers you want to enter \n";
    cin>>n;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"The numbers you entered are : \n";
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}