#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;
		const int k;                            //constant characteristics
		const int l;                            //constant characteristics

		Demo() : k(11), l(21)                       //default
		{
			i = 51;
			j = 101;
		}

		Demo(int a, int b, int c, int d) : k(c), l(d)        //parameterised
		{
			i = a;
			j = b;
		}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20,30,40);

	obj1.i++;
	obj2.i++;
	obj1.k++;                          //NA
	obj2.k++;                          //NA


	return 0;
}