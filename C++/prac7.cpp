#include<iostream>
using namespace std;

class complex
{
    private:
    float x,y;
    public:
    complex()
    {
        x = y = 0;
    }
    complex(float a, float b)
    {
        x = a;
        y = b;
    }
    complex operator +(complex obj)
    {
        complex c;
        c.x = x + obj.x;
        c.y = y + obj.y;
        return c;
    }
    void display()
    {
        cout<<x<<" +i"<<y;
    }
};

int main()
{
    complex C1(2.5,3.5);
    complex C2(1.8,4.6);
    cout<<"\nComplex Number A: ";
    C1.display();
    cout<<"\nComplex number B: ";
    C2.display();
    cout<<"\nThe sum of two complex numbers: ";
    complex C3 = C1 + C2;
    C3.display();
    return 0;
}