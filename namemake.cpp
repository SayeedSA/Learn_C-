#include<iostream>
using namespace std;
class Name
{
    public:
    string x;
    Name(string a)
    {
        x=a;
    }
    Name()
    {

    }
    Name operator+(Name p)
    {
        Name temp;
        temp.x=x+" "+p.x;

        return temp.x;
    }
};
int main()
{
    Name first("Rakibul"),middle("Hassan"),last("Pranto");
    Name temp1;
    temp1=first+middle;
    temp1=temp1+last;

    cout<<temp1.x;

}
