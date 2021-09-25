#include<iostream>
using namespace std;
class box
{   public:
    float h,l,w;
    box()
    {
        h=10;
        l=2;
        w=5;
    }
    box(float x,float y,float z)
    {
        h=x;
        l=y;
        w=z;
    }
    void show()
    {
        cout<<"Hight:"<<h<<endl<<"Length:"<<l<<endl<<"Weight:"<<w<<endl;
    }
};
int main()
{
    box ob;
    box ob2;
    box ob3;
    box ob4;
    box ob5;
    ob.show();
    box ob1(5,6,7);
    ob1.show();

}
