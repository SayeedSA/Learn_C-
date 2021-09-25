#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator++()
    {
        a=++a;
        b=++b;
    }
};
int main()
{
    A ob1(10,30);
    ++ob1;
    cout<<ob1.a<<endl<<ob1.b;
}
