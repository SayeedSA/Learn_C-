#include<iostream>
using namespace std;
class box
{
public:
    double L,W,H,V;
    box(double x,double y,double z)
    {
        L=x;
        W=y;
        H=z;
        cout<<"Length is:"<<L<<endl<<"Width is:"<<W<<endl<<"High is:"<<H<<endl;

    }
    void voll()
    {
        V=L*W*H;
        cout<<"Volume is:"<<V;
    }
};
int main()
{
    box ob(1,2,3);
    ob.voll();
}
