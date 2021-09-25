#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int intake,section;
    long long roll;
    void set_name(string raj)
    {
        name=raj;

    }
    void set_intake(int x)
    {
        intake=x;

    }
    void set_section(int y)
    {
        section=y;

    }
    void set_roll(long long z)
    {
        roll=z;
    }
    void show()
    {
        cout<<"student name is:"<<name<<"\n"<<"intake:"<<intake<<"\n"<<"section:"<<section<<"\n"<<"roll:"<<roll<<"\n";

    }

};
int main()
{
    student ob;
    string n;
    cout<<"enter the student:";
    cin>>n;
    ob.set_name(n);
    ob.set_intake(38);
    ob.set_section(3);
    ob.set_roll(17182103135);
    ob.show();
}
