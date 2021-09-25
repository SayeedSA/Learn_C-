#include<iostream>
using namespace std;
class A
{
protected:
      int c;
    public:
    int a,b;

    void seta(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
};
class B:public A
{
    public:
    int d,e;
    void setb(int m,int n)
    {
        d=m;
        e=n;
        cout<<c<<endl;
    }

};
int main()
{
    B ob;
    ob.seta(10,20,30);
    ob.setb(40,50);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;

    cout<<ob.d<<endl;
    cout<<ob.e<<endl;

}
