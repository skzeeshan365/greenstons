#include<iostream>
#include<string.h>

using namespace std;

class Person
{
    private:
    char name[80];
    public:
    Person()
    {
        strcpy(name, "BOB");
    }
    virtual void print()
    {
        cout<<"Name of the person assign through base class: "<<name<<endl;
    }
};
class Student: public Person
{
    private:
    char name1[80];
    public:
    Student()
    {
        strcpy(name1, "TOM");
    }
    void print()
    {
        cout<<"Name of the person assigned through derived class: "<<name1;
    }
};

int main()
{
    Person *p, x;
    Student y;
    p = &x;
    p->print();
    p = &y;
    p->print();
    return 0;
}