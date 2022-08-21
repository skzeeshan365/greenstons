#include<iostream>
using namespace std;

class Circle
{
    private:
    float radius, x, y;
    public:
    Circle(float a, float b, float c)
    {
        radius = a;
        x = b;
        y = c;
    }
    float ar()
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
    Circle C(1.0,5.0,9.0);
    cout<<"Radius of the circle: "<<C.rad()<<endl;
     cout<<"Area of the circle: "<<C.ar()<<endl;
     cout<<"Circumference of the circle: "<<C.cir()<<endl;
     cout<<"X co-ordinate of the circle: "<<C.p()<<endl;
     cout<<"Y co-ordiname of the circle: "<<C.q()<<endl;
     cout<<"PI value: "<<C.pi();
    return 0;
}