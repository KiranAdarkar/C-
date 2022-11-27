#include<iostream>
using namespace std;

class Base
{
	public:                               //Access Specifier   
	     int A,B;                 

};                                        // 8

class Derived : public Base
{
    public:
	     int X,Y;                   

};                                       // 16

int main()
{
	Base * bp = NULL;
	Derived * dp = NULL;

	Base bobj;
	Derived dobj;

	bp = &bobj;               // no casting         A
	dp = &dobj;               // no casting         A

	bp = &dobj;               // Upcasting          A
	dp = &bobj;               // Downcasting        NA

	return 0;
}