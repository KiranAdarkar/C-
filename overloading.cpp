#include<iostream>

using namespace std;

class overloading
{
	public:
	     
		 int Add(int a, int b)
		 {
		     cout<<"Addition of 2 integers\n";
			 return a + b;
		 }

		 float Add(float a, float b)
		 {
			 cout<<"Addition of 2 floats\n";
			 return a + b;

		 }

		 double Add(double a, double b)
		 {
			 cout<<"Addition of 2 doubles\n";
			 return a + b;
		 }

		 int Add(int a, int b, int c)
		 {
			 cout<<"Addition of 3 integers\n";
			 return a + b + c;
		 }

};

int main()
{
	overloading obj;
	
	obj.Add(11,21);
	obj.Add(11,21,51);
	obj.Add(10.9,11.8f);
	obj.Add(10.9,11.8);


	return 0;
}