#include<iostream>

using namespace std;

class Maths
{
    public:                         //Access Specifier
        int iNo1;                   //Characteristics
        int iNo2;                   //Characteristics
    
    Maths()                         //Constructor (Default)
    {
        cout<<"Inside Default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }
    Maths(int A, int B)            //Constructor (Parameterised)
    {
        cout<<"Inside Parameterised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
    ~Maths()                       //Destructor
    {
        cout<<"Inside destructor\n";
    }

    int Addition()                 //Behavior  // int Addition(Maths *this)
    {
        return iNo1 + iNo2;
    }
    int Subtraction()             //Behavior   //int Subtraction(Maths *this)
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    cout<<"Inside main function\n";

    Maths mobj1;
    Maths mobj2(11,10);
    int ret = 0;

    ret = mobj2.Addition();                 //ret = Addition(&mobj2);
                                            //ret = Addition(200);
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Addition();                 //ret = Addition(&mobj1);
                                            //ret = Addition(100);
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Subtraction();             //ret = Subtraction(&mobj1);
    cout<<"Subtraction is : "<<ret<<"\n";   //ret = Subtraction(100);

    ret = mobj2.Subtraction();             //ret = Subtraction(&mobj2);
    cout<<"Subtraction is : "<<ret<<"\n";   //ret = Subtraction(200);

    return 0;
}