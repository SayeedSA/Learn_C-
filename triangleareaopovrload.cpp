#include<iostream>
using namespace std;
class Triangle
{
    public:
    double base,height,area;
    Triangle(double x,double y)
    {
        base=x;
        height=y;
    }
    Triangle()
    {
        base=0;
        height=0;
    }
    void calArea()
    {
        area=0.5*base*height;
    }
    int operator>(Triangle p)
     {
         if(area>p.area)
            return 1;
         else
            return 0;
     }
     int operator==(Triangle p)
     {
         if(area==p.area)
            return 1;
         else
            return 0;
     }
     Triangle operator+(int x)
     {
         Triangle temp;
         temp.base=base+x;
         return temp;

     }
};
int main()
{
    Triangle ob1(20,30),ob2(40,50),ob3,ob4;
    ob1.calArea();
    ob2.calArea();
    ob3.calArea();
    ob4.calArea();
    if(ob1>ob2)
        cout<<"Triangle 1 is greater"<<endl;
    else
        cout<<"Triangle 2 is greater"<<endl;
    if(ob1==ob2)
        cout<<"Triangle 1 is equal to Triangle 2"<<endl;
    else
        cout<<"Triangle 1 is not equal to Triangle 2"<<endl;
    ob3=ob1+10;
    ob4=ob2+10;
    cout<<ob3.base<<endl<<ob4.base<<endl;
}
