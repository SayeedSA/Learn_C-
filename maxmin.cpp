#include<iostream>
using namespace std;
class Max
{
    public:
    int a,b,c,s;
    double m,n,o,l;
    char p,q,r,u;

    int compare(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        if(a>b && a>c)
        {   s=a;
            return s;
        }
        else if(b>a && b>c)
        {
            s=b;
            return s;
        }
        else
            {
                s=c;
            return s;
            }
    }
        double compare(double x,double y,double z)
    {
        m=x;
        n=y;
        o=z;
        if(m>n && m>o)
        {    l=m;
            return l;
        }
        else if(n>m && n>o)
        {
            l=n;
            return l;
        }
        else
            {
                l=o;
                return l;
            }
    }
        char compare(char x,char y,char z)
    {
        p=x;
        q=y;
        r=z;
        if(p>q && p>r)
        {
            u=p;
            return u;
        }
        else if(q>p && q>r)
        {
            u=q;
            return u;
        }
        else
            {
            u=r;
            return u;
            }
    }

};
int main()
{
    Max ob1,ob2,ob3;
    int h=ob1.compare(5,7,9);
    cout<<h<<" "<<"is the greater"<<endl;
    double j=ob2.compare(2.33,4.55,9.87);
    cout<<j<<" "<<"is the greater"<<endl;
    char k=ob3.compare('a','b','c');
    cout<<k<<" "<<"is the greater"<<endl;
}
