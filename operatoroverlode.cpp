#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
A(int x,int y)
{a=x;
b=y;}
int operator>(A t)
{int l=a+b;
int m=t.a+t.b;
if(l>m)
return 1;
else
return 0;
}
};
int main()
{
A ob1(10,30),ob2(20,30);
if(ob1>ob2)
cout<<"obj1 is greater";
else
cout<<"obj2 is greater";
}
