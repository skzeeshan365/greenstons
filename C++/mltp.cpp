#include<iostream>

using namespace std;

 int main()
 {
    int i=1, n, t;
    cout<<"Enter a number: \n";
    cin>>n;
    cout<<"Enter multiple: \n";
    cin>>t;
    do
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<"\n";
        i++;
    } while(i<=t);
    
 }