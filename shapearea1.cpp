#include<iostream>
using namespace std;
class Shape
{
    public:
        float height,base,length,width,area,radius;

        virtual void callArea()=0;
};
class Triangle:public Shape
{
public:
    Triangle(float x,float y)
    {
        height=x;
        base=y;
    }
    void callArea()
    {
        area=0.5*height*base;
        cout<<"Triangle Area:"<<area<<endl;
    }
};
class Rectangle:public Shape
{
public:
    Rectangle(float x,float y)
    {
        length=x;
        width=y;
    }
    void callArea()
    {
        area=length*width;
        cout<<"Rectangle Area:"<<area<<endl;
    }
};
class Circle:public Shape
{
public:
    Circle(float x)
    {
        radius=x;
    }
    void callArea()
    {
        area=3.1416*radius*radius;
        cout<<"Circle Area:"<<area<<endl;
    }
};
int main()
{
   Shape *p;
    Triangle ob1(10.0,15.5);
    Rectangle ob2(12.0,10.5);
    Circle ob3(5.5);
    p=&ob1;
    p->callArea();
    p=&ob2;
    p->callArea();
    p=&ob3;
    p->callArea();
}

