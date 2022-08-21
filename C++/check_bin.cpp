#include <iostream>
using namespace std;

class test
{
private:
   string str;

public:
   void initializeVar();
   void print();
   void ones_complement();
};

void test ::initializeVar()
{
   cout << "Enter a binary number \n";
   cin >> str;
}

void test ::print()
{
   char flag;
   for (int i = 0; i < str.length(); i++)
   {
      if (str.at(i) != '0' && str.at(i) != '1')
         flag = 1;
      else
         flag = 0;
   }
   if (flag == 1)
      cout << "Its not a binary number \n";
   else
      cout << "It is a binary number \n";
}

void test :: ones_complement()
{
    string temp = str;
    //Check for binary number
    char flag;
   for (int i = 0; i < str.length(); i++)
   {
      if (str.at(i) != '0' && str.at(i) != '1')
         flag = 1;
      else
         flag = 0;
   }
   if (flag == 1)
      cout << "Its not a binary number \n";
   else {
       // calculate 1's complement
    for (int i = 0; i < str.length(); i++)
    {
        if(str.at(i)=='1')
        str.at(i) = '0';
        else
        str.at(i) = '1';
    }
    cout<<"1's complement of "<<temp<<" is: "<<str<<endl;
   }
}

int main()
{
    int a;
    cout<<"Please choose your operation \n";
    cout<<"Enter 1 to check binary \n";
    cout<<"Enter 2 to find 1's compliment \n";
    cout<<"Enter 3 to perform all operations \n";
    cin>>a;
   test testing;
   switch (a)
   {
   case 1:
   testing.initializeVar();
   testing.print();
       break;
   case 2:testing.initializeVar();
   testing.ones_complement();
   break;
   case 3:
   testing.initializeVar();
   testing.print();
   testing.ones_complement();
   default:
       break;
   }

   return 0;
}