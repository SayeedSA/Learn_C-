#include<iostream>
using namespace std;
class C
{
public:
    C()
    {
        cout<<"constructing C....."<<"\n";
    }
    ~C()
    {
        cout<<"Destructing C....."<<"\n";
    }
};
class B
{
public:
    int x;
    B(int a)
    {
        cout<<"constructing B....."<<"\n";
        x=a;
    }
    ~B()
    {
        cout<<"Destructing B....."<<"\n";
    }
};
class A
{
public:
    int a;
    char b;
    A(int x,char y)
    {
        C ob;
        a=x;
        b=y;
        cout<<"Constructing A....."<<"\n";
    }
    void show()
    {
        B ob(20);
        cout<<a<<"\n"<<b<<"\n"<<ob.x<<"\n";
    }
};
int main()
{
    A ob(10,'a');
    ob.show();
}
