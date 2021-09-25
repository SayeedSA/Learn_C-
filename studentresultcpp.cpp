#include<iostream>
using namespace std;
class Student
{
public:
    long long id;
    double sgpa;
    int intake,section,year;
    string name,department,semester;
    Student(long long i,int intk,int sec,string nm,string dept)
    {
        id=i;
        intake=intk;
        section=sec;
        name=nm;
        department=dept;

    }
    void a(double sg,int yr,string sem)
    {
        sgpa=sg;
        year=yr;
        semester=sem;
    }
    void show()
    {
        cout<<"Name is:"<<name<<"\n";
        cout<<"ID is:"<<id<<"\n";
        cout<<"Intake is:"<<intake<<"\n";
        cout<<"Section is:"<<section<<"\n";
        cout<<"Department is:"<<department<<"\n";
        cout<<"Semester is:"<<semester<<"\n";
        cout<<"Year is:"<<year<<"\n";
        cout<<"SGPA is:"<<sgpa<<"\n";

    }
};
int main()
{
    Student ob(17182103096,38,3,"MD. Rakibul Hassan","CSE");
    ob.a(3.58,2018,"Fall");
    ob.show();
}

