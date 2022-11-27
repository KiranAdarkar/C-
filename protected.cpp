#include<iostream>

using namespace std;

class Base
{
	int X;                                       //private

	public:
	   int i;
	private:
	   int j;
	protected:
	   int k;
    
	public:
    Base()
	{
		i = 10;
		j = 20;
		k = 30;
		X = 40;
    }

};

class Derived : public Base
{
	public :
	    void fun()
		{
		     cout<<"Value of public i of Base : "<<i<<"\n";          //A
		     cout<<"Value of private j of Base : "<<j<<"\n";         //NA
		     cout<<"Value of protected k of Base : "<<k<<"\n";       //A
	         cout<<"Value of X of Base : "<<X<<"\n";                 //NA
             
		}
};

int main()
{
    Derived dobj;

	cout<<"Value of public i : "<<dobj.i<<"\n";          //A
	cout<<"Value of private j : "<<dobj.j<<"\n";         //NA
	cout<<"Value of protected k : "<<dobj.k<<"\n";       //NA
	cout<<"Value of X : "<<dobj.X<<"\n";                //NA

	dobj.fun();
	
    return 0;

}