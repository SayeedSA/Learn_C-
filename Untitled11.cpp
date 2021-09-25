#include<iostream>
 using namespace std;

 class A

 {
     public:
     int f1(int a, int b)
     {

     };
     void f2( )
     {

     };
 };
 class B
 {
     public:
     int f1(int a, int b)
     {

     };
     void f2(float a)
     {

     };
 };
 int main()
 {
     A x;
     int xx=x.f1(2,5);
     x.f2();
     B y;
     int xy=y.f1(5,6);
     y.f2(2.5);
 }
