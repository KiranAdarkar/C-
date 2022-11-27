#include<iostream>
using namespace std;

void fun(int no)                   //call by value
{
	cout<<"Inside call by value : "<<no<<"\n";
	no++;
}
void gun(int *p)                   //call by address
{
	cout<<"Inside call by address : "<<*p<<"\n";
	(*p)++;
}
void sun(int &ref)                 //call by referance
{
	cout<<"Inside call by referance : "<<ref<<"\n";
	ref++;
}
int main()
{
	int i = 10;              //100-104
	int j = 10;              //200-204
	int k = 10;              //300-304

	fun(i);                  //fun(10);
	cout<<i<<"\n";
	gun(&j);                 //gun(200);
	cout<<j<<"\n";
	sun(k);                  //sun(k);
	cout<<k<<"\n";

	return 0;
}