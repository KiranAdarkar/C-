#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;


		Demo()                         //default
		{
			i = 51;
			j = 101;
		}

		Demo(int x, int y)             //parameterised
		{
			i = x;
			j = y;
		}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20);

	const Demo obj3;                  // constant object
	const Demo obj4(10,20);           // constant object

	obj1.i++;
	obj1.j++;

	obj2.i++;
	obj2.j++;

	obj3.i++;              //NA
	obj3.j++;              //NA

	obj4.i++;              //NA
	obj4.j++;              //NA

	return 0;
}