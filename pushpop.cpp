#include<iostream>
using namespace std;
class stack
{
    public:
    char a[100],top=0;
    void push(char x)
    {
        a[top]=x;
        top++;
    }
    char pop()
    {
        top--;
        return a[top];
    }
};
  int main()
{
    stack ob;
    ob.push('A');
    ob.push('B');
    ob.push('C');
    char b=ob.pop();
    cout<<b;
    char c=ob.pop();
    cout<<"\n"<<c;

}


