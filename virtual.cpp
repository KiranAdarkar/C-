#include<iostream>
using namespace std;

class Base
{
	public:                           //Access Specifier   
	     int A,B;

		 void fun()                          //Function Definition   1000
		 {
			 cout<<"Base fun\n";
		 }
		 virtual void gun()                  //Function Definition   2000
		 {
			 cout<<"Base gun\n";
		 }
		 virtual void sun()                  //Function Definition  3000 
		 {
			 cout<<"Base sun\n";
		 }
};

class Derived : public Base
{
    public:
	     int X,Y;

		 
		 void gun()                         //Function Redefinition   4000
		 {
			 cout<<"Derived gun\n";       
		 }
		 void run()                         //Function Definition    5000
		 {
			 cout<<"Derived run\n";        
		 }
		 virtual void mun()                 //Function Definition  6000  
		 {
			 cout<<"Derived mun\n";        
		 }
};

int main()
{
	cout<<"Size of Base class : "<<sizeof(Base)<<"\n";          //16(8 + 4(sizeof*) )

	cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";    //20(16 + 4(sizeof*) )

	Base * bp =NULL;
	Derived dobj;

	bp = &(dobj);                     //Upcasting

	bp->fun();                        //Call 1000
	bp->gun();                        //Call 4000        Overriding
	bp->sun();                        //Call 3000

	return 0;
}