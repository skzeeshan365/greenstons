#include<iostream>
using namespace std;

class Ratio
{
    public:
    Ratio()
    {
        cout<<"Object is born\n";
    }
    void x()
    {
        cout<<"Object is alive\n";
    }
    ~Ratio()
    {
        cout<<"Object is died\n";
    }
};

int main()
{
    Ratio ratio;
    ratio.x();
    return 0;
}