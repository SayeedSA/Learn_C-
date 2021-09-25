#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c;
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    A()
    {
        a=0;
        b=0;
        c=0;
    }
    A operator+(A p)
    {
        A temp;
        temp.a=a+p.a;
        temp.b=b+p.b;
        temp.c=c+p.c;
        return temp;
    }
};
int main()
{
    A ob1(10,20,30),ob2(20,40,50),ob3(20,30,40),ob4;
    ob4=ob1+ob2;
    ob4=ob4+ob3;
    cout<<ob4.a<<endl<<ob4.b<<endl<<ob4.c;
}
