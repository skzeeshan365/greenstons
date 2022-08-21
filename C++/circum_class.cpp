//Program to find Area and Circumference of the circle
#include<iostream>
using namespace std;

class circle
{
	private:
	float radius, ar, circum, x, y;
	public:
	circle(float a, float b, float c)
	{
		radius = a;
		x = b;
		y = c;
	}
	float area()
	{
		return(3.142*radius*radius);
	}
	float cir()
	{
		return(2*3.142*radius);
	}
	float rad()
	{
		return(radius);
	}
	float p()
	{
		return(x);
	}
	float q()
	{
		return(y);
	}
	float pi()
	{
		return(22.0/7.0);
	}
};

int main()
{
	circle C(1.0,5.0,9.0);
	cout<<"The area of the circle is: "<<C.area()<<endl;
	cout<<"The circumference of the circle is: "<<C.cir()<<endl;
	cout<<"The X-coordinate is: "<<C.p()<<endl;
	cout<<"The Y-coordinate is: "<<C.q()<<endl;
	cout<<"The PI value is: "<<C.pi();
	
	return 0;
}