#include<iostream>
using namespace std;

class Result
{
public:
    float c1,c2,c3,c4,avg;
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
    void show()
    {
        cout<<"sgpa:"<<avg;
    }
};
int main()
{
    Result ob();
    float p=ob.sgpa(3.55,3.40,4.00);
    float q=ob.sgpa(2.98,3.50,3.95,3.44);
    ob.show();
}
