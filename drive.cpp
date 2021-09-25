
#include<iostream>
using namespace std;
class Drive
{
    public:
    int TotalCapacity;
    float Free,Used;
    Drive()
    {
        TotalCapacity=10;
        Used=0;
        Free=TotalCapacity;
    }
    void upload(float a)
    {
        Used=Used+a;
        Free=Free-a;
    }
    void delette(float b)
    {
        Used=Used-b;
        Free=Free+b;
    }
    void upgrade(int x)
    {
        TotalCapacity=TotalCapacity+x;
        Free=Free+x;
    }
    void show()
    {
        cout<<"C Drive"<<endl<<"Total Capacity:"<<TotalCapacity<<endl<<"Used:"<<Used<<endl<<"Free:"<<Free<<endl;
    }
};
int main()
{
    Drive ob;
    ob.upload(5.00);
    ob.delette(2.00);
    ob.upgrade(5);
    ob.show();
}
