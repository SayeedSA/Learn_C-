#include<iostream>
using namespace std;
class Result
{
    public:
    float c1,c2,c3,c4,c5,avg;
    float sgpa(float x,float y,float z)
    {
        c1=x;
        c2=y;
        c3=z;
        avg=(c1+c2+c3)/3;
        return avg;
    }
    float sgpa(float x,float y,float z,float a)
    {
        c1=x;
        c2=y;
        c3=z;
        c4=a;
        avg=(c1+c2+c3+c4)/4;
        return avg;
    }
    float sgpa(float x,float y,float z,float a,float b)
    {
        c1=x;
        c2=y;
        c3=z;
        c4=a;
        c5=b;
        avg=(c1+c2+c3+c4+c5)/5;
        return avg;
    }
    void show()
    {
        cout<<"SGPA:"<<avg;
    }

};
int main()
{
     Result ob;
     float p=ob.sgpa(3.56,3.00,2.98);
     float q=ob.sgpa(3.56,3.55,3.90,3.55);
     float r=ob.sgpa(4,3.00,3.98,3.00,3.54);
     ob.show();

}

