#include<iostream>
using namespace std;

class Student
{
    protected:
    int rollNo;
    public:
    void getRoll()
    {
        cout<<"Enter roll number: ";
        cin>>rollNo;
    }
    void display_rollNo()
    {
        cout<<"Roll No of the student is: "<<rollNo<<endl;
    }
};
class Test:public Student
{
    protected:
    int m1, m2;
    public:
    void get_marks()
    {
        cout<<"Enter marks for subject 1: ";
        cin>>m1;
        cout<<"Enter marks for subject 2: ";
        cin>>m2;
    }
    void display_marks()
    {
        cout<<"Marks scored in two subjects are: "<<m1<<" and "<<m2<<endl;
    }
};

class Sports
{
    protected:
    int marks;
    public:
    void get_sports_marks()
    {
        cout<<"Enter marks for sports subject: ";
        cin>>marks;
    }
    void display_sports_marks()
    {
        cout<<"Marks scored in sports: "<<marks<<endl;
    }
};
class Result:public Test, public Sports
{
    public:
    void display_result()
    {
        cout<<"Total marks: "<<m1+m2+marks;
    }
};
int main()
{
    Result result;
    result.getRoll();
    result.display_rollNo();
    result.get_marks();
    result.display_marks();
    result.get_sports_marks();
    result.display_sports_marks();
    result.display_result();
    return 0;
}