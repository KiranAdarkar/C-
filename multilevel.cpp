#include<iostream>

using namespace std;

class Base
{
	public:
	   int A,B;                      //two characteristics  

	Base()
	{
		cout<<"Inside Base constructor\n";
    }

	~Base()
	{
		cout<<"Inside Base destructor\n";
	}
	void fun()
	{
		cout<<"Inside fun of Base\n";
	}
};


class Derived : public Base       //class Derived extends Base (Syntax of Java)
{
	public :
	    int X,Y;                        //two characteristics

		Derived()
		{
			cout<<"Inside Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of Derived\n";
		}
};


class DerivedX : public Derived        //class DerivedX extends Derived (Syntax of Java)
{
	public:
	   int i,j;
	   DerivedX()
	   {
		   cout<<"Inside DerivedX constructor\n";
	   }
	   ~DerivedX()
	   {
		   cout<<"Inside DerivedX destructor\n";
	   }
	   void sun()
	   {
			cout<<"Inside sun of DerivedX\n";

	   }
};


int main()
{  

	cout<<"Size of Base : "<<sizeof(Base)<<"\n";
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
	cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";

	DerivedX dobj;                      //Static memory allocation

	dobj.fun();
	dobj.gun();
	dobj.sun();

    return 0;

}