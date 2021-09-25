#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int intake,section;
    long long roll;
    void setname(string x)
    {
        name=x;
    }
     void setintake(int y)
    {
        intake=y;
    }
     void setsection(int z)
    {
        section=z;
    }
     void setroll(long long p)
    {
        roll=p;
    }
 void show()
    {
        cout<<"Name:"<<name<<"\n"<<"Intake:"<<intake<<"\n"<<"Section:"<<section<<"\n"<<"Roll:"<<roll<<"\n"<<".....................";
    }
} ;
int main()
{
    student st;
    string Rakib;
    cin>>Rakib;
    st.setname(Rakib);
    st.setintake(38);
    st.setsection(3);
    st.setroll(17182103096);
    st.show();

}
