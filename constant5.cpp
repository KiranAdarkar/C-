#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;                     //constant characteristics

		Demo(int x = 10, int y = 20) : j(y)     //parameterised constructor with default value
		{
			i = x;
		}
		void fun()
		{
			int a =  10;
			const int b = 20;             //constant variable

			i++;                          // A
			j++;                          // NA (line no 8)
			a++;                          // A
			b++;                          // NA (line no 17)
		}
		void gun() const                 // constant behavior
		{
			int a =  10;                
			const int b = 20;            //constant variable

			i++;                         //NA (line no 24) 
			j++;                         //NA (line no 24)
			a++;                         //A (line no 26) 
			b++;                         //NA (line no 27) 
		}
};

int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);              //constant object      

	obj1.fun();                          // A
	obj1.gun();                          // A
	obj2.fun();                          // NA (constant object can call only constant)
	obj2.gun();                          // A

	obj1.i++;                           // A
	obj1.j++;                           // NA(j is constant)
	obj2.i++;                           // NA(obj2 is constant)
	obj2.j++;                           // NA(obcj2 is constant)



	return 0;
}