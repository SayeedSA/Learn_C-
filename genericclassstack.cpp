#include<iostream>
using namespace std;
template<class T>
class stak
{
    public:
  int top;
  T S[100];
  stak()
  {
      top=0;
  }
  void push(T x)
  {
      S[top]=x;
      top++;
  }
  T pop()
  {
      top--;
      return S[top];
  }
};
int main()
{
    stak<int> s1;
    stak<char> s2;
    s1.push(34);
    s1.push(36);
    int b=s1.pop();
    cout<<b;
    s2.push('B');
    s2.push('D');
    char c=s2.pop();
    cout<<c;
}
