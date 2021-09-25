#include<iostream>
using namespace std;
class Bank
{ public:
    string name;
    long long acno,balance,deposit,withdraw;
    Bank(string x,long long y)
    {
        name=x;
        acno=y;
    }
    void Deposit(long long a)
    {
        deposit=a;
    }
    void Withdraw(long long b)
    {
        withdraw=b;
    }
    void Balance()
    {
        balance=1000;
        balance=balance+deposit;
        balance=balance-withdraw;
    }
    void show()
    {
        cout<<"Name:"<<name<<endl<<"Account No:"<<acno<<endl<<"Recent Balance:"<<balance<<endl<<"........."<<" "<<".........";
    }


};
int main()
{
    Bank ob("MD Rakibul Hassan",12659044);
    ob.Deposit(5000);
    ob.Withdraw(2500);
    ob.Balance();
    ob.show();
}
