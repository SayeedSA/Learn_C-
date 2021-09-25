#include<iostream>
using namespace std;
template<class X>void compare(X a,X b,X c)
{
    if(a>b && a>c)
    {
        cout<<"Greater Value:"<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"Greater Value:"<<b<<endl;
    }
    else
        {
            cout<<"Greater Value:"<<c<<endl;
    }
}
int main()
{
    compare(12,20,30);
    compare('a','b','C');
}
