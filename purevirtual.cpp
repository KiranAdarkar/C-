#include<iostream>
using namespace std;

class Circle
{
	public:                                   //Access Specifier   
	     float PI;                            //Characteristics
		 float Radius;

		 Circle()                             //Default Constructor
		 {
			 PI = 3.14;
			 Radius = 0.0;
		 }
		 Circle(float A,float B)            //Parameterised Constructor
		 {
			 PI = A;
			 Radius = B;
		 }
		 void Display()                           //concrete method // 1000
		 {
			 cout<<"Value of Radius is : "<<Radius<<"\n";
		 }
		 virtual float Area() = 0;         //Pure virtual Function(abstract method)
		 virtual float Circumference() = 0;  //Pure virtual Function(abstract method)
};

class Marvellous : public Circle
{
    public:
		 Marvellous() : Circle()
		 {

		 }
		 Marvellous(float X, float Y) : Circle(X,Y)
		 {

		 }

	     float Area()                    //concrete method   // 2000
		 {
			 float Ans = PI * Radius * Radius;
			 return Ans;
		 }
		 float Circumference()          //concrete method   // 3000
		 {
			 float Ans = 0.0;
			 Ans = 2 * PI * Radius;
			 return Ans;
		 }		 
};

int main()
{
	Marvellous mobj1;
	Marvellous mobj2(3.14,10.89);

	float fret = 0.0;

	fret = mobj2.Area();
	cout<<"Area is : "<<fret<<"\n";

	fret = mobj2.Circumference();
	cout<<"Circumference is : "<<fret<<"\n";
	

	return 0;
}