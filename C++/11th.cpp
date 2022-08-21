#include<iostream>
using namespace std;
class ratio
{
private:
int num,deno;
public:
ratio()
{
num = 0;
deno = 1;
}
ratio (int a)
{
num = a;
deno =1;
}
void print()
{
cout<<num <<"/"<<deno<<"\n";
}
};
int main()
{
ratio objX,objY(15);
cout<<"X = ";
objX.print();
cout<<"Y = ";
objY.print();
return 0;
}