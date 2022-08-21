#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    char cname[80], cap[80];
    ofstream of1, of2;
    of1.open("CNAME.DAT");
    of1<<"INDIA\n";
    of1<<"CHINA\n";
    of1<<"USA\n";
    of1<<"PAKISTAN\n";
    of1<<"SAUDI ARABIA\n";
    of1.close();
    of2.open("CAP.DAT");
    of2<<"NEW DELHI\n";
    of2<<"BEIJING\n";
    of2<<"WASHINGTON DC\n";
    of2<<"ISLAMABAD\n";
    of2<<"RIYADH";
    of2.close();

    ifstream if1, if2;
    if1.open("CNAME.DAT");
    if2.open("CAP.DAT");
    while (!if1.eof() && !if2.eof())
    {
        if1.getline(cname, 80, '\n');
        if2.getline(cap, 80, '\n');
        cout<<"Capital of "<<cname<<" is "<<cap<<endl;
    }
    if1.close();
    if2.close();
    return 0;
}