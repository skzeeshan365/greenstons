#include<iostream>
using namespace std;

class Ratio
{
    private:
    int num, deno;
    public:
    Ratio()
    {
        num = 0;
        deno = 1;
    }
    Ratio(int a)
    {
        num = a;
        deno = 1;
    }
    void print()
    {
        cout<<num<<"/"<<deno<<endl;
    }
};

int main()
{
    Ratio objx, objy(15);
    cout<<"X = ";
    objx.print();
    cout<<"Y = ";
    objy.print();
    return 0;
}