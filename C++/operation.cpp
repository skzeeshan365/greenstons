// Write a program to carry out arithmetic operation using function

#include<iostream>
#include<conio.h>
using namespace std;

void arithOp(float, float, char);

int main()
{
    float a,b;
    char op;
    cout<<"Enter two numbers and a operator \n";
    cin>>a>>b>>op;
    cout<<"The numbers and operator you entered are : "<<a<<op<<b<<endl;
    arithOp(a,b,op);
    getch();
    return 0;
}
void arithOp(float x, float y, char p)
{
    float res;

    switch (p)
    {
        case '+':
        res = x+y;
        cout<<"Addition of "<<x<<" and "<<y<<" is "<<res;
        break;

        case '-':
        res = x-y;
        cout<<"subtraction of "<<x<<" and "<<y<<" is "<<res;
        break;

        case '*':
        res = x*y;
        cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<res;
        break;

        case '/':
        if(y==0)
        {
            cout<<"Error, Denominator is zero";
        } else
        {
            res = x/y;
            cout<<"Division of "<<x<<" from "<<y<<" is "<<res;
        }
        break;
        default:
        cout<<"Wrong input";
    }
}