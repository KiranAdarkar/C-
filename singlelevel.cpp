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


int main()
{   
	Derived * ptr = NULL;

	//Derived dobj;             // Static memory allocation

	ptr = new Derived;         // Dynamic memory allocation

	ptr->fun();
	ptr->gun();

	delete ptr;

    return 0;

}