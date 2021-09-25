#include<iostream>
using namespace std;

    class B
    {
        public:
        int a;
        B(int x)
        {
            a=x;
            cout<<"constructing B"<<"\n";
        }
        ~B()
        {
            cout<<"destructing B"<<"\n";

        }
    };
    class A
{
    public:
    int a;
    A(int x)
    {
        B ob(20);
         a=x;

        cout<<"constructing A"<<"\n";
    }
    ~A()
    {
        cout<<a;
        cout<<"destructing A"<<"\n";
    }
    };
int main()
    {
        A ob(10);

        cout<<"here"<<"\n"<<ob.a<<"\n";

}
