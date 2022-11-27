#include<iostream>

using namespace std;

class Base1
{
	public:
	   int A;             

	Base1()
	{
		cout<<"Inside Base1 constructor\n";
    }

	~Base1()
	{
		cout<<"Inside Base1 destructor\n";
	}
	void fun()
	{
		cout<<"Inside fun of Base1\n";
	}
};


class Base2       
{
	public :
	    int I,J,K;                       

		Base2()
		{
			cout<<"Inside Base2 constructor\n";
		}
		~Base2()
		{
			cout<<"Inside Base2 destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of Base2\n";
		}
};


class Derived : public Base1, public Base2       //Not allowed in Java
{
	public:
	    int X,Y;

		Derived()
		{
			cout<<"Inside Derived constructor\n";
		}	
		~Derived()
		{
		    cout<<"Inside Derived destructor\n";
		}
		void sun()
		{
			cout<<"Inside sun of Derived\n";
		}
};


int main()
{   
	Derived dobj;

	dobj.fun();
	dobj.gun();
	dobj.sun();


    return 0;

}