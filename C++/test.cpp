//write a c++ program to calculate area of the circle and volume of the sphere.

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

float area(float);
float volume(float);
const float PI = 3.14159;

int main()
{
	float radius,Acir,volc;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	Acir = area(radius);
	volc = volume(radius);
	cout<<"\n The area of circle of radius "<<radius<<" is "<<Acir<<endl;
	cout<<"\n The volume of the sphere of radius "<<radius<<" is "<<volc<<endl;
	return 0;
}
float area(float r)
{
	return(PI*pow(r,2));
}
float volume(float r)
{
	return((4.0/3.0)*PI*pow(r,3));
}