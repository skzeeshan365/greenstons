#include <iostream>
using namespace std;

class test
{
private:
   string str;

public:
   void initializeVar();
   void print();
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

int main()
{
   test testing;
   testing.initializeVar();
   testing.print();

   return 0;
}