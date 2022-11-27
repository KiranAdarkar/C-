#include<iostream>
using namespace std;

class Base
{
	public:                                   //Access Specifier   
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
		 virtual void run()                  //Function Definition  4000 
		 {
			 cout<<"Base run\n";
		 }
};

class Derived : public Base
{
    public:
	     int X,Y;

		 
		 void gun()                                 //Function Redefinition   5000
		 {
			 cout<<"Derived gun\n";       
		 }
		 virtual void run()                         //Function Redefinition    6000
		 {
			 cout<<"Derived run\n";        
		 }
		 virtual void mun()                         //Function Definition  7000  
		 {
			 cout<<"Derived mun\n";        
		 }
};

int main()
{
	Base * bp = new Derived;

	Derived dobj;

	bp = &(dobj);                                    //Upcasting

	bp->fun();                                       //Base fun
	bp->gun();                                       //Derived gun
	bp->sun();                                       //Base sun
	bp->run();                                       //Derived run
	//bp->mun();                                     // ERROR 


	return 0;
}