#include<iostream>
using namespace std;
class Box
{
    public:
    double l,w,h,v;
    Box(double x,double y,double z)
    {
        l=x;
        w=y;
        h=z;
    }
    Box()
    {
        l=0;
        w=0;
        h=0;
    }
    void calVolume()
    {
        v=l*w*h;
    }
    int operator>(Box p)
     {
         if(v>p.v)
            return 1;
         else
            return 0;
     }
     Box operator+(int x)
     {
         Box temp;
         temp.l=l+x;
         temp.w=w+x;
         temp.h=h+x;
         return temp;
     }
          Box operator-(int x)
     {
         Box temp;
         temp.l=l-x;
         temp.w=w-x;
         temp.h=h-x;

         return temp;
     }


};
int main()
{
    Box ob1(10,20,30),ob2(20,30,40);
    ob1.calVolume();
    ob2.calVolume();

    if(ob1>ob2)
       {
        ob1=ob1-10;
        ob2=ob2+10;
        \
       }
        else
        {
            ob1=ob1+10;
            ob2=ob2-10;

        }
            ob1.calVolume();
            ob2.calVolume();
        if(ob1>ob2)
           {

            cout<<"box1 is greater"<<endl;
             cout<<ob1.v<<endl<<ob2.v<<endl;
           }
        else
           {
               cout<<"box2 is greater"<<endl;
            cout<<ob1.v<<endl<<ob2.v<<endl;
           }


}

