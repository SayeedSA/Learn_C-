#include<iostream>
using namespace std;
class Triangle
{
public:
    float b,h,area;
    Triangle()
    {
        b=12;
        h=10;
    }
    Triangle(float x,float y)
    {
        b=x;
        h=y;
    }
    void callarea()
    {
        area=0.5*b*h;
    }
    void show()
    {
        cout<<area<<" "<<"is the area"<<endl;
    }
};
int main()
{
    Triangle ob;
    ob.callarea();
    Triangle ob1(45.5,23.5);
    ob1.callarea();
    ob.show();
    ob1.show();
}
