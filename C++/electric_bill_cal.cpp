//Calculate electricity bill

#include<iostream>

using namespace std;

float bill(float); //Function declaration

int main()
{
    // declaration of variables
    int reading;
    int readings_1 = 100, readings2 = 200, readings_2 = 300, readings_3 = 500;
    float total_bill;

    cout<<"\nEnter meter reading : ";
    cin>>reading;
    total_bill = bill(reading);
    cout<<"Your total bill is : "<<total_bill<<"\n\n"; //Function calling

    if(reading>readings_1 && reading<readings_2) //100 to 300 units
    {
        float charge1 = 3.05, charge2 = 5.00, fcc1 = 75, fcc2 = 115, reading_minused, energyC, consumer_charges;
        float wcr = 1.46, govttax = 0.2604, govt_ed_r = 16;
        reading_minused = reading-readings_1;

        cout<<readings_1<<" X "<<charge1<<" = "<<readings_1*charge1<<endl;
        cout<<reading_minused<<" X "<<charge2<<" = "<<reading_minused*charge2<<endl;
        energyC = (readings_1*charge1)+(reading_minused*charge2);
        cout<<"Energy charges = "<<energyC<<endl;
        cout<<"Fixed charges = "<<fcc2<<endl;
        cout<<"Wheeling charges : "<<reading<<" X "<<wcr<<" = "<<reading*wcr<<endl;
        consumer_charges = energyC+fcc2+(reading*wcr);
        cout<<"Consumer charges : "<<consumer_charges<<endl;
        cout<<"Govt ED charges : "<<"("<<govt_ed_r<<" X "<<consumer_charges<<")/100 = "<<(govt_ed_r*consumer_charges)/100<<endl;
        cout<<"Govt Tax : "<<reading<<" X "<<govttax<<" = "<<reading*govttax<<endl;
        cout<<"Your total bill amount is : "<<total_bill<<endl;

    } else if(reading<readings_1) //0 to 100 units
    {
        float charge1 = 3.05, fcc1 = 75, reading_minused, consumer_charges;
        float wcr = 1.57, govttax = 0.2604, govt_ed_r = 16;
        reading_minused = reading-readings_1;

        cout<<reading<<" X "<<charge1<<" = "<<reading*charge1<<endl;
        cout<<"Energy charges = "<<reading*charge1<<endl;
        cout<<"Fixed charges = "<<fcc1<<endl;
        cout<<"Wheeling charges : "<<reading<<" X "<<wcr<<" = "<<reading*wcr<<endl;
        consumer_charges = (reading*charge1)+fcc1+(reading*wcr);
        cout<<"Consumer charges : "<<consumer_charges<<endl;
        cout<<"Govt ED charges : "<<"("<<govt_ed_r<<" X "<<consumer_charges<<")/100 = "<<(govt_ed_r*consumer_charges)/100<<endl;
        cout<<"Govt Tax : "<<reading<<" X "<<govttax<<" = "<<reading*govttax<<endl;
        cout<<"Your total bill amount is : "<<total_bill<<endl;
        
    } else if(reading>readings_1 && reading<readings_3) //300 to 500 units
    {
        float charge1 = 3.05, charge2 = 5.0, charge3 = 6.65, fcc1 = 75, fcc2 = 115, reading_minused, energyC, consumer_charges;
        float wcr = 1.57, govttax = 0.2604, govt_ed_r = 16;
        reading_minused = reading-(readings2+readings_1);

        cout<<readings_1<<" X "<<charge1<<" = "<<readings_1*charge1<<endl;
        cout<<readings2<<" X "<<charge2<<" = "<<readings2*charge2<<endl;
        cout<<reading_minused<<" X "<<charge3<<" = "<<reading_minused*charge3<<endl;
        energyC = (readings_1*charge1)+(readings2*charge2)+(reading_minused*charge3);
        cout<<"Energy charges = "<<energyC<<endl;
        cout<<"Fixed charges = "<<fcc2<<endl;
        cout<<"Wheeling charges : "<<reading<<" X "<<wcr<<" = "<<reading*wcr<<endl;
        consumer_charges = energyC+fcc2+(reading*wcr);
        cout<<"Consumer charges : "<<consumer_charges<<endl;
        cout<<"Govt ED charges : "<<"("<<govt_ed_r<<" X "<<consumer_charges<<")/100 = "<<(govt_ed_r*consumer_charges)/100<<endl;
        cout<<"Govt Tax : "<<reading<<" X "<<govttax<<" = "<<reading*govttax<<endl;
        cout<<"Your total bill amount is : "<<total_bill<<endl;
    }

    return 0;
}
float bill(float reading) //Function body
{
    int reading1 = 100, reading_2 = 200, reading2 = 300, reading3 = 500;
    float wcr = 1.57, govttax = 0.2604, govt_ed_r = 16;
    float enc, wc, govt_ed_cr, total_bills;

    if(reading>reading1 && reading<reading2) //100 to 300 units
    {
        float cc1, cc2, cc3; 
        float charges1 = 2.90, charges2 = 4.85, fc1 = 70, fc2 = 110;

        cc1 = reading1*charges1;
        cc2 = reading-reading1;
        cc3 = cc2*charges2;
        wc = reading*wcr;
        enc = cc1+cc3+fc2+wc;
        govt_ed_cr = (govt_ed_r*enc)/100;
        total_bills = enc+govt_ed_cr+(reading*govttax);
    } else if(reading<reading1) //0 to 100 units
    {
        float c1;
        float charges = 2.90, fc = 70;

        c1 = reading*charges;
        wc = reading*wcr;
        enc = c1+wc+fc;
        govt_ed_cr = (govt_ed_r*enc)/100;
        total_bills = enc+govt_ed_cr+(reading*govttax);
    } else if(reading>reading1 && reading<reading3) //300 to 500 units
    {
        float ccc1, ccc2, ccc3, ccc4;
        float charges1 = 2.90, charges2 = 4.85, charges3 = 6.65, fc1 = 70, fc2 = 110;

        ccc1 = reading1*charges1;
        ccc2 = reading_2*charges2;
        ccc3 = reading-(reading1+reading_2);
        ccc4 = ccc3*charges3;
        wc = reading*wcr;
        enc = ccc1+ccc2+ccc4+wc+fc2;
        govt_ed_cr = (govt_ed_r*enc)/100;
        total_bills = enc+govt_ed_cr+(reading*govttax);
    }
    return(total_bills);
}