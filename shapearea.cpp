#include<iostream>
using namespace std;
class Shape
{
    protected:
    float height,base,length,width,area,radius;
    public:
        void show()
        {
            cout<<"The Area:"<<area<<endl;
        }
};
class Triangle:public Shape
{
public:
    void setval(float x,float y)
    {
        height=x;
        base=y;
    }
    void calarea()
    {
        area=0.5*height*base;
        cout<<"Triangle1:"<<endl;
    }
};
class Rectangle:public Shape
{
public:
    void setval(float x,float y)
    {
        length=x;
        width=y;
    }
    void calarea()
    {
        area=length*width;
        cout<<"Rectangle1:"<<endl;
    }
};
class Circle:public Shape
{
public:
    void setval(float x)
    {
        radius=x;
    }
    void calarea()
    {
        area=3.1416*radius;
        cout<<"Circle1:"<<endl;
    }
};
int main()
{
    Triangle ob;
    ob.setval(10.0,15.5);
    ob.calarea();
    ob.show();
    Rectangle ob1;
    ob1.setval(12.0,10.5);
    ob1.c ssalarea();
    ob1.show();
    Circle ob3;
    ob3.setval(5.5);
    ob3.calarea();
    ob3.show();

}
