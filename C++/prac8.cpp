#include<iostream>
#include<string.h>
using namespace std;

void reverse(char str[])
{
    int len, i;
    len = strlen(str);
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main()
{
    char str[80];
    cout<<"Enter a string: \n";
    cin.getline(str, 80, '\n');
    cout<<"The string you entered is: \n"<<str<<endl;
    reverse(str);
    cout<<"The reversed string is: \n"<<str;
    return 0;
}