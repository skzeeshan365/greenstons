//Write a Program to check whether the number 891 is a prime number or not.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int i,n;
    char flag = 'Y';
    cout<<"Enter the number : \n";
    cin>>n;
    i=2;
    while(i<=n/2) {
        if(n%i==0) {
        flag = 'N';
        }
        else {
            flag = 'Y';
        }
        i++;
    }
    if(flag=='N')
    cout<<"This is not a prime number";
    else {
    cout<<"This is a prime number";
    }
    return 0;
}