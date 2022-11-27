#include<iostream>
using namespace std;

class Base
{
	public:                               //Access Specifier   
	     int A,B;

		 void fun()                       //Function Definition   1000
		 {
			 cout<<"Base fun\n";
		 }
		 void gun(int i)                  //Function Definition   2000
		 {
			 cout<<"Base gun with one integer\n";
		 }
		 void gun(int i , int j)          //Overloaded Function Definition   3000
		 {
			 cout<<"Base gun with two integers\n";
		 }
};

class Derived : public Base
{
    public:
	     int X,Y;

		 void sun()                        //Function Definition    4000
		 {
			 cout<<"Derived sun\n";        
		 }
		 void fun()                       //Function Redefinition   5000
		 {
			 cout<<"Derived fun\n";       
		 }
};

int main()
{
	Derived dobj;
	Base bobj;

	dobj.fun();							//Call 5000
	dobj.gun(11);					    //Call 2000
	dobj.gun(11,21);			        //Call 3000
	dobj.sun();						    //Call 4000
	
	bobj.fun();                         //Call 1000

	dobj.Base::fun();                   //Call 1000

	return 0;
}