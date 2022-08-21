#include<iostream>
using namespace std;

class cons_des
{
private:
    int a, b, c;
public:
    cons_des(); //Constructor declared
    ~cons_des(); ////Destructor declared
    void test_func(); //Sample function
};

cons_des::cons_des() //Constructor defined, you can also use arguments in constructors
{
    //Initialize the variables
    a = 5;
    b = 13;
    c = a+b;
}

cons_des::~cons_des() //Destructor defined
{
    cout<<"data has been deleted \n";
}

void cons_des :: test_func() //Sample function to demonstrate how constructos and destructors work
{
    cout<<a<<" + "<<b<<" = "<<c<<endl;
}

int main()
{
    cons_des cons_desct;
    cons_desct.test_func();
    return 0;
}