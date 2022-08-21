#include<iostream>
#include<iomanip>
using namespace std;

class ratio
{
    private:
    float num, deno, f, ref;
    double m;
    public:
    void assign()
    {
        cout<<"Enter numerator: ";
        cin>>num;
        cout<<"Enter denominator: ";
        cin>>deno;
        f = num/deno;
    }
    void convert()
    {
        m = f;
    }
    void invert()
    {
        float temp = num;
        num = deno;
        deno = temp;
        ref = num/deno;
    }
    void print()
    {
        cout<<"Numerator of the original ratio is: "<<deno<<endl;
        cout<<"Denominator of the original ratio is: "<<num<<endl;
        cout<<"The original ratio: "<<setprecision(6)<<f<<endl;
        cout<<"The original ratio in double: "<<setprecision(10)<<m<<endl;
        cout<<"The reciprocal of the original ratio is: "<<setprecision(3)<<ref<<endl;
    }
};

int main()
{
    ratio ratio;
    ratio.assign();
    ratio.convert();
    ratio.invert();
    ratio.print();
    return 0;
}