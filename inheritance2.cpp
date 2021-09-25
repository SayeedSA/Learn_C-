#include<iostream>
using namespace std;
class A
{
    protected:
      int c;
    public:
    int a,b;

    void seta()
    {
        a=10;
        b=20;
        c=30;
    }
};
class B:private A
{
    public:
    int d,e;
    void setb()
    {
        d=40;
        e=50;
    }
 public:
     void show()
  {
    seta();
    setb();

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
  }

};

int main()
{
    B ob;
    ob.show();


}

