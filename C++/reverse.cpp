#include<iostream>
using namespace std;

int reverse(int);

int main()
{
    int n, res;
    cout<<"Enter the number: \n";
    cin>>n;
    res = reverse(n);
    cout<<"The reverse of the number "<<n<<" is "<<res;
    return 0;
}
int reverse(int z)
{
    int digit, rev = 0;
    while(z>0)
    {
        digit = z%10;
        rev = rev*10+digit;
        z = z/10;
    }
    return(rev);
}